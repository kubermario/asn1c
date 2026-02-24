#include "asn1fix_internal.h"

typedef struct resolver_arg {
	asn1p_expr_t	  *(*resolver)(asn1p_expr_t *, void *arg);
	arg_t		  *arg;
	asn1p_expr_t	  *original_expr;
	asn1p_paramlist_t *lhs_params;
	asn1p_expr_t	  *rhs_pspecs;
} resolver_arg_t;

static asn1p_expr_t *resolve_expr(asn1p_expr_t *, void *resolver_arg);
static int compare_specializations(const asn1p_expr_t *a, const asn1p_expr_t *b);
static asn1p_expr_t *find_target_specialization_byvalueset(resolver_arg_t *rarg, asn1p_constraint_t *ct);
static asn1p_expr_t *find_target_specialization_byref(resolver_arg_t *rarg, asn1p_ref_t *ref);
static asn1p_expr_t *find_target_specialization_bystr(resolver_arg_t *rarg, char *str);

asn1p_expr_t *
asn1f_parameterization_fork(arg_t *arg, asn1p_expr_t *expr, asn1p_expr_t *rhs_pspecs) {
	resolver_arg_t rarg;	/* resolver argument */
	asn1p_expr_t *exc;	/* expr clone */
	asn1p_expr_t *rpc;	/* rhs_pspecs clone */
	asn1p_expr_t *m;	/* expr members */
	asn1p_expr_t *target;
	void *p;
	struct asn1p_pspec_s *pspec;
	int npspecs;

	assert(rhs_pspecs);
	assert(expr->lhs_params);
	assert(expr->parent_expr == 0);

	/*
	 * Find if this exact specialization has been used already.
	 *
	 * KEY INSIGHT: Each usage site (different line number) MUST get its own
	 * specialization for correct type naming, even if content is identical.
	 * Only reuse if BOTH line number AND content match.
	 *
	 * KNOWN LIMITATION: Line numbers can change between parsing and C generation
	 * phases due to file merging/preprocessing, which may cause type name mismatches
	 * for empty IOC sets in some standards (IS/MAPEM/SPATEM regional extensions).
	 * See CLAUDE.md for details.
	 */
	for(npspecs = 0;
		npspecs < expr->specializations.pspecs_count;
			npspecs++) {
		asn1p_expr_t *existing_rhs = expr->specializations.pspec[npspecs].rhs_pspecs;

		/* Line number must match for reuse */
		if(rhs_pspecs->_lineno != existing_rhs->_lineno) {
			continue;
		}

		/* Line numbers match, now check content */
		if(compare_specializations(rhs_pspecs, existing_rhs) == 0) {
			DEBUG("Reused parameterization for %s at line %d",
				expr->Identifier, rhs_pspecs->_lineno);
			return expr->specializations.pspec[npspecs].my_clone;
		}
	}

	DEBUG("Forking parameterization at %d for %s (%d alr)",
		rhs_pspecs->_lineno, expr->Identifier,
		expr->specializations.pspecs_count);

	/*
	 * Prepare resolver arguments.
	 * Use resolve_expr which has ANY type fallback for unresolvable references.
	 * This handles both populated and empty IOC sets gracefully.
	 */
	rarg.arg = arg;
	rarg.original_expr = expr;
	rarg.lhs_params = expr->lhs_params;
	rarg.rhs_pspecs = rhs_pspecs;
	rarg.resolver = resolve_expr;

	exc = asn1p_expr_clone_with_resolver(expr, resolve_expr, &rarg);
	if(!exc) return NULL;

	/*
	 * DO NOT override exc->_lineno - it should keep the original expr's line number.
	 * The member that references this specialization will provide its own line number
	 * when generating the reference name.
	 */

	rpc = asn1p_expr_clone(rhs_pspecs, 0);
	assert(rpc);

	/*
	 * Create a new specialization.
	 */
	npspecs = expr->specializations.pspecs_count;
	p = realloc(expr->specializations.pspec,
			(npspecs + 1) * sizeof(expr->specializations.pspec[0]));
	assert(p);
	expr->specializations.pspec = p;
	pspec = &expr->specializations.pspec[npspecs];
	memset(pspec, 0, sizeof *pspec);

	pspec->rhs_pspecs = rpc;
	pspec->my_clone = exc;
	exc->spec_index = npspecs;

	/*
	 * Clone rhs_pspecs using the ANY-fallback resolver.
	 */
	exc->rhs_pspecs = asn1p_expr_clone_with_resolver(expr->rhs_pspecs ?
					expr->rhs_pspecs : rhs_pspecs,
					resolve_expr, &rarg);

	/* Passing arguments to members and type references */

	target = TQ_FIRST(&expr->members);
	TQ_FOR(m, &exc->members, next) {
		m->rhs_pspecs = asn1p_expr_clone_with_resolver(target->rhs_pspecs ?
						target->rhs_pspecs : exc->rhs_pspecs,
						resolve_expr, &rarg);
		target = TQ_NEXT(target, next);
	}

	DEBUG("Forked new parameterization for %s", expr->Identifier);

	/* Commit */
	expr->specializations.pspecs_count = npspecs + 1;
	return exc;
}

static int
compare_specializations(const asn1p_expr_t *a, const asn1p_expr_t *b) {
    return asn1p_expr_compare(a, b);
}

