#include <stdio.h>
#include <string.h>
// ...existing code...
#include "asn1c_internal.h"  // for arg_t
#include "asn1p_expr.h"      // for TM_NAMECLASH and _mark
#include "clash_map.h"       // for map-based clash resolution
static int prompt_clash_resolution(arg_t *arg) {
	char input[32];
	printf("\n[asn1c] Name clash detected for type '%s' in module '%s'.\n",
		   arg->expr->Identifier, arg->expr->module->ModuleName);
	printf("How do you want to resolve this clash?\n");
	printf("  [k]eep this definition\n");
	printf("  [s]kip this definition\n");
	printf("  [r]ename this definition (auto-rename with module prefix)\n");
	printf("  [a]pply this decision to all further clashes of this type\n");
	printf("  [q]uit\n");
	printf("Enter choice (k/s/r/a/q): ");
	fflush(stdout);
	if(fgets(input, sizeof(input), stdin) == NULL) return -1;
	switch(input[0]) {
		case 'k':
		case 'K':
			printf("Keeping this definition.\n");
			return 1;
		case 's':
		case 'S':
			printf("Skipping this definition.\n");
			return 2;
		case 'r':
		case 'R':
			printf("Renaming this definition with module prefix.\n");
			arg->expr->_mark = (enum asn1p_expr_marker_e)(arg->expr->_mark | TM_NAMECLASH);
			return 3;
		case 'a':
		case 'A':
			printf("Apply this decision to all further clashes of this type (not yet implemented).\n");
			return 4;
		case 'q':
		case 'Q':
			printf("Quitting.\n");
			return -1;
		default:
			printf("Invalid choice.\n");
			return prompt_clash_resolution(arg);
	}
}
#include "asn1c_internal.h"
#include "asn1c_lang.h"
#include "asn1c_out.h"
#include "asn1c_save.h"
#include "asn1c_ioc.h"
#include "asn1c_naming.h"

static void default_logger_cb(int, const char *fmt, ...);
static int asn1c_compile_expr(arg_t *arg, const asn1c_ioc_table_and_objset_t *);
static int asn1c_attach_streams(asn1p_expr_t *expr);
static int asn1c_detach_streams(asn1p_expr_t *expr);

