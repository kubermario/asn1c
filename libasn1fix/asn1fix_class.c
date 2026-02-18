#include "asn1fix_internal.h"

asn1p_expr_t *
asn1f_class_access(arg_t *arg, asn1p_expr_t *rhs_pspecs, const asn1p_ref_t *ref) {
	asn1p_expr_t *ioclass;
	asn1p_expr_t *classfield;
	asn1p_expr_t *expr;
	asn1p_ref_t tmpref;

	assert(ref->comp_count > 1);

    DEBUG("ClassAccess lookup (%s%s) for line %d",
          asn1f_printable_reference(ref), rhs_pspecs ? ", parameterized" : "",
          ref->_lineno);

    /*
	 * Fetch the first part of the reference (OBJECT or ObjectSet).
	 * OBJECT.&<something>...
	 * ObjectSet.&<something>...
	 */
	assert(isupper(ref->components[0].name[0]));

	tmpref = *ref;
	tmpref.comp_count = 1;
	ioclass = asn1f_lookup_symbol(arg, rhs_pspecs, &tmpref);
	if(ioclass == NULL) {
        DEBUG("ClassAccess lookup (%s) failed",
              asn1f_printable_reference(&tmpref));
        errno = ESRCH;
		return NULL;
	}
	if(ioclass->expr_type == A1TC_REFERENCE) {
        ioclass = WITH_MODULE(
            ioclass->module,
            asn1f_lookup_symbol(arg, ioclass->rhs_pspecs, ioclass->reference));
        if(ioclass == NULL) {
			errno = ESRCH;
			return NULL;
		}
	}
	if(ioclass->expr_type != A1TC_CLASSDEF) {
		if(!(ioclass->_mark & TM_BROKEN)) {
			ioclass->_mark |= TM_BROKEN;
			FATAL("Class field %s lookup at line %d in something that is not a class: %s at line %d",
				asn1f_printable_reference(ref), ref->_lineno,
				ioclass->Identifier,
				ioclass->_lineno);
		}
		errno = EINVAL;
		return NULL;
	}

	classfield = asn1f_lookup_child(ioclass, ref->components[1].name);
	if(classfield == NULL) {
		DEBUG("CLASS %s does not contain field %s",
			ioclass->Identifier, ref->components[1].name);
		errno = ESRCH;
		return NULL;
	}

	assert(classfield->meta_type == AMT_OBJECTFIELD);

	DEBUG("CLASS %s -> %s (%d)", ioclass->Identifier,
		classfield->Identifier, classfield->expr_type);

	switch(classfield->expr_type) {
	case A1TC_CLASSFIELD_TFS:
		/* TypeFieldSpec: &Type */
		if(TQ_FIRST(&classfield->members)) {
			/* Already have something */
		} else {
			expr = asn1p_expr_new(classfield->_lineno, arg->mod);
			expr->expr_type = ASN_TYPE_ANY;
			expr->meta_type = AMT_TYPE;
			asn1p_expr_add(classfield, expr);
		}
		/* Fall through */
	case A1TC_CLASSFIELD_FTVFS:
		/* FixedTypeValueFieldSpec: &value INTEGER */
		expr = TQ_FIRST(&classfield->members);
		assert(expr);
		return expr;
		break;

	case A1TC_CLASSFIELD_VTVFS:
		/* VariableTypeValueFieldSpec: &value &Type */
		/* The value's type depends on another field referenced in classfield->reference */
		if(classfield->reference) {
			/* Return a reference expression pointing to the governing field */
			expr = asn1p_expr_new(classfield->_lineno, arg->mod);
			expr->Identifier = classfield->Identifier;
			expr->expr_type = A1TC_REFERENCE;
			expr->meta_type = AMT_TYPEREF;
			expr->reference = classfield->reference;
			return expr;
		} else {
			/* No governing type field - treat as ANY */
			expr = asn1p_expr_new(classfield->_lineno, arg->mod);
			expr->expr_type = ASN_TYPE_ANY;
			expr->meta_type = AMT_TYPE;
			return expr;
		}
		break;

	case A1TC_CLASSFIELD_FTVSFS:
		/* FixedTypeValueSetFieldSpec: &ValueSet INTEGER */
		expr = TQ_FIRST(&classfield->members);
		if(expr) {
			return expr;
		} else {
			/* No type defined - shouldn't happen but handle gracefully */
			DEBUG("%s.%s: FixedTypeValueSetFieldSpec has no type member",
				ioclass->Identifier, classfield->Identifier);
			errno = EINVAL;
			return NULL;
		}
		break;

	case A1TC_CLASSFIELD_VTVSFS:
		/* VariableTypeValueSetFieldSpec: &ValueSet &Type */
		/* Similar to VTVFS but for value sets */
		if(classfield->reference) {
			expr = asn1p_expr_new(classfield->_lineno, arg->mod);
			expr->Identifier = classfield->Identifier;
			expr->expr_type = A1TC_REFERENCE;
			expr->meta_type = AMT_TYPEREF;
			expr->reference = classfield->reference;
			return expr;
		} else {
			DEBUG("%s.%s: VariableTypeValueSetFieldSpec has no governing type",
				ioclass->Identifier, classfield->Identifier);
			errno = EINVAL;
			return NULL;
		}
		break;

	case A1TC_CLASSFIELD_OFS:
		/* ObjectFieldSpec: &object SOME-CLASS */
		if(classfield->reference) {
			/* Return reference to the object class */
			expr = asn1p_expr_new(classfield->_lineno, arg->mod);
			expr->Identifier = classfield->Identifier;
			expr->expr_type = A1TC_REFERENCE;
			expr->meta_type = AMT_TYPEREF;
			expr->reference = classfield->reference;
			return expr;
		} else {
			DEBUG("%s.%s: ObjectFieldSpec has no class reference",
				ioclass->Identifier, classfield->Identifier);
			errno = EINVAL;
			return NULL;
		}
		break;

	case A1TC_CLASSFIELD_OSFS:
		/* ObjectSetFieldSpec: &objects SOME-CLASS */
		if(classfield->reference) {
			/* Return reference to the object class */
			expr = asn1p_expr_new(classfield->_lineno, arg->mod);
			expr->Identifier = classfield->Identifier;
			expr->expr_type = A1TC_REFERENCE;
			expr->meta_type = AMT_TYPEREF;
			expr->reference = classfield->reference;
			return expr;
		} else {
			DEBUG("%s.%s: ObjectSetFieldSpec has no class reference",
				ioclass->Identifier, classfield->Identifier);
			errno = EINVAL;
			return NULL;
		}
		break;

	default:
		FATAL("%s.%s: Unknown class field type %d",
			ioclass->Identifier, classfield->Identifier, classfield->expr_type);
		return NULL;
	}

	return NULL;
}