/*
 * Resolver for parameterized type references.
 *
 * This resolver attempts to find the actual type from the IOC set. If the IOC set
 * is empty or cannot be resolved (e.g., empty extensible IOC sets used for future
 * extensions), it falls back to creating an ANY type instead of failing.
 *
 * This allows parameterized types to be generated even when IOC sets are empty,
 * which is common in ETSI ITS standards for regional extension points.
 */
static asn1p_expr_t *
resolve_expr(asn1p_expr_t *expr_to_resolve, void *resolver_arg) {
	resolver_arg_t *rarg = resolver_arg;
	arg_t *arg = rarg->arg;
	asn1p_expr_t *expr;
	asn1p_expr_t *nex;

	DEBUG("Resolving %s (meta %d)",
		expr_to_resolve->Identifier, expr_to_resolve->meta_type);

	if(expr_to_resolve->meta_type == AMT_TYPEREF) {
		expr = find_target_specialization_byref(rarg,
				expr_to_resolve->reference);
		/* Fallback to ANY type if resolution fails (empty IOC set) */
		if(!expr) {
			nex = asn1p_expr_new(expr_to_resolve->_lineno, NULL);
			if(!nex) return NULL;
			nex->Identifier = expr_to_resolve->Identifier ? strdup(expr_to_resolve->Identifier) : NULL;
			nex->meta_type = AMT_TYPE;
			nex->expr_type = ASN_TYPE_ANY;
			return nex;
		}
	} else if(expr_to_resolve->meta_type == AMT_VALUE) {
		if(!expr_to_resolve->value) return NULL;
		expr = find_target_specialization_bystr(rarg,
				expr_to_resolve->Identifier);
		/* Fallback to ANY type if resolution fails (empty IOC set) */
		if(!expr) {
			nex = asn1p_expr_new(expr_to_resolve->_lineno, NULL);
			if(!nex) return NULL;
			nex->Identifier = expr_to_resolve->Identifier ? strdup(expr_to_resolve->Identifier) : NULL;
			nex->meta_type = AMT_TYPE;
			nex->expr_type = ASN_TYPE_ANY;
			return nex;
		}
	} else if(expr_to_resolve->meta_type == AMT_VALUESET) {
		assert(expr_to_resolve->constraints);
		expr = find_target_specialization_byvalueset(rarg,
				expr_to_resolve->constraints);
		/* Fallback to ANY type if resolution fails (empty IOC set) */
		if(!expr) {
			nex = asn1p_expr_new(expr_to_resolve->_lineno, NULL);
			if(!nex) return NULL;
			nex->Identifier = expr_to_resolve->Identifier ? strdup(expr_to_resolve->Identifier) : NULL;
			nex->meta_type = AMT_TYPE;
			nex->expr_type = ASN_TYPE_ANY;
			return nex;
		}
	} else {
		errno = ESRCH;
		return NULL;
	}

	DEBUG("Found target %s (%d/%x)",
		expr->Identifier, expr->meta_type, expr->expr_type);
	if(expr->meta_type == AMT_TYPE
	|| expr->meta_type == AMT_VALUE
	|| expr->meta_type == AMT_TYPEREF
	|| expr->meta_type == AMT_VALUESET) {
		DEBUG("Target is a simple type %s",
			ASN_EXPR_TYPE2STR(expr->expr_type));
		nex = asn1p_expr_clone(expr, 0);
		free(nex->Identifier);
		nex->Identifier = expr_to_resolve->Identifier
			? strdup(expr_to_resolve->Identifier) : 0;
		return nex;
	} else {
		FATAL("Feature not implemented for %s (%d/%x), "
			"please contact the asn1c author",
			rarg->original_expr->Identifier,
			expr->meta_type, expr->expr_type);
		errno = EPERM;
		return NULL;
	}

	return NULL;
}

static asn1p_expr_t *
find_target_specialization_byvalueset(resolver_arg_t *rarg, asn1p_constraint_t *ct) {
	asn1p_ref_t *ref;

	if (ct->type != ACT_EL_TYPE) return NULL;

	ref = ct->containedSubtype->value.v_type->reference;

	return find_target_specialization_byref(rarg, ref);
}

static asn1p_expr_t *
find_target_specialization_byref(resolver_arg_t *rarg, asn1p_ref_t *ref) {
	char *refstr;

	if(!ref || ref->comp_count != 1) {
		errno = ESRCH;
		return NULL;
	}

	refstr = ref->components[0].name;	/* T */

	return find_target_specialization_bystr(rarg, refstr);
}

static asn1p_expr_t *
find_target_specialization_bystr(resolver_arg_t *rarg, char *refstr) {
	arg_t *arg = rarg->arg;
	asn1p_expr_t *target;
	int i;

	if(!refstr) return NULL;

	target = TQ_FIRST(&rarg->rhs_pspecs->members);
	for(i = 0; i < rarg->lhs_params->params_count;
			i++, target = TQ_NEXT(target, next)) {
		struct asn1p_param_s *param = &rarg->lhs_params->params[i];
		if(!target) break;

		if(strcmp(param->argument, refstr))
			continue;

		return target;
	}
	if(i != rarg->lhs_params->params_count) {
		FATAL("Parameterization of %s failed: "
			"parameters number mismatch",
				rarg->original_expr->Identifier);
		errno = EPERM;
		return NULL;
	}

	errno = ESRCH;
	return NULL;
}