int
asn1_compile(asn1p_t *asn, const char *datadir, const char *destdir, enum asn1c_flags flags,
	int argc, int optc, char **argv,
	int clash_interactive, const char *clash_policy, const char *clash_map_file) {
	arg_t arg_s;
	arg_t *arg = &arg_s;
	clash_map_entry_t *clash_map_entries = NULL;
	int clash_map_count = 0;
	if (clash_map_file) {
		clash_map_count = load_clash_map(clash_map_file, &clash_map_entries);
		if (clash_map_count < 0) {
			FATAL("[MAP] Could not load clash map file: %s", clash_map_file);
			return -1;
		}
	}
	asn1p_module_t *mod;
	int ret;

	c_name_clash_finder_init();

	/*
	 * Initialize target language.
	 */
	ret = asn1c_with_language(ASN1C_LANGUAGE_C);
	assert(ret == 0);

	memset(arg, 0, sizeof(*arg));
	arg->default_cb = asn1c_compile_expr;
	arg->logger_cb = default_logger_cb;
	arg->flags = flags;
	arg->asn = asn;

	/*
	 * Compile each individual top level structure.
	 */
	TQ_FOR(mod, &(asn->modules), mod_next) {
		TQ_FOR(arg->expr, &(mod->members), next) {
			/* Pre-filter: Skip non-preferred types if clash map is provided */
			if (clash_map_file && clash_map_entries) {
				const char *preferred_module = find_preferred_module(
					clash_map_entries, clash_map_count, arg->expr->Identifier);

				if (preferred_module) {
					/* This type is in the clash map */
					if (strcmp(mod->ModuleName, preferred_module) != 0) {
						/* This is NOT the preferred module - skip this type */
						DEBUG("[MAP] Skipping type '%s' from module '%s' (preferred: '%s')",
							arg->expr->Identifier, mod->ModuleName, preferred_module);
						continue;  /* Skip to next expression */
					} else {
						DEBUG("[MAP] Generating type '%s' from preferred module '%s'",
							arg->expr->Identifier, preferred_module);
					}
				}
			}

			/* Skip types suppressed by priority-based conflict resolution */
			if (arg->expr->_mark & TM_SUPPRESSED) {
				DEBUG("[PRIORITY] Skipping suppressed type '%s' from module '%s'",
					arg->expr->Identifier, mod->ModuleName);
				continue;  /* Skip to next expression */
			}

			arg->ns = asn1_namespace_new_from_module(mod, 0);

			compiler_streams_t *cs = NULL;

			if(asn1c_attach_streams(arg->expr))
				return -1;

			cs = arg->expr->data;
			cs->target = OT_TYPE_DECLS;
			arg->target = cs;

			ret = asn1c_compile_expr(arg, NULL);
			if(ret) {
				FATAL("Cannot compile \"%s\" (%x:%x) at line %d",
					arg->expr->Identifier,
					arg->expr->expr_type,
					arg->expr->meta_type,
					arg->expr->_lineno);
				return ret;
			}

			asn1_namespace_free(arg->ns);
			arg->ns = 0;
		}
	}

	if(c_name_clash(arg)) {
		/* New clash handling logic */
		if (clash_map_file && clash_map_entries) {
			/* When using clash map, clashes should already be resolved via pre-filtering */
			/* If we still have clashes, it means there's a type not in the clash map */
			FATAL("[MAP] Name clash detected for types not in clash map. "
			      "Please add all clashing types to the clash map file: %s", clash_map_file);
			return -1;
		} else if (clash_interactive) {
			int res = prompt_clash_resolution(arg);
			if(res == 1) {
				/* Keep this definition, proceed */
			} else if(res == 2) {
				/* Skip this definition: mark as skipped or remove from tree (not yet implemented) */
				FATAL("[INTERACTIVE] Skipping definition is not yet implemented.");
				return -1;
			} else if(res == 3) {
				/* Rename: mark for module prefix, already set above */
				/* Proceed */
			} else if(res == 4) {
				/* Apply to all: not yet implemented */
				FATAL("[INTERACTIVE] Apply to all is not yet implemented.");
				return -1;
			} else {
				FATAL("[INTERACTIVE] User quit or error.");
				return -1;
			}
		} else if (clash_policy) {
			// TODO: Implement policy-based clash resolution
			FATAL("[POLICY] Name clash detected. Policy-based resolution not yet implemented.");
			return -1;
		} else if(arg->flags & A1C_COMPOUND_NAMES) {
			FATAL("Name clashes encountered even with -fcompound-names flag");
			/* Proceed further for better debugging. */
		} else {
			FATAL("Use \"-fcompound-names\" flag to asn1c to resolve name clashes");
			if(arg->flags & A1C_PRINT_COMPILED) {
				/* Proceed further for better debugging. */
			} else {
				return -1;
			}
		}
	}

	DEBUG("Saving compiled data");

	c_name_clash_finder_destroy();

	/*
	 * Save or print out the compiled result.
	 */
	if(asn1c_save_compiled_output(arg, datadir, destdir, argc, optc, argv))
		return -1;

	TQ_FOR(mod, &(asn->modules), mod_next) {
		TQ_FOR(arg->expr, &(mod->members), next) {
			asn1c_detach_streams(arg->expr);
		}
	}

	return 0;
}

static int
asn1c_compile_expr(arg_t *arg, const asn1c_ioc_table_and_objset_t *opt_ioc) {
	asn1p_expr_t *expr = arg->expr;
	int (*type_cb)(arg_t *);
	int ret;

	assert((int)expr->meta_type >= AMT_INVALID);
	assert(expr->meta_type < AMT_EXPR_META_MAX);
	assert((int)expr->expr_type >= A1TC_INVALID);
	assert(expr->expr_type < ASN_EXPR_TYPE_MAX);

	type_cb = asn1_lang_map[expr->meta_type][expr->expr_type].type_cb;
	if(type_cb) {

		DEBUG("Compiling %s at line %d",
			expr->Identifier,
			expr->_lineno);

		if(expr->lhs_params && expr->spec_index == -1) {
			int i;
			ret = 0;
			DEBUG("Parameterized type %s at line %d: %s (%d)",
				expr->Identifier, expr->_lineno,
				expr->specializations.pspecs_count
				? "compiling" : "unused, skipping",
				expr->specializations.pspecs_count);
			for(i = 0; i<expr->specializations.pspecs_count; i++) {
				arg->expr = expr->specializations
						.pspec[i].my_clone;
				ret = asn1c_compile_expr(arg, opt_ioc);
				if(ret) break;
			}
			arg->expr = expr;	/* Restore */
		} else {
			ret = type_cb(arg);
			if(arg->target->destination[OT_TYPE_DECLS]
					.indent_level == 0)
				OUT(";\n");
		}
	} else {
		ret = -1;
		/*
		 * Even if the target language compiler does not know
		 * how to compile the given expression, we know that
		 * certain expressions need not to be compiled at all.
		 */
		switch(expr->meta_type) {
		case AMT_OBJECT:
		case AMT_OBJECTCLASS:
		case AMT_OBJECTFIELD:
		case AMT_VALUE:
		case AMT_VALUESET:
			ret = 0;
			break;
		default:
			break;
		}
	}

	if(ret == -1) {
		FATAL("Cannot compile \"%s\" (%x:%x) at line %d",
			arg->expr->Identifier,
			arg->expr->expr_type,
			arg->expr->meta_type,
			arg->expr->_lineno);
		OUT("#error Cannot compile \"%s\" (%x/%x) at line %d\n",
			arg->expr->Identifier,
			arg->expr->meta_type,
			arg->expr->expr_type,
			arg->expr->_lineno
		);
	}

	return ret;
}

static int
asn1c_attach_streams(asn1p_expr_t *expr) {
	compiler_streams_t *cs;
	int i;

	if(expr->data)
		return 0;	/* Already attached? */

	expr->data = calloc(1, sizeof(compiler_streams_t));
	if(expr->data == NULL)
		return -1;

	cs = expr->data;
	for(i = 0; i < OT_MAX; i++) {
		TQ_INIT(&(cs->destination[i].chunks));
	}

	return 0;
}

int
asn1c_detach_streams(asn1p_expr_t *expr) {
	compiler_streams_t *cs;
	out_chunk_t *m;
	int i;

	if(!expr->data)
		return 0;	/* Already detached? */

	cs = expr->data;
	for(i = 0; i < OT_MAX; i++) {
		while((m = TQ_REMOVE(&(cs->destination[i].chunks), next))) {
			free(m->buf);
			free(m);
		}
	}
	free(expr->data);
	expr->data = (void *)NULL;

	return 0;
}

static void
default_logger_cb(int _severity, const char *fmt, ...) {
	va_list ap;
	char *pfx = "";

	switch(_severity) {
	case -1: pfx = "DEBUG: "; break;
	case 0: pfx = "WARNING: "; break;
	case 1: pfx = "FATAL: "; break;
	}

	fprintf(stderr, "%s", pfx);
	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end(ap);
	fprintf(stderr, "\n");
}

static void
asn1c_debug_expr_naming(arg_t *arg) {
    asn1p_expr_t *expr = arg->expr;

    printf("%s: ", expr->Identifier);
    printf("%s\n", c_names_format(c_name(arg)));

    printf("\n");

}

void
asn1c_debug_type_naming(asn1p_t *asn, enum asn1c_flags flags,
                        char **asn_type_names) {
    arg_t arg_s;
    arg_t *arg = &arg_s;
	asn1p_module_t *mod;

    memset(arg, 0, sizeof(*arg));
	arg->logger_cb = default_logger_cb;
	arg->flags = flags;
	arg->asn = asn;

	c_name_clash_finder_init();

	/*
	 * Compile each individual top level structure.
	 */
	TQ_FOR(mod, &(asn->modules), mod_next) {
        int namespace_shown = 0;
		TQ_FOR(arg->expr, &(mod->members), next) {
			arg->ns = asn1_namespace_new_from_module(mod, 0);

            for(char **t = asn_type_names; *t; t++) {
                if(strcmp(*t, arg->expr->Identifier) == 0) {
                    if(!namespace_shown) {
                        namespace_shown = 1;
                        printf("Namespace %s\n",
                               asn1_namespace_string(arg->ns));
                    }
                    asn1c_debug_expr_naming(arg);
                }
            }

            asn1_namespace_free(arg->ns);
			arg->ns = 0;
		}
	}

	c_name_clash_finder_destroy();
}

