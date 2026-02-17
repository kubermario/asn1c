/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse asn1p_parse
#define yylex   asn1p_lex
#define yyerror asn1p_error
#define yylval  asn1p_lval
#define yychar  asn1p_char
#define yydebug asn1p_debug
#define yynerrs asn1p_nerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_PPEQ = 258,
     TOK_VBracketLeft = 259,
     TOK_VBracketRight = 260,
     TOK_whitespace = 261,
     TOK_opaque = 262,
     TOK_bstring = 263,
     TOK_cstring = 264,
     TOK_hstring = 265,
     TOK_identifier = 266,
     TOK_number = 267,
     TOK_number_negative = 268,
     TOK_realnumber = 269,
     TOK_tuple = 270,
     TOK_quadruple = 271,
     TOK_typereference = 272,
     TOK_capitalreference = 273,
     TOK_typefieldreference = 274,
     TOK_valuefieldreference = 275,
     TOK_Literal = 276,
     TOK_ExtValue_BIT_STRING = 277,
     TOK_ABSENT = 278,
     TOK_ABSTRACT_SYNTAX = 279,
     TOK_ALL = 280,
     TOK_ANY = 281,
     TOK_APPLICATION = 282,
     TOK_AUTOMATIC = 283,
     TOK_BEGIN = 284,
     TOK_BIT = 285,
     TOK_BMPString = 286,
     TOK_BOOLEAN = 287,
     TOK_BY = 288,
     TOK_CHARACTER = 289,
     TOK_CHOICE = 290,
     TOK_CLASS = 291,
     TOK_COMPONENT = 292,
     TOK_COMPONENTS = 293,
     TOK_CONSTRAINED = 294,
     TOK_CONTAINING = 295,
     TOK_DEFAULT = 296,
     TOK_DEFINITIONS = 297,
     TOK_DEFINED = 298,
     TOK_EMBEDDED = 299,
     TOK_ENCODED = 300,
     TOK_ENCODING_CONTROL = 301,
     TOK_END = 302,
     TOK_ENUMERATED = 303,
     TOK_EXPLICIT = 304,
     TOK_EXPORTS = 305,
     TOK_EXTENSIBILITY = 306,
     TOK_EXTERNAL = 307,
     TOK_FALSE = 308,
     TOK_FROM = 309,
     TOK_GeneralizedTime = 310,
     TOK_GeneralString = 311,
     TOK_GraphicString = 312,
     TOK_IA5String = 313,
     TOK_IDENTIFIER = 314,
     TOK_IMPLICIT = 315,
     TOK_IMPLIED = 316,
     TOK_IMPORTS = 317,
     TOK_INCLUDES = 318,
     TOK_INSTANCE = 319,
     TOK_INSTRUCTIONS = 320,
     TOK_INTEGER = 321,
     TOK_ISO646String = 322,
     TOK_MAX = 323,
     TOK_MIN = 324,
     TOK_MINUS_INFINITY = 325,
     TOK_NULL = 326,
     TOK_NumericString = 327,
     TOK_OBJECT = 328,
     TOK_ObjectDescriptor = 329,
     TOK_OCTET = 330,
     TOK_OF = 331,
     TOK_OPTIONAL = 332,
     TOK_PATTERN = 333,
     TOK_PDV = 334,
     TOK_PLUS_INFINITY = 335,
     TOK_PRESENT = 336,
     TOK_PrintableString = 337,
     TOK_PRIVATE = 338,
     TOK_REAL = 339,
     TOK_RELATIVE_OID = 340,
     TOK_SEQUENCE = 341,
     TOK_SET = 342,
     TOK_SIZE = 343,
     TOK_STRING = 344,
     TOK_SYNTAX = 345,
     TOK_T61String = 346,
     TOK_TAGS = 347,
     TOK_TeletexString = 348,
     TOK_TRUE = 349,
     TOK_TYPE_IDENTIFIER = 350,
     TOK_UNIQUE = 351,
     TOK_UNIVERSAL = 352,
     TOK_UniversalString = 353,
     TOK_UTCTime = 354,
     TOK_UTF8String = 355,
     TOK_VideotexString = 356,
     TOK_VisibleString = 357,
     TOK_WITH = 358,
     TOK_SUCCESSORS = 359,
     UTF8_BOM = 360,
     TOK_EXCEPT = 361,
     TOK_INTERSECTION = 362,
     TOK_UNION = 363,
     TOK_TwoDots = 364,
     TOK_ThreeDots = 365
   };
#endif
/* Tokens.  */
#define TOK_PPEQ 258
#define TOK_VBracketLeft 259
#define TOK_VBracketRight 260
#define TOK_whitespace 261
#define TOK_opaque 262
#define TOK_bstring 263
#define TOK_cstring 264
#define TOK_hstring 265
#define TOK_identifier 266
#define TOK_number 267
#define TOK_number_negative 268
#define TOK_realnumber 269
#define TOK_tuple 270
#define TOK_quadruple 271
#define TOK_typereference 272
#define TOK_capitalreference 273
#define TOK_typefieldreference 274
#define TOK_valuefieldreference 275
#define TOK_Literal 276
#define TOK_ExtValue_BIT_STRING 277
#define TOK_ABSENT 278
#define TOK_ABSTRACT_SYNTAX 279
#define TOK_ALL 280
#define TOK_ANY 281
#define TOK_APPLICATION 282
#define TOK_AUTOMATIC 283
#define TOK_BEGIN 284
#define TOK_BIT 285
#define TOK_BMPString 286
#define TOK_BOOLEAN 287
#define TOK_BY 288
#define TOK_CHARACTER 289
#define TOK_CHOICE 290
#define TOK_CLASS 291
#define TOK_COMPONENT 292
#define TOK_COMPONENTS 293
#define TOK_CONSTRAINED 294
#define TOK_CONTAINING 295
#define TOK_DEFAULT 296
#define TOK_DEFINITIONS 297
#define TOK_DEFINED 298
#define TOK_EMBEDDED 299
#define TOK_ENCODED 300
#define TOK_ENCODING_CONTROL 301
#define TOK_END 302
#define TOK_ENUMERATED 303
#define TOK_EXPLICIT 304
#define TOK_EXPORTS 305
#define TOK_EXTENSIBILITY 306
#define TOK_EXTERNAL 307
#define TOK_FALSE 308
#define TOK_FROM 309
#define TOK_GeneralizedTime 310
#define TOK_GeneralString 311
#define TOK_GraphicString 312
#define TOK_IA5String 313
#define TOK_IDENTIFIER 314
#define TOK_IMPLICIT 315
#define TOK_IMPLIED 316
#define TOK_IMPORTS 317
#define TOK_INCLUDES 318
#define TOK_INSTANCE 319
#define TOK_INSTRUCTIONS 320
#define TOK_INTEGER 321
#define TOK_ISO646String 322
#define TOK_MAX 323
#define TOK_MIN 324
#define TOK_MINUS_INFINITY 325
#define TOK_NULL 326
#define TOK_NumericString 327
#define TOK_OBJECT 328
#define TOK_ObjectDescriptor 329
#define TOK_OCTET 330
#define TOK_OF 331
#define TOK_OPTIONAL 332
#define TOK_PATTERN 333
#define TOK_PDV 334
#define TOK_PLUS_INFINITY 335
#define TOK_PRESENT 336
#define TOK_PrintableString 337
#define TOK_PRIVATE 338
#define TOK_REAL 339
#define TOK_RELATIVE_OID 340
#define TOK_SEQUENCE 341
#define TOK_SET 342
#define TOK_SIZE 343
#define TOK_STRING 344
#define TOK_SYNTAX 345
#define TOK_T61String 346
#define TOK_TAGS 347
#define TOK_TeletexString 348
#define TOK_TRUE 349
#define TOK_TYPE_IDENTIFIER 350
#define TOK_UNIQUE 351
#define TOK_UNIVERSAL 352
#define TOK_UniversalString 353
#define TOK_UTCTime 354
#define TOK_UTF8String 355
#define TOK_VideotexString 356
#define TOK_VisibleString 357
#define TOK_WITH 358
#define TOK_SUCCESSORS 359
#define UTF8_BOM 360
#define TOK_EXCEPT 361
#define TOK_INTERSECTION 362
#define TOK_UNION 363
#define TOK_TwoDots 364
#define TOK_ThreeDots 365




/* Copy the first part of user declarations.  */
#line 1 "asn1p_y.y"


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>
#include <assert.h>

#include "asn1parser.h"

#define YYPARSE_PARAM	param
#define YYPARSE_PARAM_TYPE	void **
#define YYERROR_VERBOSE
#define YYDEBUG 1
#define YYFPRINTF   prefixed_fprintf

/*
 * Prefix parser debug with "PARSER: " for easier human eye scanning.
 */
static int
__attribute__((format(printf, 2, 3)))
prefixed_fprintf(FILE *f, const char *fmt, ...) {
    static int line_ended = 1;
    va_list ap;
    va_start(ap, fmt);
    if(line_ended) {
        fprintf(f, "PARSER: ");
        line_ended = 0;
    }
    size_t len = strlen(fmt);
    if(len && fmt[len-1] == '\n') {
        line_ended = 1;
    }
    int ret = vfprintf(f, fmt, ap);
    va_end(ap);
    return ret;
}

int yylex(void);
static int yyerror(const char *msg);

#ifdef	YYBYACC
int yyparse(void **param);	/* byacc does not produce a prototype */
#endif
void asn1p_lexer_hack_push_opaque_state(void);
void asn1p_lexer_hack_enable_with_syntax(void);
void asn1p_lexer_hack_push_encoding_control(void);
#define	yylineno	asn1p_lineno
extern int asn1p_lineno;
const char *asn1p_parse_debug_filename;
#define ASN_FILENAME asn1p_parse_debug_filename

/*
 * Process directives as <ASN1C:RepresentAsPointer>
 */
extern int asn1p_as_pointer;

/*
 * This temporary variable is used to solve the shortcomings of 1-lookahead
 * parser.
 */
static struct AssignedIdentifier *saved_aid;

static asn1p_value_t *_convert_bitstring2binary(char *str, int base);
static void _fixup_anonymous_identifier(asn1p_expr_t *expr);

static asn1p_module_t *currentModule;
#define	NEW_EXPR()	(asn1p_expr_new(yylineno, currentModule))

#define	checkmem(ptr)	do {						\
		if(!(ptr))						\
		return yyerror("Memory failure");			\
	} while(0)

#define	CONSTRAINT_INSERT(root, constr_type, arg1, arg2) do {		\
		if(arg1->type != constr_type) {				\
			int __ret;					\
			root = asn1p_constraint_new(yylineno, currentModule);	\
			checkmem(root);					\
			root->type = constr_type;			\
			__ret = asn1p_constraint_insert(root,		\
				arg1);					\
			checkmem(__ret == 0);				\
		} else {						\
			root = arg1;					\
		}							\
		if(arg2) {						\
			int __ret					\
			= asn1p_constraint_insert(root, arg2);		\
			checkmem(__ret == 0);				\
		}							\
	} while(0)

#ifdef	AL_IMPORT
#error	AL_IMPORT DEFINED ELSEWHERE!
#endif
#define AL_IMPORT(to, where, from, field)                                      \
    do {                                                                       \
        if(!(from)) break;                                                     \
        while(TQ_FIRST(&((from)->where))) {                                    \
            TQ_ADD(&((to)->where), TQ_REMOVE(&((from)->where), field), field); \
        }                                                                      \
        assert(TQ_FIRST(&((from)->where)) == 0);                               \
    } while(0)



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 115 "asn1p_y.y"
{
	asn1p_t			*a_grammar;
	asn1p_module_flags_e	 a_module_flags;
	asn1p_module_t		*a_module;
	asn1p_expr_type_e	 a_type;	/* ASN.1 Type */
	asn1p_expr_t		*a_expr;	/* Constructed collection */
	asn1p_constraint_t	*a_constr;	/* Constraint */
	enum asn1p_constraint_type_e	a_ctype;/* Constraint type */
	asn1p_xports_t		*a_xports;	/* IMports/EXports */
	struct AssignedIdentifier a_aid;	/* Assigned Identifier */
	asn1p_oid_t		*a_oid;		/* Object Identifier */
	asn1p_oid_arc_t		 a_oid_arc;	/* Single OID's arc */
	struct asn1p_type_tag_s	 a_tag;		/* A tag */
	asn1p_ref_t		*a_ref;		/* Reference to custom type */
	asn1p_wsyntx_t		*a_wsynt;	/* WITH SYNTAX contents */
	asn1p_wsyntx_chunk_t	*a_wchunk;	/* WITH SYNTAX chunk */
	struct asn1p_ref_component_s a_refcomp;	/* Component of a reference */
	asn1p_value_t		*a_value;	/* Number, DefinedValue, etc */
	struct asn1p_param_s	 a_parg;	/* A parameter argument */
	asn1p_paramlist_t	*a_plist;	/* A pargs list */
	struct asn1p_expr_marker_s a_marker;	/* OPTIONAL/DEFAULT */
	enum asn1p_constr_pres_e a_pres;	/* PRESENT/ABSENT/OPTIONAL */
	asn1c_integer_t		 a_int;
	double			 a_dbl;
	char	*tv_str;
	struct {
		char *buf;
		int len;
	}	tv_opaque;
	struct {
		char *name;
		struct asn1p_type_tag_s tag;
	} tv_nametag;
}
/* Line 193 of yacc.c.  */
#line 467 "asn1p_y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 480 "asn1p_y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   976

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  148
/* YYNRULES -- Number of rules.  */
#define YYNRULES  344
/* YYNRULES -- Number of states.  */
#define YYNSTATES  525

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   366

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   123,     2,     2,     2,     2,     2,     2,
     116,   117,     2,     2,   119,     2,   124,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   120,   118,
     125,     2,     2,     2,   126,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   121,     2,   122,   107,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,   109,   115,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   108,   110,   111,   112,   113
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    13,    14,    24,    25,
      27,    31,    34,    36,    39,    41,    46,    48,    49,    51,
      53,    56,    59,    62,    65,    68,    71,    72,    74,    78,
      80,    83,    85,    87,    89,    90,    94,    96,    97,    99,
     103,   106,   107,   109,   111,   114,   115,   117,   123,   124,
     127,   129,   133,   135,   139,   141,   142,   144,   148,   152,
     155,   157,   161,   163,   167,   169,   173,   178,   180,   185,
     189,   193,   200,   207,   209,   213,   215,   219,   223,   227,
     231,   233,   237,   239,   241,   243,   245,   246,   248,   250,
     254,   260,   264,   267,   271,   273,   275,   279,   282,   284,
     286,   292,   293,   295,   297,   301,   304,   309,   313,   317,
     321,   325,   329,   330,   332,   333,   340,   342,   345,   347,
     349,   351,   355,   357,   361,   365,   367,   370,   373,   376,
     380,   381,   384,   386,   388,   390,   395,   400,   405,   412,
     419,   421,   426,   430,   432,   434,   438,   442,   446,   448,
     452,   454,   456,   458,   460,   464,   468,   470,   475,   477,
     479,   480,   484,   486,   488,   490,   492,   494,   496,   498,
     500,   504,   506,   508,   510,   512,   515,   517,   519,   521,
     523,   525,   528,   531,   533,   535,   538,   541,   543,   545,
     547,   549,   551,   553,   556,   558,   563,   568,   574,   579,
     583,   585,   587,   589,   591,   593,   595,   597,   599,   601,
     603,   605,   607,   609,   611,   613,   615,   617,   619,   620,
     622,   623,   625,   626,   628,   630,   634,   636,   639,   641,
     643,   645,   647,   649,   653,   659,   661,   665,   667,   671,
     673,   677,   679,   683,   685,   689,   691,   693,   695,   697,
     699,   701,   703,   706,   709,   712,   715,   719,   721,   723,
     725,   727,   729,   731,   733,   736,   738,   742,   746,   748,
     750,   752,   756,   762,   764,   768,   772,   773,   775,   777,
     779,   781,   783,   785,   787,   788,   794,   797,   799,   802,
     805,   809,   811,   813,   817,   822,   824,   828,   831,   835,
     837,   841,   842,   844,   846,   849,   851,   855,   857,   859,
     863,   868,   873,   875,   879,   884,   889,   891,   893,   897,
     899,   904,   909,   911,   913,   915,   917,   919,   920,   922,
     925,   930,   931,   933,   935,   937,   938,   940,   942,   944,
     946,   947,   949,   951,   953
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     128,     0,    -1,   105,   129,    -1,   129,    -1,   130,    -1,
     129,   130,    -1,    -1,   270,   131,   132,    42,   136,     3,
      29,   139,    47,    -1,    -1,   133,    -1,   114,   134,   115,
      -1,   114,   115,    -1,   135,    -1,   134,   135,    -1,   272,
      -1,   272,   116,    12,   117,    -1,    12,    -1,    -1,   137,
      -1,   138,    -1,   137,   138,    -1,    49,    92,    -1,    60,
      92,    -1,    28,    92,    -1,    51,    61,    -1,    18,    65,
      -1,    -1,   140,    -1,   153,   144,   141,    -1,   142,    -1,
     141,   142,    -1,   160,    -1,   195,    -1,   158,    -1,    -1,
      46,    18,   143,    -1,   206,    -1,    -1,   145,    -1,    62,
     146,   118,    -1,    62,    54,    -1,    -1,   147,    -1,   149,
      -1,   147,   149,    -1,    -1,   133,    -1,   151,    54,   270,
     148,   150,    -1,    -1,   103,   104,    -1,   152,    -1,   151,
     119,   152,    -1,   270,    -1,   270,   114,   115,    -1,   272,
      -1,    -1,   154,    -1,    50,   155,   118,    -1,    50,    25,
     118,    -1,    50,   118,    -1,   156,    -1,   155,   119,   156,
      -1,   270,    -1,   270,   114,   115,    -1,   272,    -1,   114,
     216,   115,    -1,   270,   180,     3,   157,    -1,   189,    -1,
     189,   114,   163,   115,    -1,   270,     3,   180,    -1,   270,
       3,   170,    -1,   270,   114,   161,   115,     3,   180,    -1,
     270,   114,   161,   115,     3,   170,    -1,   162,    -1,   161,
     119,   162,    -1,   270,    -1,   270,   120,   272,    -1,   270,
     120,   270,    -1,   203,   120,   272,    -1,   203,   120,   270,
      -1,   164,    -1,   163,   119,   164,    -1,   183,    -1,   198,
      -1,   199,    -1,   157,    -1,    -1,   166,    -1,   167,    -1,
     166,   119,   167,    -1,   166,   119,     4,   166,     5,    -1,
     272,   184,   252,    -1,   184,   252,    -1,    38,    76,   184,
      -1,   179,    -1,   169,    -1,   168,   119,   169,    -1,   272,
     184,    -1,   179,    -1,   184,    -1,    36,   114,   172,   115,
     174,    -1,    -1,    96,    -1,   173,    -1,   172,   119,   173,
      -1,    19,   252,    -1,    20,   180,   171,   252,    -1,    20,
     193,   252,    -1,    20,   194,   252,    -1,    19,   193,   252,
      -1,    19,   180,   252,    -1,    19,   194,   252,    -1,    -1,
     175,    -1,    -1,   103,    90,   114,   176,   177,   115,    -1,
     178,    -1,   177,   178,    -1,     6,    -1,    21,    -1,   192,
      -1,   121,   177,   122,    -1,   112,    -1,   112,   123,   199,
      -1,   112,   123,   263,    -1,   181,    -1,   265,   183,    -1,
     159,   210,    -1,   187,   210,    -1,   265,   186,   210,    -1,
      -1,   185,   187,    -1,   188,    -1,   159,    -1,   205,    -1,
      35,   114,   168,   115,    -1,    86,   114,   165,   115,    -1,
      87,   114,   165,   115,    -1,    86,   211,    76,   271,   265,
     186,    -1,    87,   211,    76,   271,   265,   186,    -1,    26,
      -1,    26,    43,    33,   272,    -1,    64,    76,   189,    -1,
      17,    -1,    18,    -1,    17,   124,   270,    -1,    18,   124,
     270,    -1,    18,   124,   190,    -1,   191,    -1,   190,   124,
     191,    -1,   192,    -1,    19,    -1,    20,    -1,    19,    -1,
     193,   124,    19,    -1,   193,   124,    20,    -1,    18,    -1,
     272,   180,     3,   196,    -1,   198,    -1,   199,    -1,    -1,
     114,   197,   201,    -1,    71,    -1,    53,    -1,    94,    -1,
     263,    -1,   264,    -1,   200,    -1,   230,    -1,   274,    -1,
     270,   124,   272,    -1,     9,    -1,    15,    -1,    16,    -1,
     202,    -1,   201,     7,    -1,     7,    -1,   272,    -1,    32,
      -1,    71,    -1,    84,    -1,    75,    89,    -1,    73,    59,
      -1,    85,    -1,    52,    -1,    44,    79,    -1,    34,    89,
      -1,    99,    -1,    55,    -1,   206,    -1,   204,    -1,    66,
      -1,    48,    -1,    30,    89,    -1,   203,    -1,    66,   114,
     256,   115,    -1,    48,   114,   260,   115,    -1,    30,    89,
     114,   258,   115,    -1,    22,   114,   254,   115,    -1,    22,
     114,   115,    -1,    31,    -1,    56,    -1,    57,    -1,    58,
      -1,    67,    -1,    72,    -1,    82,    -1,    91,    -1,    93,
      -1,    98,    -1,   100,    -1,   101,    -1,   102,    -1,    74,
      -1,   109,    -1,   110,    -1,   107,    -1,   108,    -1,    -1,
     212,    -1,    -1,   213,    -1,    -1,   212,    -1,   224,    -1,
     116,   214,   117,    -1,   212,    -1,   213,   212,    -1,   215,
      -1,   241,    -1,   216,    -1,   112,    -1,   217,    -1,   217,
     119,   112,    -1,   217,   119,   112,   119,   217,    -1,   218,
      -1,    25,   106,   221,    -1,   219,    -1,   218,   207,   219,
      -1,   220,    -1,   219,   208,   220,    -1,   221,    -1,   221,
     106,   221,    -1,   222,    -1,   116,   217,   117,    -1,   229,
      -1,   231,    -1,   223,    -1,   224,    -1,   232,    -1,   225,
      -1,   226,    -1,    54,   212,    -1,    88,   212,    -1,    78,
       9,    -1,    78,   272,    -1,   227,   245,   228,    -1,   229,
      -1,    69,    -1,   229,    -1,    68,    -1,   196,    -1,     8,
      -1,    10,    -1,    63,   180,    -1,   182,    -1,   103,    37,
     233,    -1,   103,    38,   234,    -1,   212,    -1,   235,    -1,
     236,    -1,   114,   237,   115,    -1,   114,   112,   119,   237,
     115,    -1,   238,    -1,   237,   119,   238,    -1,   274,   209,
     239,    -1,    -1,   240,    -1,    81,    -1,    23,    -1,    77,
      -1,   242,    -1,   246,    -1,   244,    -1,    -1,    39,    33,
     114,   243,   201,    -1,    40,   180,    -1,   111,    -1,   111,
     125,    -1,   125,   111,    -1,   125,   111,   125,    -1,   247,
      -1,   248,    -1,   114,   270,   115,    -1,   247,   114,   249,
     115,    -1,   250,    -1,   249,   119,   250,    -1,   126,   251,
      -1,   126,   124,   251,    -1,   272,    -1,   251,   124,   272,
      -1,    -1,   253,    -1,    77,    -1,    41,   196,    -1,   255,
      -1,   254,   119,   255,    -1,   272,    -1,   257,    -1,   256,
     119,   257,    -1,   272,   116,   263,   117,    -1,   272,   116,
     199,   117,    -1,   259,    -1,   258,   119,   259,    -1,   272,
     116,    12,   117,    -1,   272,   116,   199,   117,    -1,   261,
      -1,   262,    -1,   261,   119,   262,    -1,   272,    -1,   272,
     116,   263,   117,    -1,   272,   116,   199,   117,    -1,   263,
      -1,   112,    -1,    12,    -1,    13,    -1,    14,    -1,    -1,
     266,    -1,   267,   269,    -1,   121,   268,    12,   122,    -1,
      -1,    97,    -1,    27,    -1,    83,    -1,    -1,    60,    -1,
      49,    -1,    17,    -1,    18,    -1,    -1,   272,    -1,    11,
      -1,   272,    -1,   273,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   416,   416,   419,   425,   430,   447,   447,   476,   477,
     481,   484,   490,   496,   505,   509,   513,   523,   524,   533,
     536,   545,   548,   551,   554,   558,   579,   580,   589,   602,
     605,   622,   629,   643,   651,   650,   664,   677,   678,   681,
     691,   697,   698,   701,   706,   713,   714,   718,   730,   731,
     735,   740,   747,   753,   759,   769,   770,   782,   785,   788,
     796,   801,   808,   814,   820,   829,   832,   852,   862,   882,
     888,   904,   910,   918,   927,   938,   942,   950,   958,   966,
     977,   982,   989,   990,   998,  1006,  1029,  1030,  1033,  1038,
    1042,  1050,  1057,  1063,  1070,  1076,  1081,  1088,  1093,  1096,
    1103,  1113,  1114,  1118,  1125,  1135,  1145,  1156,  1166,  1177,
    1187,  1198,  1210,  1211,  1218,  1217,  1226,  1230,  1237,  1241,
    1244,  1248,  1254,  1262,  1271,  1282,  1285,  1292,  1315,  1338,
    1362,  1369,  1388,  1389,  1392,  1393,  1399,  1405,  1411,  1421,
    1431,  1437,  1449,  1464,  1472,  1480,  1491,  1502,  1524,  1532,
    1541,  1545,  1550,  1559,  1564,  1569,  1577,  1600,  1610,  1611,
    1612,  1612,  1620,  1625,  1630,  1635,  1636,  1637,  1638,  1642,
    1643,  1661,  1665,  1670,  1678,  1687,  1702,  1703,  1709,  1710,
    1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,  1719,  1720,
    1721,  1728,  1729,  1730,  1734,  1740,  1745,  1750,  1755,  1760,
    1769,  1770,  1774,  1778,  1779,  1780,  1781,  1782,  1786,  1787,
    1788,  1789,  1793,  1794,  1801,  1801,  1802,  1802,  1806,  1807,
    1811,  1812,  1816,  1817,  1818,  1822,  1828,  1829,  1838,  1838,
    1840,  1843,  1847,  1848,  1854,  1865,  1866,  1872,  1873,  1879,
    1880,  1887,  1888,  1894,  1895,  1906,  1912,  1918,  1919,  1921,
    1922,  1923,  1928,  1933,  1938,  1943,  1955,  1964,  1965,  1971,
    1972,  1977,  1980,  1985,  1993,  1999,  2011,  2014,  2020,  2021,
    2021,  2022,  2024,  2037,  2042,  2048,  2062,  2063,  2067,  2070,
    2073,  2081,  2082,  2083,  2088,  2087,  2099,  2108,  2109,  2110,
    2111,  2114,  2117,  2126,  2142,  2148,  2154,  2168,  2179,  2195,
    2198,  2218,  2222,  2226,  2230,  2237,  2242,  2248,  2257,  2262,
    2269,  2277,  2287,  2292,  2299,  2307,  2317,  2332,  2337,  2344,
    2351,  2359,  2367,  2374,  2385,  2389,  2396,  2427,  2428,  2432,
    2439,  2445,  2446,  2447,  2448,  2452,  2453,  2454,  2458,  2462,
    2470,  2471,  2477,  2484,  2491
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_PPEQ", "TOK_VBracketLeft",
  "TOK_VBracketRight", "TOK_whitespace", "TOK_opaque", "TOK_bstring",
  "TOK_cstring", "TOK_hstring", "\"identifier\"", "\"number\"",
  "\"negative number\"", "TOK_realnumber", "TOK_tuple", "TOK_quadruple",
  "TOK_typereference", "TOK_capitalreference", "TOK_typefieldreference",
  "TOK_valuefieldreference", "TOK_Literal", "TOK_ExtValue_BIT_STRING",
  "TOK_ABSENT", "TOK_ABSTRACT_SYNTAX", "TOK_ALL", "TOK_ANY",
  "TOK_APPLICATION", "TOK_AUTOMATIC", "TOK_BEGIN", "TOK_BIT",
  "TOK_BMPString", "TOK_BOOLEAN", "TOK_BY", "TOK_CHARACTER", "TOK_CHOICE",
  "TOK_CLASS", "TOK_COMPONENT", "TOK_COMPONENTS", "TOK_CONSTRAINED",
  "TOK_CONTAINING", "TOK_DEFAULT", "TOK_DEFINITIONS", "TOK_DEFINED",
  "TOK_EMBEDDED", "TOK_ENCODED", "TOK_ENCODING_CONTROL", "TOK_END",
  "TOK_ENUMERATED", "TOK_EXPLICIT", "TOK_EXPORTS", "TOK_EXTENSIBILITY",
  "TOK_EXTERNAL", "TOK_FALSE", "TOK_FROM", "TOK_GeneralizedTime",
  "TOK_GeneralString", "TOK_GraphicString", "TOK_IA5String",
  "TOK_IDENTIFIER", "TOK_IMPLICIT", "TOK_IMPLIED", "TOK_IMPORTS",
  "TOK_INCLUDES", "TOK_INSTANCE", "TOK_INSTRUCTIONS", "TOK_INTEGER",
  "TOK_ISO646String", "TOK_MAX", "TOK_MIN", "TOK_MINUS_INFINITY",
  "TOK_NULL", "TOK_NumericString", "TOK_OBJECT", "TOK_ObjectDescriptor",
  "TOK_OCTET", "TOK_OF", "TOK_OPTIONAL", "TOK_PATTERN", "TOK_PDV",
  "TOK_PLUS_INFINITY", "TOK_PRESENT", "TOK_PrintableString", "TOK_PRIVATE",
  "TOK_REAL", "TOK_RELATIVE_OID", "TOK_SEQUENCE", "TOK_SET", "TOK_SIZE",
  "TOK_STRING", "TOK_SYNTAX", "TOK_T61String", "TOK_TAGS",
  "TOK_TeletexString", "TOK_TRUE", "TOK_TYPE_IDENTIFIER", "TOK_UNIQUE",
  "TOK_UNIVERSAL", "TOK_UniversalString", "TOK_UTCTime", "TOK_UTF8String",
  "TOK_VideotexString", "TOK_VisibleString", "TOK_WITH", "TOK_SUCCESSORS",
  "\"UTF-8 byte order mark\"", "TOK_EXCEPT", "'^'", "TOK_INTERSECTION",
  "'|'", "TOK_UNION", "\"..\"", "\"...\"", "\"concrete TypeDeclaration\"",
  "'{'", "'}'", "'('", "')'", "';'", "','", "':'", "'['", "']'", "'!'",
  "'.'", "'<'", "'@'", "$accept", "ParsedGrammar", "ModuleList",
  "ModuleDefinition", "@1", "optObjectIdentifier", "ObjectIdentifier",
  "ObjectIdentifierBody", "ObjectIdentifierElement",
  "optModuleDefinitionFlags", "ModuleDefinitionFlags",
  "ModuleDefinitionFlag", "optModuleBody", "ModuleBody", "AssignmentList",
  "Assignment", "@2", "optImports", "ImportsDefinition",
  "optImportsBundleSet", "ImportsBundleSet", "AssignedIdentifier",
  "ImportsBundle", "optWithSuccessors", "ImportsList", "ImportsElement",
  "optExports", "ExportsDefinition", "ExportsBody", "ExportsElement",
  "ValueSet", "ValueSetTypeAssignment", "DefinedType", "DataTypeReference",
  "ParameterArgumentList", "ParameterArgumentName", "ActualParameterList",
  "ActualParameter", "optComponentTypeLists", "ComponentTypeLists",
  "ComponentType", "AlternativeTypeLists", "AlternativeType",
  "ObjectClass", "optUNIQUE", "FieldSpec", "ClassField", "optWithSyntax",
  "WithSyntax", "@3", "WithSyntaxList", "WithSyntaxToken",
  "ExtensionAndException", "Type", "TaggedType", "DefinedUntaggedType",
  "UntaggedType", "MaybeIndirectTaggedType", "NSTD_IndirectMarker",
  "MaybeIndirectTypeDeclaration", "TypeDeclaration",
  "ConcreteTypeDeclaration", "ComplexTypeReference",
  "ComplexTypeReferenceAmpList", "ComplexTypeReferenceElement",
  "PrimitiveFieldReference", "FieldName", "DefinedObjectClass",
  "ValueAssignment", "Value", "@4", "SimpleValue", "DefinedValue",
  "RestrictedCharacterStringValue", "Opaque", "OpaqueFirstToken",
  "BasicTypeId", "BasicTypeId_UniverationCompatible", "BuiltinType",
  "BasicString", "UnionMark", "IntersectionMark", "optConstraint",
  "optManyConstraints", "optSizeOrConstraint", "Constraint",
  "ManyConstraints", "ConstraintSpec", "SubtypeConstraint",
  "ElementSetSpecs", "ElementSetSpec", "Unions", "Intersections",
  "IntersectionElements", "Elements", "SubtypeElements",
  "PermittedAlphabet", "SizeConstraint", "PatternConstraint", "ValueRange",
  "LowerEndValue", "UpperEndValue", "SingleValue", "BitStringValue",
  "ContainedSubtype", "InnerTypeConstraints", "SingleTypeConstraint",
  "MultipleTypeConstraints", "FullSpecification", "PartialSpecification",
  "TypeConstraints", "NamedConstraint", "optPresenceConstraint",
  "PresenceConstraint", "GeneralConstraint", "UserDefinedConstraint", "@5",
  "ContentsConstraint", "ConstraintRangeSpec", "TableConstraint",
  "SimpleTableConstraint", "ComponentRelationConstraint", "AtNotationList",
  "AtNotationElement", "ComponentIdList", "optMarker", "Marker",
  "IdentifierList", "IdentifierElement", "NamedNumberList", "NamedNumber",
  "NamedBitList", "NamedBit", "Enumerations", "UniverationList",
  "UniverationElement", "SignedNumber", "RealValue", "optTag", "Tag",
  "TagTypeValue", "TagClass", "TagPlicit", "TypeRefName", "optIdentifier",
  "Identifier", "IdentifierAsReference", "IdentifierAsValue", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,    94,   362,   124,
     363,   364,   365,   366,   123,   125,    40,    41,    59,    44,
      58,    91,    93,    33,    46,    60,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   127,   128,   128,   129,   129,   131,   130,   132,   132,
     133,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   138,   138,   138,   139,   139,   140,   141,
     141,   142,   142,   142,   143,   142,   142,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   150,   150,
     151,   151,   152,   152,   152,   153,   153,   154,   154,   154,
     155,   155,   156,   156,   156,   157,   158,   159,   159,   160,
     160,   160,   160,   161,   161,   162,   162,   162,   162,   162,
     163,   163,   164,   164,   164,   164,   165,   165,   166,   166,
     166,   167,   167,   167,   167,   168,   168,   169,   169,   169,
     170,   171,   171,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   174,   174,   176,   175,   177,   177,   178,   178,
     178,   178,   179,   179,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   187,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   189,   189,   189,   189,   189,   190,   190,
     191,   192,   192,   193,   193,   193,   194,   195,   196,   196,
     197,   196,   198,   198,   198,   198,   198,   198,   198,   199,
     199,   200,   200,   200,   201,   201,   202,   202,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   204,   204,   204,   205,   205,   205,   205,   205,   205,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   211,   211,   212,   213,   213,   214,   214,
     215,   216,   216,   216,   216,   217,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   222,   222,   222,
     222,   222,   223,   224,   225,   225,   226,   227,   227,   228,
     228,   229,   230,   230,   231,   231,   232,   232,   233,   234,
     234,   235,   236,   237,   237,   238,   239,   239,   240,   240,
     240,   241,   241,   241,   243,   242,   244,   245,   245,   245,
     245,   246,   246,   247,   248,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   256,   256,
     257,   257,   258,   258,   259,   259,   260,   261,   261,   262,
     262,   262,   262,   262,   263,   263,   264,   265,   265,   266,
     267,   268,   268,   268,   268,   269,   269,   269,   270,   270,
     271,   271,   272,   273,   274
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     0,     9,     0,     1,
       3,     2,     1,     2,     1,     4,     1,     0,     1,     1,
       2,     2,     2,     2,     2,     2,     0,     1,     3,     1,
       2,     1,     1,     1,     0,     3,     1,     0,     1,     3,
       2,     0,     1,     1,     2,     0,     1,     5,     0,     2,
       1,     3,     1,     3,     1,     0,     1,     3,     3,     2,
       1,     3,     1,     3,     1,     3,     4,     1,     4,     3,
       3,     6,     6,     1,     3,     1,     3,     3,     3,     3,
       1,     3,     1,     1,     1,     1,     0,     1,     1,     3,
       5,     3,     2,     3,     1,     1,     3,     2,     1,     1,
       5,     0,     1,     1,     3,     2,     4,     3,     3,     3,
       3,     3,     0,     1,     0,     6,     1,     2,     1,     1,
       1,     3,     1,     3,     3,     1,     2,     2,     2,     3,
       0,     2,     1,     1,     1,     4,     4,     4,     6,     6,
       1,     4,     3,     1,     1,     3,     3,     3,     1,     3,
       1,     1,     1,     1,     3,     3,     1,     4,     1,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     4,     5,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     1,     0,     1,     1,     3,     1,     2,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     1,     1,
       1,     3,     5,     1,     3,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     2,     1,     2,     2,
       3,     1,     1,     3,     4,     1,     3,     2,     3,     1,
       3,     0,     1,     1,     2,     1,     3,     1,     1,     3,
       4,     4,     1,     3,     4,     4,     1,     1,     3,     1,
       4,     4,     1,     1,     1,     1,     1,     0,     1,     2,
       4,     0,     1,     1,     1,     0,     1,     1,     1,     1,
       0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   338,   339,     0,     0,     3,     4,     6,     2,     1,
       5,     8,     0,     0,     9,   342,    16,    11,     0,    12,
      14,    17,    10,    13,     0,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    25,    23,    21,    24,    22,     0,
      20,    15,    55,     0,     0,    27,    37,    56,     0,    59,
       0,    60,    62,    64,     7,    41,     0,    38,    58,    57,
       0,     0,    40,     0,    42,    43,     0,    50,    52,    54,
     200,     0,   201,   202,   203,   204,   205,   213,   206,   207,
     208,   209,   210,   211,   212,    28,    29,    33,    31,    32,
      36,   327,   327,    61,    63,    39,    44,     0,     0,     0,
      34,    30,   327,     0,   331,     0,   125,     0,   328,   335,
       0,    45,    51,    53,    35,     0,    70,    69,     0,   178,
       0,     0,   192,   184,   188,   191,   179,     0,     0,   180,
     183,   187,     0,    73,     0,   190,   189,    75,   333,   334,
     332,     0,     0,   143,   144,     0,   140,     0,     0,   192,
       0,   191,   222,   222,   133,   126,   220,   132,    67,   194,
     134,   337,   336,   329,     0,    46,    48,     0,   193,   186,
     185,   182,   181,     0,     0,     0,     0,     0,     0,    66,
       0,     0,     0,     0,   193,   327,     0,     0,     0,     0,
     327,     0,     0,   223,   224,   327,     0,   128,   226,   221,
       0,   262,   171,   263,   324,   325,   326,   172,   173,   163,
     162,   164,   160,   157,   158,   159,   167,   168,   165,   166,
       0,   343,   344,   169,     0,    47,   327,   327,     0,   103,
     327,    74,    79,    78,    77,    76,   330,   143,   144,     0,
       0,   327,   258,     0,     0,   231,     0,   220,   265,   261,
       0,   232,   235,   237,   239,   241,   243,   247,   248,   250,
     251,     0,   245,   246,   249,   145,   151,   152,   147,   148,
     150,   146,   199,     0,   305,   307,     0,     0,   122,     0,
      95,    98,    99,   130,   327,   323,     0,   316,   317,   322,
     319,   142,     0,   308,     0,   253,     0,     0,    87,    88,
      94,   301,   327,     0,   327,   160,     0,   228,   230,   229,
     281,   283,   282,   291,   292,   340,     0,   340,   227,   162,
      85,     0,    80,    82,    83,    84,     0,     0,    49,   156,
     153,     0,   303,   301,   301,   301,   105,   302,   101,   301,
     301,   112,     0,    72,    71,     0,   252,   264,   254,   255,
       0,     0,     0,   127,    65,     0,   214,   215,     0,   216,
     217,     0,     0,   287,     0,     0,     0,   198,     0,   141,
       0,   312,     0,     0,   135,   327,     0,   220,    97,   196,
       0,     0,   195,     0,     0,   327,   136,   327,    92,   301,
       0,   286,     0,   225,     0,   327,   341,   137,   327,    68,
       0,   176,   161,   174,   177,   170,   304,   110,     0,   109,
     111,   102,   301,   107,   108,     0,   100,   113,   104,   236,
     268,   266,     0,   267,   269,   270,   244,   233,   238,   240,
     242,   288,   289,   260,   256,   259,   149,   306,   197,     0,
       0,   123,   124,    96,   131,   129,   318,     0,     0,   309,
       0,     0,    93,   327,    89,    91,   284,   293,     0,     0,
     295,   130,   130,    81,   175,   154,   155,   106,     0,     0,
       0,   273,   218,     0,   290,   313,     0,     0,   321,   320,
     311,   310,     0,     0,     0,   297,   299,   294,     0,   138,
     139,   114,     0,   271,     0,   276,   219,   234,   314,   315,
      90,   285,   298,     0,   296,     0,     0,   274,   279,   280,
     278,   275,   277,   300,   118,   119,     0,     0,   116,   120,
     272,     0,   115,   117,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    11,    13,    14,    18,    19,    30,
      31,    32,    44,    45,    85,    86,   114,    56,    57,    63,
      64,   166,    65,   225,    66,    67,    46,    47,    50,    51,
     320,    87,   247,    88,   132,   133,   321,   322,   297,   298,
     299,   279,   280,   116,   412,   228,   229,   416,   417,   505,
     517,   518,   300,   105,   106,   248,   323,   301,   376,   377,
     156,   157,   158,   268,   269,   519,   334,   335,    89,   249,
     326,   214,   215,   216,   402,   403,   159,   135,   160,   136,
     358,   361,   495,   197,   192,   198,   199,   306,   307,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   434,   262,   217,   263,   264,   421,   423,   424,   425,
     470,   471,   511,   512,   309,   310,   483,   311,   365,   312,
     313,   314,   459,   460,   485,   336,   337,   273,   274,   292,
     293,   370,   371,   286,   287,   288,   218,   219,   283,   108,
     109,   141,   163,   220,   395,   221,   222,   223
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -365
static const yytype_int16 yypact[] =
{
      74,  -365,  -365,   244,    51,   244,  -365,  -365,   244,  -365,
    -365,   -44,    52,    61,  -365,  -365,  -365,  -365,    57,  -365,
     -37,   176,  -365,  -365,    85,   104,    88,   109,    65,   124,
     174,   176,  -365,   101,  -365,  -365,  -365,  -365,  -365,   197,
    -365,  -365,   103,    63,   181,  -365,   133,  -365,   130,  -365,
     155,  -365,   139,  -365,  -365,   212,   720,  -365,  -365,  -365,
     188,   186,  -365,   141,   188,  -365,    46,  -365,   175,  -365,
    -365,   286,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,   720,  -365,  -365,  -365,  -365,
    -365,    15,   216,  -365,  -365,  -365,  -365,   244,   188,   223,
    -365,  -365,    -3,   874,    78,   336,  -365,   797,  -365,    55,
     337,   -44,  -365,  -365,  -365,   228,  -365,  -365,   255,  -365,
     257,   268,  -365,  -365,  -365,  -365,  -365,   289,   261,  -365,
    -365,  -365,   -17,  -365,   231,  -365,  -365,   232,  -365,  -365,
    -365,   341,   235,   230,   233,   241,   315,   270,   246,   247,
     288,   248,   119,   144,  -365,  -365,   249,  -365,   252,  -365,
    -365,  -365,  -365,  -365,   711,  -365,   264,   276,  -365,  -365,
    -365,  -365,  -365,   366,   874,   188,   188,   250,   371,  -365,
     244,   301,    19,   340,   256,    35,    72,   292,   363,   249,
      34,   229,   300,  -365,  -365,    34,   302,  -365,  -365,   249,
     616,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
     253,  -365,  -365,  -365,   287,  -365,   178,    10,     5,  -365,
      -3,  -365,  -365,  -365,  -365,  -365,  -365,   230,   233,   284,
     249,   216,  -365,   110,   275,  -365,   398,   249,  -365,  -365,
     277,   274,   215,   219,  -365,   291,  -365,  -365,  -365,  -365,
    -365,   -24,     2,  -365,  -365,  -365,  -365,  -365,   271,  -365,
    -365,  -365,  -365,    95,  -365,  -365,   363,   363,   278,    96,
    -365,  -365,  -365,  -365,   216,  -365,   279,   280,  -365,  -365,
     282,  -365,   148,  -365,   303,  -365,   324,   290,   283,  -365,
    -365,    12,   216,   370,   216,   244,   304,  -365,  -365,  -365,
    -365,  -365,  -365,   306,  -365,   363,   307,   363,  -365,   310,
    -365,   160,  -365,  -365,  -365,  -365,   269,   363,  -365,  -365,
    -365,   711,  -365,    12,    -1,    12,  -365,  -365,   308,    -1,
      12,   314,   276,  -365,  -365,   507,  -365,  -365,  -365,  -365,
     249,   316,   312,  -365,  -365,   319,  -365,  -365,   507,  -365,
    -365,   507,   507,   293,   317,   521,   309,  -365,   363,  -365,
     166,  -365,   320,   239,  -365,    35,   797,   249,  -365,  -365,
      72,   239,  -365,   363,   239,   216,  -365,    21,  -365,    12,
     318,  -365,   322,  -365,   313,   216,  -365,  -365,   216,  -365,
     616,  -365,   426,  -365,  -365,  -365,  -365,  -365,   311,  -365,
    -365,  -365,    12,  -365,  -365,   345,  -365,  -365,  -365,  -365,
    -365,  -365,    23,  -365,  -365,  -365,  -365,   325,   219,  -365,
    -365,  -365,   323,  -365,  -365,  -365,  -365,  -365,  -365,   363,
     260,  -365,  -365,  -365,  -365,  -365,  -365,   321,   326,  -365,
     328,   330,  -365,    39,  -365,  -365,  -365,  -365,    13,   169,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,   339,   331,
     171,  -365,   249,   398,  -365,  -365,   338,   343,  -365,  -365,
    -365,  -365,    22,   269,   363,   332,  -365,  -365,   313,  -365,
    -365,  -365,   363,  -365,   363,    18,  -365,  -365,  -365,  -365,
    -365,   426,   332,   363,  -365,    41,   172,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,    41,    17,  -365,  -365,
    -365,    36,  -365,  -365,  -365
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -365,  -365,   451,   163,  -365,  -365,   346,  -365,   440,  -365,
    -365,   431,  -365,  -365,  -365,   378,  -365,  -365,  -365,  -365,
    -365,  -365,   400,  -365,  -365,   368,  -365,  -365,  -365,   408,
     333,  -365,  -106,  -365,  -365,   296,  -365,    73,   285,    24,
      91,  -365,   106,   254,  -365,  -365,   137,  -365,  -365,  -365,
     -34,  -215,  -172,   -82,  -365,  -365,   381,  -177,  -365,  -128,
     113,  -365,   353,  -365,   127,  -164,   263,   267,  -365,  -143,
    -365,  -188,  -191,  -365,    14,  -365,   -68,  -365,  -365,    37,
    -365,  -365,  -365,  -225,   342,  -150,  -365,  -365,  -365,   305,
    -239,  -365,   140,   138,  -280,  -365,  -365,   183,  -365,  -365,
    -365,  -365,   135,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
      16,     8,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,    25,    20,  -223,  -365,  -365,   142,  -365,
     120,  -365,    66,  -365,  -365,   126,  -160,  -365,   -87,  -365,
    -365,  -365,  -365,    11,   190,   -12,  -365,  -364
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -302
static const yytype_int16 yytable[] =
{
      20,   154,   193,   193,   107,   107,    20,   352,   282,   325,
     110,     7,   324,   281,     7,   107,     7,   270,   102,     7,
     117,   213,   353,   514,    15,   453,   289,   500,   329,   330,
      15,    53,    15,   115,    15,   134,   266,   267,   515,   295,
     331,   508,   514,    69,    92,    15,    15,   514,    53,   318,
      15,     9,    69,   331,    52,   266,   267,   515,   472,   296,
     266,   267,   515,    15,    16,   419,    68,    91,    15,    16,
      12,    52,   296,    92,    15,    68,   332,   296,   388,    24,
       1,     2,   430,    15,   204,   205,    69,   363,    48,   332,
     346,     1,     2,    90,   154,   509,    91,    33,   173,   510,
      97,   364,   174,    21,   161,   138,   134,   378,   111,    68,
     407,   409,   410,  -257,   137,   162,   413,   414,   104,   348,
     341,    15,    90,   408,   342,   389,    37,  -257,   472,   103,
     472,   104,   522,   278,   272,   469,   104,   484,   516,   107,
     107,   387,   104,   107,   333,   338,   278,   278,   344,   -86,
     -26,   278,   445,    43,   107,   104,   104,   516,   524,   347,
     104,   139,   516,   233,   235,    98,   455,    17,    10,    34,
     275,    10,    22,   284,   290,   140,   294,    39,   302,     3,
      35,    49,   441,   302,   285,   137,   232,   234,   406,   467,
     447,   265,   271,   450,    25,    55,   329,   330,   282,    15,
     420,    36,   270,   281,    26,     1,     2,   189,   452,   325,
     367,   374,   324,   442,   368,   375,    38,   107,    41,   331,
     289,   448,   391,    15,   451,    27,    42,    28,    54,     1,
       2,   349,   189,   190,   497,   191,    29,   201,   202,   203,
      15,   204,   205,   206,   207,   208,   237,   238,    58,   477,
      15,   204,   205,    61,   239,   332,     1,     2,   195,    95,
     191,     1,     2,   382,   369,   372,    62,   383,   303,   304,
     154,    15,   476,    59,    60,   399,   401,     1,     2,   400,
      15,   438,   209,   240,   487,   439,   493,   520,   488,    99,
     494,   494,   241,  -301,   154,   226,   227,  -301,   242,   104,
     210,    94,   523,   396,   100,   396,   523,   243,   461,   143,
     144,   462,   350,   351,   404,   405,   392,   189,     1,     2,
     266,   267,   496,   211,   356,   357,   359,   360,   266,   267,
     465,   466,   244,   489,   490,   194,   194,   104,   113,   142,
     164,   245,   167,   305,   168,   246,   169,   170,   171,   178,
     172,   175,   176,   177,   180,   182,   275,   181,   183,   184,
     185,   186,   188,   284,   187,   191,   200,   224,   290,   230,
     277,   294,   236,   276,    15,   302,   315,   327,   317,   201,
     202,   203,    15,   204,   205,   206,   207,   208,   237,   238,
     345,   328,   354,   355,   379,   366,   239,   362,   381,   380,
     385,   373,   387,   390,   411,   386,   201,   202,   203,    15,
     204,   205,   206,   207,   208,   237,   238,   415,   431,   384,
     394,   393,   397,   239,   209,   240,  -179,   372,   432,   426,
     422,   427,   456,   464,   241,   468,   440,   457,   478,   458,
     242,   302,   210,   479,   473,   480,   486,   481,   474,   243,
     492,   209,   240,   491,     8,   498,   503,   165,    23,   189,
     499,   241,    40,   101,    96,   211,   112,   242,    93,   210,
     231,   404,   486,   463,   244,   179,   243,   482,   454,   418,
     316,   443,   521,   245,   343,   212,   189,   246,   155,   444,
     339,   513,   211,   436,   340,   196,   308,   501,   428,   429,
     435,   244,   507,   449,   502,   475,   446,   398,   506,     0,
     437,     0,   212,   504,   246,   201,   202,   203,    15,   204,
     205,   206,   207,   208,   237,   238,     0,     0,     0,   201,
     202,   203,    15,   204,   205,   206,   207,   208,     1,     2,
     291,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,   240,     0,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   209,     0,   242,     0,   210,     0,
       0,     0,     0,     0,     0,   243,     0,     0,     0,   433,
       0,     0,   210,     0,     0,   189,     0,     0,     0,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
     244,     0,     0,     0,     0,   211,     0,     0,     0,     0,
       0,   212,     0,   246,   201,   202,   203,    15,   204,   205,
     206,   207,   208,   237,   238,   212,     0,     0,   145,     0,
       0,     0,   146,     0,     0,     0,   147,    70,   119,     0,
     120,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   149,     0,     0,     0,   123,   209,
       0,   124,    72,    73,    74,     0,     0,     0,     0,     0,
     150,     0,   151,    75,     0,     0,     0,   319,    76,   127,
      77,   128,     0,     0,     0,     0,     0,     0,    78,     0,
     129,   130,   152,   153,     0,     0,     0,    79,     0,    80,
     211,     0,     0,     0,    81,   131,    82,    83,    84,   201,
     202,   203,    15,   204,   205,   206,   207,   208,     1,     2,
     178,    15,     0,     0,     0,     0,     0,     1,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,     0,
       0,     0,   210,     0,     0,     0,     0,    75,     0,     0,
       0,     0,    76,     0,    77,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,   211,     0,     0,     0,     0,
       0,    79,     0,    80,   143,   144,     0,     0,    81,   145,
      82,    83,    84,   146,     0,   212,     0,   147,    70,   119,
       0,   120,   148,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   149,     0,     0,     0,   123,
       0,     0,   124,    72,    73,    74,     0,     0,     0,     0,
       0,   150,     0,   151,    75,     0,     0,     0,   126,    76,
     127,    77,   128,     0,     0,     0,     0,     0,     0,    78,
       0,   129,   130,   152,   153,     0,     0,     0,    79,     0,
      80,     1,     2,     0,     0,    81,   131,    82,    83,    84,
       0,     0,     0,     0,   118,    70,   119,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,     0,     0,     0,   123,     0,     0,   124,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
     125,    75,     0,     0,     0,   126,    76,   127,    77,   128,
       0,     0,     0,     0,     0,     0,    78,     0,   129,   130,
       0,     0,     0,     0,     0,    79,     0,    80,     0,     0,
       0,     0,    81,   131,    82,    83,    84
};

static const yytype_int16 yycheck[] =
{
      12,   107,   152,   153,    91,    92,    18,   246,   185,   200,
      92,     0,   200,   185,     3,   102,     5,   181,     3,     8,
     102,   164,   247,     6,    11,     4,   186,     5,    18,    19,
      11,    43,    11,    36,    11,   103,    19,    20,    21,   189,
      41,    23,     6,    55,    56,    11,    11,     6,    60,   199,
      11,     0,    64,    41,    43,    19,    20,    21,   422,    38,
      19,    20,    21,    11,    12,   345,    55,    56,    11,    12,
     114,    60,    38,    85,    11,    64,    77,    38,   301,   116,
      17,    18,   362,    11,    12,    13,    98,   111,    25,    77,
     240,    17,    18,    56,   200,    77,    85,    12,   115,    81,
      54,   125,   119,    42,    49,    27,   174,   284,    97,    98,
     333,   334,   335,   111,   103,    60,   339,   340,   121,     9,
     115,    11,    85,   124,   119,   302,    61,   125,   492,   114,
     494,   121,   115,   112,   115,   112,   121,   124,   121,   226,
     227,   119,   121,   230,   226,   227,   112,   112,   230,   115,
      47,   112,   377,    50,   241,   121,   121,   121,   122,   241,
     121,    83,   121,   175,   176,   119,   389,   115,     5,    65,
     182,     8,   115,   185,   186,    97,   188,     3,   190,   105,
      92,   118,   373,   195,   112,   174,   175,   176,   331,   412,
     381,   180,   181,   384,    18,    62,    18,    19,   375,    11,
     350,    92,   366,   375,    28,    17,    18,    88,   385,   400,
     115,   115,   400,   373,   119,   119,    92,   304,   117,    41,
     380,   381,   304,    11,   384,    49,    29,    51,    47,    17,
      18,   243,    88,   114,   473,   116,    60,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   118,   440,
      11,    12,    13,   114,    25,    77,    17,    18,   114,   118,
     116,    17,    18,   115,   276,   277,    54,   119,    39,    40,
     376,    11,    12,   118,   119,   115,     7,    17,    18,   119,
      11,   115,    53,    54,   115,   119,   115,   115,   119,   114,
     119,   119,    63,   115,   400,    19,    20,   119,    69,   121,
      71,   115,   517,   315,    18,   317,   521,    78,   395,    17,
      18,   398,    37,    38,   326,   327,   305,    88,    17,    18,
      19,    20,   472,    94,   109,   110,   107,   108,    19,    20,
      19,    20,   103,   461,   462,   152,   153,   121,   115,     3,
       3,   112,   114,   114,    89,   116,    89,    79,    59,   114,
      89,   120,   120,    12,   124,   114,   368,   124,    43,    89,
     114,   114,   114,   375,    76,   116,   114,   103,   380,     3,
     114,   383,   122,    33,    11,   387,    76,   124,    76,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     106,   104,   115,   119,   115,   124,    25,   106,   116,   119,
      76,   123,   119,    33,    96,   115,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   103,   125,   116,
     114,   117,   115,    25,    53,    54,   116,   439,   111,   117,
     114,   112,   114,     7,    63,    90,   116,   115,   117,   126,
      69,   453,    71,   117,   119,   117,   458,   117,   125,    78,
     119,    53,    54,   114,     3,   117,   124,   111,    18,    88,
     117,    63,    31,    85,    64,    94,    98,    69,    60,    71,
     174,   483,   484,   400,   103,   142,    78,   453,   387,   342,
     195,   375,   516,   112,   230,   114,    88,   116,   107,   376,
     227,   503,    94,   366,   227,   153,   191,   483,   358,   361,
     365,   103,   494,   383,   484,   439,   380,   317,   492,    -1,
     368,    -1,   114,   488,   116,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    53,    -1,    69,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    68,
      -1,    -1,    71,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   114,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    30,    31,    32,    -1,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      84,    85,    86,    87,    -1,    -1,    -1,    91,    -1,    93,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     114,    11,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    93,    17,    18,    -1,    -1,    98,    22,
     100,   101,   102,    26,    -1,   114,    -1,    30,    31,    32,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    66,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    91,    -1,
      93,    17,    18,    -1,    -1,    98,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,
      -1,    -1,    98,    99,   100,   101,   102
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    17,    18,   105,   128,   129,   130,   270,   129,     0,
     130,   131,   114,   132,   133,    11,    12,   115,   134,   135,
     272,    42,   115,   135,   116,    18,    28,    49,    51,    60,
     136,   137,   138,    12,    65,    92,    92,    61,    92,     3,
     138,   117,    29,    50,   139,   140,   153,   154,    25,   118,
     155,   156,   270,   272,    47,    62,   144,   145,   118,   118,
     119,   114,    54,   146,   147,   149,   151,   152,   270,   272,
      31,    46,    56,    57,    58,    67,    72,    74,    82,    91,
      93,    98,   100,   101,   102,   141,   142,   158,   160,   195,
     206,   270,   272,   156,   115,   118,   149,    54,   119,   114,
      18,   142,     3,   114,   121,   180,   181,   265,   266,   267,
     180,   270,   152,   115,   143,    36,   170,   180,    30,    32,
      34,    44,    48,    52,    55,    66,    71,    73,    75,    84,
      85,    99,   161,   162,   203,   204,   206,   270,    27,    83,
      97,   268,     3,    17,    18,    22,    26,    30,    35,    48,
      64,    66,    86,    87,   159,   183,   187,   188,   189,   203,
     205,    49,    60,   269,     3,   133,   148,   114,    89,    89,
      79,    59,    89,   115,   119,   120,   120,    12,   114,   157,
     124,   124,   114,    43,    89,   114,   114,    76,   114,    88,
     114,   116,   211,   212,   224,   114,   211,   210,   212,   213,
     114,     8,     9,    10,    12,    13,    14,    15,    16,    53,
      71,    94,   114,   196,   198,   199,   200,   230,   263,   264,
     270,   272,   273,   274,   103,   150,    19,    20,   172,   173,
       3,   162,   270,   272,   270,   272,   122,    17,    18,    25,
      54,    63,    69,    78,   103,   112,   116,   159,   182,   196,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   229,   231,   232,   270,    19,    20,   190,   191,
     192,   270,   115,   254,   255,   272,    33,   114,   112,   168,
     169,   179,   184,   265,   272,   112,   260,   261,   262,   263,
     272,   189,   256,   257,   272,   212,    38,   165,   166,   167,
     179,   184,   272,    39,    40,   114,   214,   215,   216,   241,
     242,   244,   246,   247,   248,    76,   165,    76,   212,    71,
     157,   163,   164,   183,   198,   199,   197,   124,   104,    18,
      19,    41,    77,   180,   193,   194,   252,   253,   180,   193,
     194,   115,   119,   170,   180,   106,   212,   180,     9,   272,
      37,    38,   217,   210,   115,   119,   109,   110,   207,   107,
     108,   208,   106,   111,   125,   245,   124,   115,   119,   272,
     258,   259,   272,   123,   115,   119,   185,   186,   184,   115,
     119,   116,   115,   119,   116,    76,   115,   119,   252,   184,
      33,   180,   270,   117,   114,   271,   272,   115,   271,   115,
     119,     7,   201,   202,   272,   272,   196,   252,   124,   252,
     252,    96,   171,   252,   252,   103,   174,   175,   173,   221,
     212,   233,   114,   234,   235,   236,   117,   112,   219,   220,
     221,   125,   111,    68,   228,   229,   191,   255,   115,   119,
     116,   199,   263,   169,   187,   210,   262,   199,   263,   257,
     199,   263,   184,     4,   167,   252,   114,   115,   126,   249,
     250,   265,   265,   164,     7,    19,    20,   252,    90,   112,
     237,   238,   274,   119,   125,   259,    12,   199,   117,   117,
     117,   117,   166,   243,   124,   251,   272,   115,   119,   186,
     186,   114,   119,   115,   119,   209,   212,   217,   117,   117,
       5,   201,   251,   124,   250,   176,   237,   238,    23,    77,
      81,   239,   240,   272,     6,    21,   121,   177,   178,   192,
     115,   177,   115,   178,   122
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 416 "asn1p_y.y"
    {
		*(void **)param = (yyvsp[(2) - (2)].a_grammar);
	;}
    break;

  case 3:
#line 419 "asn1p_y.y"
    {
		*(void **)param = (yyvsp[(1) - (1)].a_grammar);
	;}
    break;

  case 4:
#line 425 "asn1p_y.y"
    {
		(yyval.a_grammar) = asn1p_new();
		checkmem((yyval.a_grammar));
		TQ_ADD(&((yyval.a_grammar)->modules), (yyvsp[(1) - (1)].a_module), mod_next);
	;}
    break;

  case 5:
#line 430 "asn1p_y.y"
    {
		(yyval.a_grammar) = (yyvsp[(1) - (2)].a_grammar);
		TQ_ADD(&((yyval.a_grammar)->modules), (yyvsp[(2) - (2)].a_module), mod_next);
	;}
    break;

  case 6:
#line 447 "asn1p_y.y"
    { currentModule = asn1p_module_new(); ;}
    break;

  case 7:
#line 452 "asn1p_y.y"
    {

		(yyval.a_module) = currentModule;

		if((yyvsp[(8) - (9)].a_module)) {
			asn1p_module_t tmp = *((yyval.a_module));
			*((yyval.a_module)) = *((yyvsp[(8) - (9)].a_module));
			*((yyvsp[(8) - (9)].a_module)) = tmp;
			asn1p_module_free((yyvsp[(8) - (9)].a_module));
		} else {
			/* There's a chance that a module is just plain empty */
		}

		(yyval.a_module)->ModuleName = (yyvsp[(1) - (9)].tv_str);
		(yyval.a_module)->module_oid = (yyvsp[(3) - (9)].a_oid);
		(yyval.a_module)->module_flags = (yyvsp[(5) - (9)].a_module_flags);
	;}
    break;

  case 8:
#line 476 "asn1p_y.y"
    { (yyval.a_oid) = 0; ;}
    break;

  case 9:
#line 477 "asn1p_y.y"
    { (yyval.a_oid) = (yyvsp[(1) - (1)].a_oid); ;}
    break;

  case 10:
#line 481 "asn1p_y.y"
    {
		(yyval.a_oid) = (yyvsp[(2) - (3)].a_oid);
	;}
    break;

  case 11:
#line 484 "asn1p_y.y"
    {
		(yyval.a_oid) = 0;
	;}
    break;

  case 12:
#line 490 "asn1p_y.y"
    {
		(yyval.a_oid) = asn1p_oid_new();
		asn1p_oid_add_arc((yyval.a_oid), &(yyvsp[(1) - (1)].a_oid_arc));
		if((yyvsp[(1) - (1)].a_oid_arc).name)
			free((yyvsp[(1) - (1)].a_oid_arc).name);
	;}
    break;

  case 13:
#line 496 "asn1p_y.y"
    {
		(yyval.a_oid) = (yyvsp[(1) - (2)].a_oid);
		asn1p_oid_add_arc((yyval.a_oid), &(yyvsp[(2) - (2)].a_oid_arc));
		if((yyvsp[(2) - (2)].a_oid_arc).name)
			free((yyvsp[(2) - (2)].a_oid_arc).name);
	;}
    break;

  case 14:
#line 505 "asn1p_y.y"
    {					/* iso */
		(yyval.a_oid_arc).name = (yyvsp[(1) - (1)].tv_str);
		(yyval.a_oid_arc).number = -1;
	;}
    break;

  case 15:
#line 509 "asn1p_y.y"
    {		/* iso(1) */
		(yyval.a_oid_arc).name = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_oid_arc).number = (yyvsp[(3) - (4)].a_int);
	;}
    break;

  case 16:
#line 513 "asn1p_y.y"
    {					/* 1 */
		(yyval.a_oid_arc).name = 0;
		(yyval.a_oid_arc).number = (yyvsp[(1) - (1)].a_int);
	;}
    break;

  case 17:
#line 523 "asn1p_y.y"
    { (yyval.a_module_flags) = MSF_NOFLAGS; ;}
    break;

  case 18:
#line 524 "asn1p_y.y"
    {
		(yyval.a_module_flags) = (yyvsp[(1) - (1)].a_module_flags);
	;}
    break;

  case 19:
#line 533 "asn1p_y.y"
    {
		(yyval.a_module_flags) = (yyvsp[(1) - (1)].a_module_flags);
	;}
    break;

  case 20:
#line 536 "asn1p_y.y"
    {
		(yyval.a_module_flags) = (yyvsp[(1) - (2)].a_module_flags) | (yyvsp[(2) - (2)].a_module_flags);
	;}
    break;

  case 21:
#line 545 "asn1p_y.y"
    {
		(yyval.a_module_flags) = MSF_EXPLICIT_TAGS;
	;}
    break;

  case 22:
#line 548 "asn1p_y.y"
    {
		(yyval.a_module_flags) = MSF_IMPLICIT_TAGS;
	;}
    break;

  case 23:
#line 551 "asn1p_y.y"
    {
		(yyval.a_module_flags) = MSF_AUTOMATIC_TAGS;
	;}
    break;

  case 24:
#line 554 "asn1p_y.y"
    {
		(yyval.a_module_flags) = MSF_EXTENSIBILITY_IMPLIED;
	;}
    break;

  case 25:
#line 558 "asn1p_y.y"
    {
		/* X.680Amd1 specifies TAG and XER */
		if(strcmp((yyvsp[(1) - (2)].tv_str), "TAG") == 0) {
		 	(yyval.a_module_flags) = MSF_TAG_INSTRUCTIONS;
		} else if(strcmp((yyvsp[(1) - (2)].tv_str), "XER") == 0) {
		 	(yyval.a_module_flags) = MSF_XER_INSTRUCTIONS;
		} else {
			fprintf(stderr,
				"WARNING: %s INSTRUCTIONS at %s:%d: "
				"Unrecognized encoding reference\n",
				(yyvsp[(1) - (2)].tv_str), ASN_FILENAME, yylineno);
		 	(yyval.a_module_flags) = MSF_unk_INSTRUCTIONS;
		}
		free((yyvsp[(1) - (2)].tv_str));
	;}
    break;

  case 26:
#line 579 "asn1p_y.y"
    { (yyval.a_module) = 0; ;}
    break;

  case 27:
#line 580 "asn1p_y.y"
    {
		(yyval.a_module) = (yyvsp[(1) - (1)].a_module);
	;}
    break;

  case 28:
#line 589 "asn1p_y.y"
    {
		(yyval.a_module) = asn1p_module_new();
		AL_IMPORT((yyval.a_module), exports, (yyvsp[(1) - (3)].a_module), xp_next);
		AL_IMPORT((yyval.a_module), imports, (yyvsp[(2) - (3)].a_module), xp_next);
		asn1p_module_move_members((yyval.a_module), (yyvsp[(3) - (3)].a_module));

		asn1p_module_free((yyvsp[(1) - (3)].a_module));
		asn1p_module_free((yyvsp[(2) - (3)].a_module));
		asn1p_module_free((yyvsp[(3) - (3)].a_module));
	;}
    break;

  case 29:
#line 602 "asn1p_y.y"
    {
		(yyval.a_module) = (yyvsp[(1) - (1)].a_module);
	;}
    break;

  case 30:
#line 605 "asn1p_y.y"
    {
		if((yyvsp[(1) - (2)].a_module)) {
			(yyval.a_module) = (yyvsp[(1) - (2)].a_module);
		} else {
			(yyval.a_module) = (yyvsp[(2) - (2)].a_module);
			break;
		}
        asn1p_module_move_members((yyval.a_module), (yyvsp[(2) - (2)].a_module));
		asn1p_module_free((yyvsp[(2) - (2)].a_module));
	;}
    break;

  case 31:
#line 622 "asn1p_y.y"
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		assert((yyvsp[(1) - (1)].a_expr)->expr_type != A1TC_INVALID);
		assert((yyvsp[(1) - (1)].a_expr)->meta_type != AMT_INVALID);
		asn1p_module_member_add((yyval.a_module), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 32:
#line 629 "asn1p_y.y"
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		assert((yyvsp[(1) - (1)].a_expr)->expr_type != A1TC_INVALID);
		assert((yyvsp[(1) - (1)].a_expr)->meta_type != AMT_INVALID);
		asn1p_module_member_add((yyval.a_module), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 33:
#line 643 "asn1p_y.y"
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		assert((yyvsp[(1) - (1)].a_expr)->expr_type != A1TC_INVALID);
		assert((yyvsp[(1) - (1)].a_expr)->meta_type != AMT_INVALID);
		asn1p_module_member_add((yyval.a_module), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 34:
#line 651 "asn1p_y.y"
    { asn1p_lexer_hack_push_encoding_control(); ;}
    break;

  case 35:
#line 652 "asn1p_y.y"
    {
		fprintf(stderr,
			"WARNING: ENCODING-CONTROL %s "
			"specification at %s:%d ignored\n",
			(yyvsp[(2) - (3)].tv_str), ASN_FILENAME, yylineno);
		free((yyvsp[(2) - (3)].tv_str));
		(yyval.a_module) = 0;
	;}
    break;

  case 36:
#line 664 "asn1p_y.y"
    {
		return yyerror(
			"Attempt to redefine a standard basic string type, "
			"please comment out or remove this type redefinition.");
	;}
    break;

  case 37:
#line 677 "asn1p_y.y"
    { (yyval.a_module) = 0; ;}
    break;

  case 39:
#line 681 "asn1p_y.y"
    {
		if(!saved_aid && 0)
			return yyerror("Unterminated IMPORTS FROM, "
					"expected semicolon ';'");
		saved_aid = 0;
		(yyval.a_module) = (yyvsp[(2) - (3)].a_module);
	;}
    break;

  case 40:
#line 691 "asn1p_y.y"
    {
		return yyerror("Empty IMPORTS list");
	;}
    break;

  case 41:
#line 697 "asn1p_y.y"
    { (yyval.a_module) = asn1p_module_new(); ;}
    break;

  case 43:
#line 701 "asn1p_y.y"
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		TQ_ADD(&((yyval.a_module)->imports), (yyvsp[(1) - (1)].a_xports), xp_next);
	;}
    break;

  case 44:
#line 706 "asn1p_y.y"
    {
		(yyval.a_module) = (yyvsp[(1) - (2)].a_module);
		TQ_ADD(&((yyval.a_module)->imports), (yyvsp[(2) - (2)].a_xports), xp_next);
	;}
    break;

  case 45:
#line 713 "asn1p_y.y"
    { memset(&(yyval.a_aid), 0, sizeof((yyval.a_aid))); ;}
    break;

  case 46:
#line 714 "asn1p_y.y"
    { (yyval.a_aid).oid = (yyvsp[(1) - (1)].a_oid); ;}
    break;

  case 47:
#line 718 "asn1p_y.y"
    {
		(yyval.a_xports) = (yyvsp[(1) - (5)].a_xports);
		(yyval.a_xports)->fromModuleName = (yyvsp[(3) - (5)].tv_str);
		(yyval.a_xports)->identifier = (yyvsp[(4) - (5)].a_aid);
		(yyval.a_xports)->with_successors = (yyvsp[(5) - (5)].a_int);
		/* This stupid thing is used for look-back hack. */
		saved_aid = (yyval.a_xports)->identifier.oid ? 0 : &((yyval.a_xports)->identifier);
		checkmem((yyval.a_xports));
	;}
    break;

  case 48:
#line 730 "asn1p_y.y"
    { (yyval.a_int) = 0; ;}
    break;

  case 49:
#line 731 "asn1p_y.y"
    { (yyval.a_int) = 1; ;}
    break;

  case 50:
#line 735 "asn1p_y.y"
    {
		(yyval.a_xports) = asn1p_xports_new();
		checkmem((yyval.a_xports));
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[(1) - (1)].a_expr), next);
	;}
    break;

  case 51:
#line 740 "asn1p_y.y"
    {
		(yyval.a_xports) = (yyvsp[(1) - (3)].a_xports);
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[(3) - (3)].a_expr), next);
	;}
    break;

  case 52:
#line 747 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (1)].tv_str);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
	;}
    break;

  case 53:
#line 753 "asn1p_y.y"
    {		/* Completely equivalent to above */
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
	;}
    break;

  case 54:
#line 759 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (1)].tv_str);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
	;}
    break;

  case 55:
#line 769 "asn1p_y.y"
    { (yyval.a_module) = 0; ;}
    break;

  case 56:
#line 770 "asn1p_y.y"
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		if((yyvsp[(1) - (1)].a_xports)) {
			TQ_ADD(&((yyval.a_module)->exports), (yyvsp[(1) - (1)].a_xports), xp_next);
		} else {
			/* "EXPORTS ALL;" */
		}
	;}
    break;

  case 57:
#line 782 "asn1p_y.y"
    {
		(yyval.a_xports) = (yyvsp[(2) - (3)].a_xports);
	;}
    break;

  case 58:
#line 785 "asn1p_y.y"
    {
		(yyval.a_xports) = 0;
	;}
    break;

  case 59:
#line 788 "asn1p_y.y"
    {
		/* Empty EXPORTS clause effectively prohibits export. */
		(yyval.a_xports) = asn1p_xports_new();
		checkmem((yyval.a_xports));
	;}
    break;

  case 60:
#line 796 "asn1p_y.y"
    {
		(yyval.a_xports) = asn1p_xports_new();
		assert((yyval.a_xports));
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[(1) - (1)].a_expr), next);
	;}
    break;

  case 61:
#line 801 "asn1p_y.y"
    {
		(yyval.a_xports) = (yyvsp[(1) - (3)].a_xports);
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[(3) - (3)].a_expr), next);
	;}
    break;

  case 62:
#line 808 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (1)].tv_str);
		(yyval.a_expr)->expr_type = A1TC_EXPORTVAR;
	;}
    break;

  case 63:
#line 814 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		(yyval.a_expr)->expr_type = A1TC_EXPORTVAR;
	;}
    break;

  case 64:
#line 820 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (1)].tv_str);
		(yyval.a_expr)->expr_type = A1TC_EXPORTVAR;
	;}
    break;

  case 65:
#line 829 "asn1p_y.y"
    { (yyval.a_constr) = (yyvsp[(2) - (3)].a_constr); ;}
    break;

  case 66:
#line 832 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(2) - (4)].a_expr);
		assert((yyval.a_expr)->Identifier == 0);
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_expr)->meta_type = AMT_VALUESET;
		(yyval.a_expr)->constraints = (yyvsp[(4) - (4)].a_constr);
	;}
    break;

  case 67:
#line 852 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = (yyvsp[(1) - (1)].a_ref);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_TYPEREF;
	;}
    break;

  case 68:
#line 862 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = (yyvsp[(1) - (4)].a_ref);
		(yyval.a_expr)->rhs_pspecs = (yyvsp[(3) - (4)].a_expr);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_TYPEREF;
	;}
    break;

  case 69:
#line 882 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(3) - (3)].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		assert((yyval.a_expr)->expr_type);
		assert((yyval.a_expr)->meta_type);
	;}
    break;

  case 70:
#line 888 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(3) - (3)].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		assert((yyval.a_expr)->expr_type == A1TC_CLASSDEF);
		assert((yyval.a_expr)->meta_type == AMT_OBJECTCLASS);
	;}
    break;

  case 71:
#line 904 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(6) - (6)].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (6)].tv_str);
		(yyval.a_expr)->lhs_params = (yyvsp[(3) - (6)].a_plist);
	;}
    break;

  case 72:
#line 910 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(6) - (6)].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (6)].tv_str);
		(yyval.a_expr)->lhs_params = (yyvsp[(3) - (6)].a_plist);
	;}
    break;

  case 73:
#line 918 "asn1p_y.y"
    {
		int ret;
		(yyval.a_plist) = asn1p_paramlist_new(yylineno);
		checkmem((yyval.a_plist));
		ret = asn1p_paramlist_add_param((yyval.a_plist), (yyvsp[(1) - (1)].a_parg).governor, (yyvsp[(1) - (1)].a_parg).argument);
		checkmem(ret == 0);
		asn1p_ref_free((yyvsp[(1) - (1)].a_parg).governor);
		free((yyvsp[(1) - (1)].a_parg).argument);
	;}
    break;

  case 74:
#line 927 "asn1p_y.y"
    {
		int ret;
		(yyval.a_plist) = (yyvsp[(1) - (3)].a_plist);
		ret = asn1p_paramlist_add_param((yyval.a_plist), (yyvsp[(3) - (3)].a_parg).governor, (yyvsp[(3) - (3)].a_parg).argument);
		checkmem(ret == 0);
		asn1p_ref_free((yyvsp[(3) - (3)].a_parg).governor);
		free((yyvsp[(3) - (3)].a_parg).argument);
	;}
    break;

  case 75:
#line 938 "asn1p_y.y"
    {
		(yyval.a_parg).governor = NULL;
		(yyval.a_parg).argument = (yyvsp[(1) - (1)].tv_str);
	;}
    break;

  case 76:
#line 942 "asn1p_y.y"
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor, (yyvsp[(1) - (3)].tv_str), 0);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[(3) - (3)].tv_str);
		free((yyvsp[(1) - (3)].tv_str));
	;}
    break;

  case 77:
#line 950 "asn1p_y.y"
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor, (yyvsp[(1) - (3)].tv_str), 0);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[(3) - (3)].tv_str);
		free((yyvsp[(1) - (3)].tv_str));
	;}
    break;

  case 78:
#line 958 "asn1p_y.y"
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor,
			ASN_EXPR_TYPE2STR((yyvsp[(1) - (3)].a_type)), 1);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[(3) - (3)].tv_str);
	;}
    break;

  case 79:
#line 966 "asn1p_y.y"
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor,
			ASN_EXPR_TYPE2STR((yyvsp[(1) - (3)].a_type)), 1);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[(3) - (3)].tv_str);
	;}
    break;

  case 80:
#line 977 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 81:
#line 982 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (3)].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(3) - (3)].a_expr));
	;}
    break;

  case 83:
#line 990 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("?");
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[(1) - (1)].a_value);
	;}
    break;

  case 84:
#line 998 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("?");
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[(1) - (1)].a_value);
	;}
    break;

  case 85:
#line 1006 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->expr_type = A1TC_VALUESET;
		(yyval.a_expr)->meta_type = AMT_VALUESET;
		(yyval.a_expr)->constraints = (yyvsp[(1) - (1)].a_constr);
	;}
    break;

  case 86:
#line 1029 "asn1p_y.y"
    { (yyval.a_expr) = NEW_EXPR(); ;}
    break;

  case 87:
#line 1030 "asn1p_y.y"
    { (yyval.a_expr) = (yyvsp[(1) - (1)].a_expr); ;}
    break;

  case 88:
#line 1033 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 89:
#line 1038 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (3)].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(3) - (3)].a_expr));
	;}
    break;

  case 90:
#line 1042 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (5)].a_expr);
		asn1p_expr_add_many((yyval.a_expr), (yyvsp[(4) - (5)].a_expr));
		asn1p_expr_free((yyvsp[(4) - (5)].a_expr));
	;}
    break;

  case 91:
#line 1050 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(2) - (3)].a_expr);
		assert((yyval.a_expr)->Identifier == 0);
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		(yyvsp[(3) - (3)].a_marker).flags |= (yyval.a_expr)->marker.flags;
		(yyval.a_expr)->marker = (yyvsp[(3) - (3)].a_marker);
	;}
    break;

  case 92:
#line 1057 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (2)].a_expr);
		(yyvsp[(2) - (2)].a_marker).flags |= (yyval.a_expr)->marker.flags;
		(yyval.a_expr)->marker = (yyvsp[(2) - (2)].a_marker);
		_fixup_anonymous_identifier((yyval.a_expr));
	;}
    break;

  case 93:
#line 1063 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->meta_type = (yyvsp[(3) - (3)].a_expr)->meta_type;
		(yyval.a_expr)->expr_type = A1TC_COMPONENTS_OF;
		asn1p_expr_add((yyval.a_expr), (yyvsp[(3) - (3)].a_expr));
	;}
    break;

  case 94:
#line 1070 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (1)].a_expr);
	;}
    break;

  case 95:
#line 1076 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 96:
#line 1081 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (3)].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(3) - (3)].a_expr));
	;}
    break;

  case 97:
#line 1088 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(2) - (2)].a_expr);
		assert((yyval.a_expr)->Identifier == 0);
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (2)].tv_str);
	;}
    break;

  case 98:
#line 1093 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (1)].a_expr);
	;}
    break;

  case 99:
#line 1096 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (1)].a_expr);
		_fixup_anonymous_identifier((yyval.a_expr));
	;}
    break;

  case 100:
#line 1103 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(3) - (5)].a_expr);
		checkmem((yyval.a_expr));
		(yyval.a_expr)->with_syntax = (yyvsp[(5) - (5)].a_wsynt);
		assert((yyval.a_expr)->expr_type == A1TC_CLASSDEF);
		assert((yyval.a_expr)->meta_type == AMT_OBJECTCLASS);
	;}
    break;

  case 101:
#line 1113 "asn1p_y.y"
    { (yyval.a_int) = 0; ;}
    break;

  case 102:
#line 1114 "asn1p_y.y"
    { (yyval.a_int) = 1; ;}
    break;

  case 103:
#line 1118 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_CLASSDEF;
		(yyval.a_expr)->meta_type = AMT_OBJECTCLASS;
		asn1p_expr_add((yyval.a_expr), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 104:
#line 1125 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (3)].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(3) - (3)].a_expr));
	;}
    break;

  case 105:
#line 1135 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (2)].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_TFS;	/* TypeFieldSpec */
		(yyval.a_expr)->marker = (yyvsp[(2) - (2)].a_marker);
	;}
    break;

  case 106:
#line 1145 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_FTVFS;	/* FixedTypeValueFieldSpec */
		(yyval.a_expr)->unique = (yyvsp[(3) - (4)].a_int);
		(yyval.a_expr)->marker = (yyvsp[(4) - (4)].a_marker);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(2) - (4)].a_expr));
	;}
    break;

  case 107:
#line 1156 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_VTVFS;
		(yyval.a_expr)->reference = (yyvsp[(2) - (3)].a_ref);
		(yyval.a_expr)->marker = (yyvsp[(3) - (3)].a_marker);
	;}
    break;

  case 108:
#line 1166 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		(yyval.a_expr)->reference = (yyvsp[(2) - (3)].a_ref);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_OFS;
		(yyval.a_expr)->marker = (yyvsp[(3) - (3)].a_marker);
	;}
    break;

  case 109:
#line 1177 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_VTVSFS;
		(yyval.a_expr)->reference = (yyvsp[(2) - (3)].a_ref);
		(yyval.a_expr)->marker = (yyvsp[(3) - (3)].a_marker);
	;}
    break;

  case 110:
#line 1187 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_FTVSFS;
		asn1p_expr_add((yyval.a_expr), (yyvsp[(2) - (3)].a_expr));
		(yyval.a_expr)->marker = (yyvsp[(3) - (3)].a_marker);
	;}
    break;

  case 111:
#line 1198 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (3)].tv_str);
		(yyval.a_expr)->reference = (yyvsp[(2) - (3)].a_ref);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_OSFS;
		(yyval.a_expr)->marker = (yyvsp[(3) - (3)].a_marker);
	;}
    break;

  case 112:
#line 1210 "asn1p_y.y"
    { (yyval.a_wsynt) = 0; ;}
    break;

  case 113:
#line 1211 "asn1p_y.y"
    {
		(yyval.a_wsynt) = (yyvsp[(1) - (1)].a_wsynt);
	;}
    break;

  case 114:
#line 1218 "asn1p_y.y"
    { asn1p_lexer_hack_enable_with_syntax(); ;}
    break;

  case 115:
#line 1220 "asn1p_y.y"
    {
		(yyval.a_wsynt) = (yyvsp[(5) - (6)].a_wsynt);
	;}
    break;

  case 116:
#line 1226 "asn1p_y.y"
    {
		(yyval.a_wsynt) = asn1p_wsyntx_new();
		TQ_ADD(&((yyval.a_wsynt)->chunks), (yyvsp[(1) - (1)].a_wchunk), next);
	;}
    break;

  case 117:
#line 1230 "asn1p_y.y"
    {
		(yyval.a_wsynt) = (yyvsp[(1) - (2)].a_wsynt);
		TQ_ADD(&((yyval.a_wsynt)->chunks), (yyvsp[(2) - (2)].a_wchunk), next);
	;}
    break;

  case 118:
#line 1237 "asn1p_y.y"
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromstring((yyvsp[(1) - (1)].tv_opaque).buf, 0);
		(yyval.a_wchunk)->type = WC_WHITESPACE;
	;}
    break;

  case 119:
#line 1241 "asn1p_y.y"
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromstring((yyvsp[(1) - (1)].tv_str), 0);
	;}
    break;

  case 120:
#line 1244 "asn1p_y.y"
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromstring((yyvsp[(1) - (1)].a_refcomp).name, 0);
		(yyval.a_wchunk)->type = WC_FIELD;
	;}
    break;

  case 121:
#line 1248 "asn1p_y.y"
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromsyntax((yyvsp[(2) - (3)].a_wsynt));
	;}
    break;

  case 122:
#line 1254 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	;}
    break;

  case 123:
#line 1262 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->value = (yyvsp[(3) - (3)].a_value);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	;}
    break;

  case 124:
#line 1271 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		(yyval.a_expr)->value = (yyvsp[(3) - (3)].a_value);
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	;}
    break;

  case 126:
#line 1285 "asn1p_y.y"
    {
        (yyval.a_expr) = (yyvsp[(2) - (2)].a_expr);
        (yyval.a_expr)->tag = (yyvsp[(1) - (2)].a_tag);
    ;}
    break;

  case 127:
#line 1292 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (2)].a_expr);
		/*
		 * Outer constraint for SEQUENCE OF and SET OF applies
		 * to the inner type.
		 */
		if((yyval.a_expr)->expr_type == ASN_CONSTR_SEQUENCE_OF
		|| (yyval.a_expr)->expr_type == ASN_CONSTR_SET_OF) {
			assert(!TQ_FIRST(&((yyval.a_expr)->members))->constraints);
			TQ_FIRST(&((yyval.a_expr)->members))->constraints = (yyvsp[(2) - (2)].a_constr);
		} else {
			if((yyval.a_expr)->constraints) {
				assert(!(yyvsp[(2) - (2)].a_constr));
				/* Check this : optManyConstraints is not used ?! */
				asn1p_constraint_free((yyvsp[(2) - (2)].a_constr));
			} else {
				(yyval.a_expr)->constraints = (yyvsp[(2) - (2)].a_constr);
			}
		}
	;}
    break;

  case 128:
#line 1315 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (2)].a_expr);
		/*
		 * Outer constraint for SEQUENCE OF and SET OF applies
		 * to the inner type.
		 */
		if((yyval.a_expr)->expr_type == ASN_CONSTR_SEQUENCE_OF
		|| (yyval.a_expr)->expr_type == ASN_CONSTR_SET_OF) {
			assert(!TQ_FIRST(&((yyval.a_expr)->members))->constraints);
			TQ_FIRST(&((yyval.a_expr)->members))->constraints = (yyvsp[(2) - (2)].a_constr);
		} else {
			if((yyval.a_expr)->constraints) {
				assert(!(yyvsp[(2) - (2)].a_constr));
				/* Check this : optManyConstraints is not used ?! */
				asn1p_constraint_free((yyvsp[(2) - (2)].a_constr));
			} else {
				(yyval.a_expr)->constraints = (yyvsp[(2) - (2)].a_constr);
			}
		}
	;}
    break;

  case 129:
#line 1338 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(2) - (3)].a_expr);
		(yyval.a_expr)->tag = (yyvsp[(1) - (3)].a_tag);
		/*
		 * Outer constraint for SEQUENCE OF and SET OF applies
		 * to the inner type.
		 */
		if((yyval.a_expr)->expr_type == ASN_CONSTR_SEQUENCE_OF
		|| (yyval.a_expr)->expr_type == ASN_CONSTR_SET_OF) {
			assert(!TQ_FIRST(&((yyval.a_expr)->members))->constraints);
			TQ_FIRST(&((yyval.a_expr)->members))->constraints = (yyvsp[(3) - (3)].a_constr);
		} else {
			if((yyval.a_expr)->constraints) {
				assert(!(yyvsp[(2) - (3)].a_expr));
				/* Check this : optManyConstraints is not used ?! */
				asn1p_constraint_free((yyvsp[(3) - (3)].a_constr));
			} else {
				(yyval.a_expr)->constraints = (yyvsp[(3) - (3)].a_constr);
			}
		}
	;}
    break;

  case 130:
#line 1362 "asn1p_y.y"
    {
		(yyval.a_int) = asn1p_as_pointer ? EM_INDIRECT : 0;
		asn1p_as_pointer = 0;
	;}
    break;

  case 131:
#line 1369 "asn1p_y.y"
    {
        (yyval.a_expr) = (yyvsp[(2) - (2)].a_expr);
		(yyval.a_expr)->marker.flags |= (yyvsp[(1) - (2)].a_int);

		if(((yyval.a_expr)->marker.flags & EM_INDIRECT)
		&& ((yyval.a_expr)->marker.flags & EM_OPTIONAL) != EM_OPTIONAL) {
			fprintf(stderr,
				"INFO: Directive <ASN1C:RepresentAsPointer> "
				"applied to %s at %s:%d\n",
				ASN_EXPR_TYPE2STR((yyval.a_expr)->expr_type)
					?  ASN_EXPR_TYPE2STR((yyval.a_expr)->expr_type)
					: "member",
				ASN_FILENAME, (yyval.a_expr)->_lineno
			);
		}
    ;}
    break;

  case 135:
#line 1393 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(3) - (4)].a_expr);
		assert((yyval.a_expr)->expr_type == A1TC_INVALID);
		(yyval.a_expr)->expr_type = ASN_CONSTR_CHOICE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	;}
    break;

  case 136:
#line 1399 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(3) - (4)].a_expr);
		assert((yyval.a_expr)->expr_type == A1TC_INVALID);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SEQUENCE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	;}
    break;

  case 137:
#line 1405 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(3) - (4)].a_expr);
		assert((yyval.a_expr)->expr_type == A1TC_INVALID);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SET;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	;}
    break;

  case 138:
#line 1411 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->constraints = (yyvsp[(2) - (6)].a_constr);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SEQUENCE_OF;
		(yyval.a_expr)->meta_type = AMT_TYPE;
		(yyvsp[(6) - (6)].a_expr)->Identifier = (yyvsp[(4) - (6)].tv_str);
		(yyvsp[(6) - (6)].a_expr)->tag = (yyvsp[(5) - (6)].a_tag);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(6) - (6)].a_expr));
	;}
    break;

  case 139:
#line 1421 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->constraints = (yyvsp[(2) - (6)].a_constr);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SET_OF;
		(yyval.a_expr)->meta_type = AMT_TYPE;
		(yyvsp[(6) - (6)].a_expr)->Identifier = (yyvsp[(4) - (6)].tv_str);
		(yyvsp[(6) - (6)].a_expr)->tag = (yyvsp[(5) - (6)].a_tag);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(6) - (6)].a_expr));
	;}
    break;

  case 140:
#line 1431 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = ASN_TYPE_ANY;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	;}
    break;

  case 141:
#line 1437 "asn1p_y.y"
    {
		int ret;
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_expr)->reference,
			(yyvsp[(4) - (4)].tv_str), RLT_lowercase);
		checkmem(ret == 0);
		(yyval.a_expr)->expr_type = ASN_TYPE_ANY;
		(yyval.a_expr)->meta_type = AMT_TYPE;
		free((yyvsp[(4) - (4)].tv_str));
	;}
    break;

  case 142:
#line 1449 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = (yyvsp[(3) - (3)].a_ref);
		(yyval.a_expr)->expr_type = A1TC_INSTANCE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	;}
    break;

  case 143:
#line 1464 "asn1p_y.y"
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[(1) - (1)].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		free((yyvsp[(1) - (1)].tv_str));
	;}
    break;

  case 144:
#line 1472 "asn1p_y.y"
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[(1) - (1)].tv_str), RLT_CAPITALS);
		free((yyvsp[(1) - (1)].tv_str));
		checkmem(ret == 0);
	;}
    break;

  case 145:
#line 1480 "asn1p_y.y"
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[(1) - (3)].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[(3) - (3)].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		free((yyvsp[(1) - (3)].tv_str));
		free((yyvsp[(3) - (3)].tv_str));
	;}
    break;

  case 146:
#line 1491 "asn1p_y.y"
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[(1) - (3)].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[(3) - (3)].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		free((yyvsp[(1) - (3)].tv_str));
		free((yyvsp[(3) - (3)].tv_str));
	;}
    break;

  case 147:
#line 1502 "asn1p_y.y"
    {
		int ret;
		(yyval.a_ref) = (yyvsp[(3) - (3)].a_ref);
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[(1) - (3)].tv_str), RLT_CAPITALS);
		free((yyvsp[(1) - (3)].tv_str));
		checkmem(ret == 0);
		/*
		 * Move the last element infront.
		 */
		{
			struct asn1p_ref_component_s tmp_comp;
			tmp_comp = (yyval.a_ref)->components[(yyval.a_ref)->comp_count-1];
			memmove(&(yyval.a_ref)->components[1],
				&(yyval.a_ref)->components[0],
				sizeof((yyval.a_ref)->components[0])
				* ((yyval.a_ref)->comp_count - 1));
			(yyval.a_ref)->components[0] = tmp_comp;
		}
	;}
    break;

  case 148:
#line 1524 "asn1p_y.y"
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[(1) - (1)].a_refcomp).name, (yyvsp[(1) - (1)].a_refcomp).lex_type);
		free((yyvsp[(1) - (1)].a_refcomp).name);
		checkmem(ret == 0);
	;}
    break;

  case 149:
#line 1532 "asn1p_y.y"
    {
		int ret;
		(yyval.a_ref) = (yyvsp[(1) - (3)].a_ref);
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[(3) - (3)].a_refcomp).name, (yyvsp[(3) - (3)].a_refcomp).lex_type);
		free((yyvsp[(3) - (3)].a_refcomp).name);
		checkmem(ret == 0);
	;}
    break;

  case 151:
#line 1545 "asn1p_y.y"
    {
		(yyval.a_refcomp).lex_type = RLT_AmpUppercase;
		(yyval.a_refcomp).name = (yyvsp[(1) - (1)].tv_str);
	;}
    break;

  case 152:
#line 1550 "asn1p_y.y"
    {
		(yyval.a_refcomp).lex_type = RLT_Amplowercase;
		(yyval.a_refcomp).name = (yyvsp[(1) - (1)].tv_str);
	;}
    break;

  case 153:
#line 1559 "asn1p_y.y"
    {
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[(1) - (1)].tv_str), RLT_AmpUppercase);
		free((yyvsp[(1) - (1)].tv_str));
	;}
    break;

  case 154:
#line 1564 "asn1p_y.y"
    {
		(yyval.a_ref) = (yyval.a_ref);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[(3) - (3)].tv_str), RLT_AmpUppercase);
		free((yyvsp[(3) - (3)].tv_str));
	;}
    break;

  case 155:
#line 1569 "asn1p_y.y"
    {
		(yyval.a_ref) = (yyval.a_ref);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[(3) - (3)].tv_str), RLT_Amplowercase);
		free((yyvsp[(3) - (3)].tv_str));
	;}
    break;

  case 156:
#line 1577 "asn1p_y.y"
    {
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[(1) - (1)].tv_str), RLT_CAPITALS);
		free((yyvsp[(1) - (1)].tv_str));
	;}
    break;

  case 157:
#line 1600 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(2) - (4)].a_expr);
		assert((yyval.a_expr)->Identifier == NULL);
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[(4) - (4)].a_value);
	;}
    break;

  case 160:
#line 1612 "asn1p_y.y"
    { asn1p_lexer_hack_push_opaque_state(); ;}
    break;

  case 161:
#line 1612 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_frombuf((yyvsp[(3) - (3)].tv_opaque).buf, (yyvsp[(3) - (3)].tv_opaque).len, 0);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_UNPARSED;
	;}
    break;

  case 162:
#line 1620 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromint(0);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_NULL;
	;}
    break;

  case 163:
#line 1625 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromint(0);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_FALSE;
	;}
    break;

  case 164:
#line 1630 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromint(1);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_TRUE;
	;}
    break;

  case 170:
#line 1643 "asn1p_y.y"
    {
		asn1p_ref_t *ref;
		int ret;
		ref = asn1p_ref_new(yylineno, currentModule);
		checkmem(ref);
		ret = asn1p_ref_add_component(ref, (yyvsp[(1) - (3)].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		ret = asn1p_ref_add_component(ref, (yyvsp[(3) - (3)].tv_str), RLT_lowercase);
		checkmem(ret == 0);
		(yyval.a_value) = asn1p_value_fromref(ref, 0);
		checkmem((yyval.a_value));
		free((yyvsp[(1) - (3)].tv_str));
		free((yyvsp[(3) - (3)].tv_str));
	;}
    break;

  case 171:
#line 1661 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_frombuf((yyvsp[(1) - (1)].tv_opaque).buf, (yyvsp[(1) - (1)].tv_opaque).len, 0);
		checkmem((yyval.a_value));
	;}
    break;

  case 172:
#line 1665 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[(1) - (1)].a_int));
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_TUPLE;
	;}
    break;

  case 173:
#line 1670 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[(1) - (1)].a_int));
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_QUADRUPLE;
	;}
    break;

  case 174:
#line 1678 "asn1p_y.y"
    {
		(yyval.tv_opaque).len = (yyvsp[(1) - (1)].tv_opaque).len + 1;
		(yyval.tv_opaque).buf = malloc(1 + (yyval.tv_opaque).len + 1);
		checkmem((yyval.tv_opaque).buf);
		(yyval.tv_opaque).buf[0] = '{';
		memcpy((yyval.tv_opaque).buf + 1, (yyvsp[(1) - (1)].tv_opaque).buf, (yyvsp[(1) - (1)].tv_opaque).len);
		(yyval.tv_opaque).buf[(yyval.tv_opaque).len] = '\0';
		free((yyvsp[(1) - (1)].tv_opaque).buf);
    ;}
    break;

  case 175:
#line 1687 "asn1p_y.y"
    {
		int newsize = (yyvsp[(1) - (2)].tv_opaque).len + (yyvsp[(2) - (2)].tv_opaque).len;
		char *p = malloc(newsize + 1);
		checkmem(p);
		memcpy(p         , (yyvsp[(1) - (2)].tv_opaque).buf, (yyvsp[(1) - (2)].tv_opaque).len);
		memcpy(p + (yyvsp[(1) - (2)].tv_opaque).len, (yyvsp[(2) - (2)].tv_opaque).buf, (yyvsp[(2) - (2)].tv_opaque).len);
		p[newsize] = '\0';
		free((yyvsp[(1) - (2)].tv_opaque).buf);
		free((yyvsp[(2) - (2)].tv_opaque).buf);
		(yyval.tv_opaque).buf = p;
		(yyval.tv_opaque).len = newsize;
	;}
    break;

  case 177:
#line 1703 "asn1p_y.y"
    {
        (yyval.tv_opaque).len = strlen((yyvsp[(1) - (1)].tv_str));
        (yyval.tv_opaque).buf = (yyvsp[(1) - (1)].tv_str);
    ;}
    break;

  case 178:
#line 1709 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_BOOLEAN; ;}
    break;

  case 179:
#line 1710 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_NULL; ;}
    break;

  case 180:
#line 1711 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_REAL; ;}
    break;

  case 181:
#line 1712 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_OCTET_STRING; ;}
    break;

  case 182:
#line 1713 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_OBJECT_IDENTIFIER; ;}
    break;

  case 183:
#line 1714 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_RELATIVE_OID; ;}
    break;

  case 184:
#line 1715 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_EXTERNAL; ;}
    break;

  case 185:
#line 1716 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_EMBEDDED_PDV; ;}
    break;

  case 186:
#line 1717 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_CHARACTER_STRING; ;}
    break;

  case 187:
#line 1718 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_UTCTime; ;}
    break;

  case 188:
#line 1719 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_GeneralizedTime; ;}
    break;

  case 191:
#line 1728 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_INTEGER; ;}
    break;

  case 192:
#line 1729 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_ENUMERATED; ;}
    break;

  case 193:
#line 1730 "asn1p_y.y"
    { (yyval.a_type) = ASN_BASIC_BIT_STRING; ;}
    break;

  case 194:
#line 1734 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = (yyvsp[(1) - (1)].a_type);
		(yyval.a_expr)->meta_type = AMT_TYPE;
	;}
    break;

  case 195:
#line 1740 "asn1p_y.y"
    {
        (yyval.a_expr) = (yyvsp[(3) - (4)].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_INTEGER;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    ;}
    break;

  case 196:
#line 1745 "asn1p_y.y"
    {
        (yyval.a_expr) = (yyvsp[(3) - (4)].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_ENUMERATED;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    ;}
    break;

  case 197:
#line 1750 "asn1p_y.y"
    {
        (yyval.a_expr) = (yyvsp[(4) - (5)].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_BIT_STRING;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    ;}
    break;

  case 198:
#line 1755 "asn1p_y.y"
    {
        (yyval.a_expr) = (yyvsp[(3) - (4)].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_BIT_STRING;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    ;}
    break;

  case 199:
#line 1760 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
        (yyval.a_expr)->expr_type = ASN_BASIC_BIT_STRING;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    ;}
    break;

  case 200:
#line 1769 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_BMPString; ;}
    break;

  case 201:
#line 1770 "asn1p_y.y"
    {
		(yyval.a_type) = ASN_STRING_GeneralString;
		fprintf(stderr, "WARNING: GeneralString is not fully supported\n");
	;}
    break;

  case 202:
#line 1774 "asn1p_y.y"
    {
		(yyval.a_type) = ASN_STRING_GraphicString;
		fprintf(stderr, "WARNING: GraphicString is not fully supported\n");
	;}
    break;

  case 203:
#line 1778 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_IA5String; ;}
    break;

  case 204:
#line 1779 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_ISO646String; ;}
    break;

  case 205:
#line 1780 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_NumericString; ;}
    break;

  case 206:
#line 1781 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_PrintableString; ;}
    break;

  case 207:
#line 1782 "asn1p_y.y"
    {
		(yyval.a_type) = ASN_STRING_T61String;
		fprintf(stderr, "WARNING: T61String is not fully supported\n");
	;}
    break;

  case 208:
#line 1786 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_TeletexString; ;}
    break;

  case 209:
#line 1787 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_UniversalString; ;}
    break;

  case 210:
#line 1788 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_UTF8String; ;}
    break;

  case 211:
#line 1789 "asn1p_y.y"
    {
		(yyval.a_type) = ASN_STRING_VideotexString;
		fprintf(stderr, "WARNING: VideotexString is not fully supported\n");
	;}
    break;

  case 212:
#line 1793 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_VisibleString; ;}
    break;

  case 213:
#line 1794 "asn1p_y.y"
    { (yyval.a_type) = ASN_STRING_ObjectDescriptor; ;}
    break;

  case 218:
#line 1806 "asn1p_y.y"
    { (yyval.a_constr) = 0; ;}
    break;

  case 220:
#line 1811 "asn1p_y.y"
    { (yyval.a_constr) = 0; ;}
    break;

  case 222:
#line 1816 "asn1p_y.y"
    { (yyval.a_constr) = 0; ;}
    break;

  case 225:
#line 1822 "asn1p_y.y"
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_SET, (yyvsp[(2) - (3)].a_constr), 0);
    ;}
    break;

  case 227:
#line 1829 "asn1p_y.y"
    {
        if((yyvsp[(2) - (2)].a_constr)->type == ACT_CA_SET && (yyvsp[(2) - (2)].a_constr)->el_count == 1) {
            CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_SET, (yyvsp[(1) - (2)].a_constr), (yyvsp[(2) - (2)].a_constr)->elements[0]);
        } else {
            CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_SET, (yyvsp[(1) - (2)].a_constr), (yyvsp[(2) - (2)].a_constr));
        }
	;}
    break;

  case 231:
#line 1843 "asn1p_y.y"
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_EL_EXT;
	;}
    break;

  case 233:
#line 1848 "asn1p_y.y"
    {
       asn1p_constraint_t *ct;
       ct = asn1p_constraint_new(yylineno, currentModule);
       ct->type = ACT_EL_EXT;
       CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, (yyvsp[(1) - (3)].a_constr), ct);
   ;}
    break;

  case 234:
#line 1854 "asn1p_y.y"
    {
       asn1p_constraint_t *ct;
       ct = asn1p_constraint_new(yylineno, currentModule);
       ct->type = ACT_EL_EXT;
       CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, (yyvsp[(1) - (5)].a_constr), ct);
       ct = (yyval.a_constr);
       CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, ct, (yyvsp[(5) - (5)].a_constr));
   ;}
    break;

  case 236:
#line 1866 "asn1p_y.y"
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_AEX, (yyvsp[(3) - (3)].a_constr), 0);
	;}
    break;

  case 238:
#line 1873 "asn1p_y.y"
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_UNI, (yyvsp[(1) - (3)].a_constr), (yyvsp[(3) - (3)].a_constr));
	;}
    break;

  case 240:
#line 1880 "asn1p_y.y"
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_INT, (yyvsp[(1) - (3)].a_constr), (yyvsp[(3) - (3)].a_constr));
	;}
    break;

  case 242:
#line 1888 "asn1p_y.y"
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_EXC, (yyvsp[(1) - (3)].a_constr), (yyvsp[(3) - (3)].a_constr));
	;}
    break;

  case 244:
#line 1895 "asn1p_y.y"
    {
        int ret;
        (yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        checkmem((yyval.a_constr));
        (yyval.a_constr)->type = ACT_CA_SET;
        ret = asn1p_constraint_insert((yyval.a_constr), (yyvsp[(2) - (3)].a_constr));
        checkmem(ret == 0);
    ;}
    break;

  case 245:
#line 1906 "asn1p_y.y"
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_EL_VALUE;
		(yyval.a_constr)->value = (yyvsp[(1) - (1)].a_value);
	;}
    break;

  case 246:
#line 1912 "asn1p_y.y"
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_EL_TYPE;
		(yyval.a_constr)->containedSubtype = (yyvsp[(1) - (1)].a_value);
	;}
    break;

  case 252:
#line 1928 "asn1p_y.y"
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CT_FROM, (yyvsp[(2) - (2)].a_constr), 0);
	;}
    break;

  case 253:
#line 1933 "asn1p_y.y"
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CT_SIZE, (yyvsp[(2) - (2)].a_constr), 0);
	;}
    break;

  case 254:
#line 1938 "asn1p_y.y"
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_CT_PATTERN;
		(yyval.a_constr)->value = asn1p_value_frombuf((yyvsp[(2) - (2)].tv_opaque).buf, (yyvsp[(2) - (2)].tv_opaque).len, 0);
	;}
    break;

  case 255:
#line 1943 "asn1p_y.y"
    {
		asn1p_ref_t *ref;
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_CT_PATTERN;
		ref = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component(ref, (yyvsp[(2) - (2)].tv_str), RLT_lowercase);
		(yyval.a_constr)->value = asn1p_value_fromref(ref, 0);
		free((yyvsp[(2) - (2)].tv_str));
	;}
    break;

  case 256:
#line 1955 "asn1p_y.y"
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = (yyvsp[(2) - (3)].a_ctype);
		(yyval.a_constr)->range_start = (yyvsp[(1) - (3)].a_value);
		(yyval.a_constr)->range_stop = (yyvsp[(3) - (3)].a_value);
    ;}
    break;

  case 258:
#line 1965 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromint(-123);
		(yyval.a_value)->type = ATV_MIN;
    ;}
    break;

  case 260:
#line 1972 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromint(321);
		(yyval.a_value)->type = ATV_MAX;
    ;}
    break;

  case 262:
#line 1980 "asn1p_y.y"
    {
		(yyval.a_value) = _convert_bitstring2binary((yyvsp[(1) - (1)].tv_str), 'B');
		checkmem((yyval.a_value));
		free((yyvsp[(1) - (1)].tv_str));
	;}
    break;

  case 263:
#line 1985 "asn1p_y.y"
    {
		(yyval.a_value) = _convert_bitstring2binary((yyvsp[(1) - (1)].tv_str), 'H');
		checkmem((yyval.a_value));
		free((yyvsp[(1) - (1)].tv_str));
	;}
    break;

  case 264:
#line 1993 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromtype((yyvsp[(2) - (2)].a_expr));
		checkmem((yyval.a_value));
		asn1p_expr_free((yyvsp[(2) - (2)].a_expr));
    ;}
    break;

  case 265:
#line 1999 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromtype((yyvsp[(1) - (1)].a_expr));
		checkmem((yyval.a_value));
		asn1p_expr_free((yyvsp[(1) - (1)].a_expr));
    ;}
    break;

  case 266:
#line 2011 "asn1p_y.y"
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CT_WCOMP, (yyvsp[(3) - (3)].a_constr), 0);
	;}
    break;

  case 267:
#line 2014 "asn1p_y.y"
    {
        assert((yyvsp[(3) - (3)].a_constr)->type == ACT_CA_CSV);
        (yyvsp[(3) - (3)].a_constr)->type = ACT_CT_WCOMPS;
        (yyval.a_constr) = (yyvsp[(3) - (3)].a_constr);
	;}
    break;

  case 271:
#line 2022 "asn1p_y.y"
    { (yyval.a_constr) = (yyvsp[(2) - (3)].a_constr); ;}
    break;

  case 272:
#line 2024 "asn1p_y.y"
    {
        assert((yyvsp[(4) - (5)].a_constr)->type == ACT_CA_CSV);
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        (yyval.a_constr)->type = ACT_CA_CSV;
		asn1p_constraint_t *ct = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		ct->type = ACT_EL_EXT;
        asn1p_constraint_insert((yyval.a_constr), ct);
        for(unsigned i = 0; i < (yyvsp[(4) - (5)].a_constr)->el_count; i++) {
            asn1p_constraint_insert((yyval.a_constr), (yyvsp[(4) - (5)].a_constr)->elements[i]);
        }
    ;}
    break;

  case 273:
#line 2037 "asn1p_y.y"
    {
        (yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        (yyval.a_constr)->type = ACT_CA_CSV;
        asn1p_constraint_insert((yyval.a_constr), (yyvsp[(1) - (1)].a_constr));
    ;}
    break;

  case 274:
#line 2042 "asn1p_y.y"
    {
        (yyval.a_constr) = (yyvsp[(1) - (3)].a_constr);
        asn1p_constraint_insert((yyval.a_constr), (yyvsp[(3) - (3)].a_constr));
	;}
    break;

  case 275:
#line 2048 "asn1p_y.y"
    {
        (yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        checkmem((yyval.a_constr));
        (yyval.a_constr)->type = ACT_EL_VALUE;
        (yyval.a_constr)->value = (yyvsp[(1) - (3)].a_value);
        if((yyvsp[(2) - (3)].a_constr)) asn1p_constraint_insert((yyval.a_constr), (yyvsp[(2) - (3)].a_constr));
        (yyval.a_constr)->presence = (yyvsp[(3) - (3)].a_pres);
    ;}
    break;

  case 276:
#line 2062 "asn1p_y.y"
    { (yyval.a_pres) = ACPRES_DEFAULT; ;}
    break;

  case 277:
#line 2063 "asn1p_y.y"
    { (yyval.a_pres) = (yyvsp[(1) - (1)].a_pres); ;}
    break;

  case 278:
#line 2067 "asn1p_y.y"
    {
		(yyval.a_pres) = ACPRES_PRESENT;
	;}
    break;

  case 279:
#line 2070 "asn1p_y.y"
    {
		(yyval.a_pres) = ACPRES_ABSENT;
	;}
    break;

  case 280:
#line 2073 "asn1p_y.y"
    {
		(yyval.a_pres) = ACPRES_OPTIONAL;
	;}
    break;

  case 284:
#line 2088 "asn1p_y.y"
    { asn1p_lexer_hack_push_opaque_state(); ;}
    break;

  case 285:
#line 2088 "asn1p_y.y"
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_CT_CTDBY;
		(yyval.a_constr)->value = asn1p_value_frombuf((yyvsp[(5) - (5)].tv_opaque).buf, (yyvsp[(5) - (5)].tv_opaque).len, 0);
		checkmem((yyval.a_constr)->value);
		(yyval.a_constr)->value->type = ATV_UNPARSED;
	;}
    break;

  case 286:
#line 2099 "asn1p_y.y"
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_CT_CTNG;
		(yyval.a_constr)->value = asn1p_value_fromtype((yyvsp[(2) - (2)].a_expr));
		asn1p_expr_free((yyvsp[(2) - (2)].a_expr));
	;}
    break;

  case 287:
#line 2108 "asn1p_y.y"
    { (yyval.a_ctype) = ACT_EL_RANGE; ;}
    break;

  case 288:
#line 2109 "asn1p_y.y"
    { (yyval.a_ctype) = ACT_EL_RLRANGE; ;}
    break;

  case 289:
#line 2110 "asn1p_y.y"
    { (yyval.a_ctype) = ACT_EL_LLRANGE; ;}
    break;

  case 290:
#line 2111 "asn1p_y.y"
    { (yyval.a_ctype) = ACT_EL_ULRANGE; ;}
    break;

  case 291:
#line 2114 "asn1p_y.y"
    {
		(yyval.a_constr) = (yyvsp[(1) - (1)].a_constr);
	;}
    break;

  case 292:
#line 2117 "asn1p_y.y"
    {
		(yyval.a_constr) = (yyvsp[(1) - (1)].a_constr);
	;}
    break;

  case 293:
#line 2126 "asn1p_y.y"
    {
		asn1p_ref_t *ref = asn1p_ref_new(yylineno, currentModule);
		asn1p_constraint_t *ct;
		int ret;
		ret = asn1p_ref_add_component(ref, (yyvsp[(2) - (3)].tv_str), 0);
		checkmem(ret == 0);
		ct = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		ct->type = ACT_EL_VALUE;
		ct->value = asn1p_value_fromref(ref, 0);
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CRC, ct, 0);
		free((yyvsp[(2) - (3)].tv_str));
	;}
    break;

  case 294:
#line 2142 "asn1p_y.y"
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CRC, (yyvsp[(1) - (4)].a_constr), (yyvsp[(3) - (4)].a_constr));
	;}
    break;

  case 295:
#line 2148 "asn1p_y.y"
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_EL_VALUE;
		(yyval.a_constr)->value = asn1p_value_fromref((yyvsp[(1) - (1)].a_ref), 0);
	;}
    break;

  case 296:
#line 2154 "asn1p_y.y"
    {
		asn1p_constraint_t *ct;
		ct = asn1p_constraint_new(yylineno, currentModule);
		checkmem(ct);
		ct->type = ACT_EL_VALUE;
		ct->value = asn1p_value_fromref((yyvsp[(3) - (3)].a_ref), 0);
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, (yyvsp[(1) - (3)].a_constr), ct);
	;}
    break;

  case 297:
#line 2168 "asn1p_y.y"
    {
		char *p = malloc(strlen((yyvsp[(2) - (2)].tv_str)) + 2);
		int ret;
		*p = '@';
		strcpy(p + 1, (yyvsp[(2) - (2)].tv_str));
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_ref), p, 0);
		checkmem(ret == 0);
		free(p);
		free((yyvsp[(2) - (2)].tv_str));
	;}
    break;

  case 298:
#line 2179 "asn1p_y.y"
    {
		char *p = malloc(strlen((yyvsp[(3) - (3)].tv_str)) + 3);
		int ret;
		p[0] = '@';
		p[1] = '.';
		strcpy(p + 2, (yyvsp[(3) - (3)].tv_str));
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_ref), p, 0);
		checkmem(ret == 0);
		free(p);
		free((yyvsp[(3) - (3)].tv_str));
	;}
    break;

  case 299:
#line 2195 "asn1p_y.y"
    {
		(yyval.tv_str) = (yyvsp[(1) - (1)].tv_str);
	;}
    break;

  case 300:
#line 2198 "asn1p_y.y"
    {
		int l1 = strlen((yyvsp[(1) - (3)].tv_str));
		int l3 = strlen((yyvsp[(3) - (3)].tv_str));
		(yyval.tv_str) = malloc(l1 + 1 + l3 + 1);
		memcpy((yyval.tv_str), (yyvsp[(1) - (3)].tv_str), l1);
		(yyval.tv_str)[l1] = '.';
		memcpy((yyval.tv_str) + l1 + 1, (yyvsp[(3) - (3)].tv_str), l3);
		(yyval.tv_str)[l1 + 1 + l3] = '\0';
		free((yyvsp[(1) - (3)].tv_str));
		free((yyvsp[(3) - (3)].tv_str));
	;}
    break;

  case 301:
#line 2218 "asn1p_y.y"
    {
		(yyval.a_marker).flags = EM_NOMARK;
		(yyval.a_marker).default_value = 0;
	;}
    break;

  case 302:
#line 2222 "asn1p_y.y"
    { (yyval.a_marker) = (yyvsp[(1) - (1)].a_marker); ;}
    break;

  case 303:
#line 2226 "asn1p_y.y"
    {
		(yyval.a_marker).flags = EM_OPTIONAL | EM_INDIRECT;
		(yyval.a_marker).default_value = 0;
	;}
    break;

  case 304:
#line 2230 "asn1p_y.y"
    {
		(yyval.a_marker).flags = EM_DEFAULT;
		(yyval.a_marker).default_value = (yyvsp[(2) - (2)].a_value);
	;}
    break;

  case 305:
#line 2237 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[(1) - (1)].a_expr));
    ;}
    break;

  case 306:
#line 2242 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (3)].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(3) - (3)].a_expr));
    ;}
    break;

  case 307:
#line 2248 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (1)].tv_str);
    ;}
    break;

  case 308:
#line 2257 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 309:
#line 2262 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (3)].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(3) - (3)].a_expr));
	;}
    break;

  case 310:
#line 2269 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_expr)->value = (yyvsp[(3) - (4)].a_value);
	;}
    break;

  case 311:
#line 2277 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_expr)->value = (yyvsp[(3) - (4)].a_value);
	;}
    break;

  case 312:
#line 2287 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 313:
#line 2292 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (3)].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(3) - (3)].a_expr));
	;}
    break;

  case 314:
#line 2299 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_expr)->value = asn1p_value_fromint((yyvsp[(3) - (4)].a_int));
	;}
    break;

  case 315:
#line 2307 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_expr)->value = (yyvsp[(3) - (4)].a_value);
	;}
    break;

  case 316:
#line 2317 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (1)].a_expr);
        asn1p_expr_t *first_memb = TQ_FIRST(&((yyval.a_expr)->members));
        if(first_memb) {
            if(first_memb->expr_type == A1TC_EXTENSIBLE) {
                return yyerror(
                    "The ENUMERATION cannot start with extension (...).");
            }
        } else {
            return yyerror(
                "The ENUMERATION list cannot be empty.");
        }
    ;}
    break;

  case 317:
#line 2332 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[(1) - (1)].a_expr));
	;}
    break;

  case 318:
#line 2337 "asn1p_y.y"
    {
		(yyval.a_expr) = (yyvsp[(1) - (3)].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[(3) - (3)].a_expr));
	;}
    break;

  case 319:
#line 2344 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (1)].tv_str);
	;}
    break;

  case 320:
#line 2351 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_expr)->value = (yyvsp[(3) - (4)].a_value);
	;}
    break;

  case 321:
#line 2359 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[(1) - (4)].tv_str);
		(yyval.a_expr)->value = (yyvsp[(3) - (4)].a_value);
	;}
    break;

  case 322:
#line 2367 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[(1) - (1)].a_value);
	;}
    break;

  case 323:
#line 2374 "asn1p_y.y"
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_VALUE;
	;}
    break;

  case 324:
#line 2385 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[(1) - (1)].a_int));
		checkmem((yyval.a_value));
	;}
    break;

  case 325:
#line 2389 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[(1) - (1)].a_int));
		checkmem((yyval.a_value));
	;}
    break;

  case 326:
#line 2396 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromdouble((yyvsp[(1) - (1)].a_dbl));
		checkmem((yyval.a_value));
	;}
    break;

  case 327:
#line 2427 "asn1p_y.y"
    { memset(&(yyval.a_tag), 0, sizeof((yyval.a_tag))); ;}
    break;

  case 328:
#line 2428 "asn1p_y.y"
    { (yyval.a_tag) = (yyvsp[(1) - (1)].a_tag); ;}
    break;

  case 329:
#line 2432 "asn1p_y.y"
    {
		(yyval.a_tag) = (yyvsp[(1) - (2)].a_tag);
		(yyval.a_tag).tag_mode = (yyvsp[(2) - (2)].a_tag).tag_mode;
	;}
    break;

  case 330:
#line 2439 "asn1p_y.y"
    {
		(yyval.a_tag) = (yyvsp[(2) - (4)].a_tag);
		(yyval.a_tag).tag_value = (yyvsp[(3) - (4)].a_int);
	;}
    break;

  case 331:
#line 2445 "asn1p_y.y"
    { (yyval.a_tag).tag_class = TC_CONTEXT_SPECIFIC; ;}
    break;

  case 332:
#line 2446 "asn1p_y.y"
    { (yyval.a_tag).tag_class = TC_UNIVERSAL; ;}
    break;

  case 333:
#line 2447 "asn1p_y.y"
    { (yyval.a_tag).tag_class = TC_APPLICATION; ;}
    break;

  case 334:
#line 2448 "asn1p_y.y"
    { (yyval.a_tag).tag_class = TC_PRIVATE; ;}
    break;

  case 335:
#line 2452 "asn1p_y.y"
    { (yyval.a_tag).tag_mode = TM_DEFAULT; ;}
    break;

  case 336:
#line 2453 "asn1p_y.y"
    { (yyval.a_tag).tag_mode = TM_IMPLICIT; ;}
    break;

  case 337:
#line 2454 "asn1p_y.y"
    { (yyval.a_tag).tag_mode = TM_EXPLICIT; ;}
    break;

  case 338:
#line 2458 "asn1p_y.y"
    {
		checkmem((yyvsp[(1) - (1)].tv_str));
		(yyval.tv_str) = (yyvsp[(1) - (1)].tv_str);
	;}
    break;

  case 339:
#line 2462 "asn1p_y.y"
    {
		checkmem((yyvsp[(1) - (1)].tv_str));
		(yyval.tv_str) = (yyvsp[(1) - (1)].tv_str);
	;}
    break;

  case 340:
#line 2470 "asn1p_y.y"
    { (yyval.tv_str) = 0; ;}
    break;

  case 341:
#line 2471 "asn1p_y.y"
    {
		(yyval.tv_str) = (yyvsp[(1) - (1)].tv_str);
	;}
    break;

  case 342:
#line 2477 "asn1p_y.y"
    {
		checkmem((yyvsp[(1) - (1)].tv_str));
		(yyval.tv_str) = (yyvsp[(1) - (1)].tv_str);
	;}
    break;

  case 343:
#line 2484 "asn1p_y.y"
    {
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[(1) - (1)].tv_str), RLT_lowercase);
		free((yyvsp[(1) - (1)].tv_str));
    ;}
    break;

  case 344:
#line 2491 "asn1p_y.y"
    {
		(yyval.a_value) = asn1p_value_fromref((yyvsp[(1) - (1)].a_ref), 0);
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4983 "asn1p_y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 2495 "asn1p_y.y"



/*
 * Convert Xstring ('0101'B or '5'H) to the binary vector.
 */
static asn1p_value_t *
_convert_bitstring2binary(char *str, int base) {
	asn1p_value_t *val;
	int slen;
	int memlen;
	int baselen;
	int bits;
	uint8_t *binary_vector;
	uint8_t *bv_ptr;
	uint8_t cur_val;

	assert(str);
	assert(str[0] == '\'');

	switch(base) {
	case 'B':
		baselen = 1;
		break;
	case 'H':
		baselen = 4;
		break;
	default:
		assert(base == 'B' || base == 'H');
		errno = EINVAL;
		return NULL;
	}

	slen = strlen(str);
	assert(str[slen - 1] == base);
	assert(str[slen - 2] == '\'');

	memlen = slen / (8 / baselen);	/* Conservative estimate */

	bv_ptr = binary_vector = malloc(memlen + 1);
	if(bv_ptr == NULL)
		/* ENOMEM */
		return NULL;

	cur_val = 0;
	bits = 0;
	while(*(++str) != '\'') {
		switch(baselen) {
		case 1:
			switch(*str) {
			case '1':
				cur_val |= 1 << (7 - (bits % 8));
			case '0':
				break;
			default:
				assert(!"_y UNREACH1");
			case ' ': case '\r': case '\n':
				continue;
			}
			break;
		case 4:
			switch(*str) {
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				cur_val |= (*str - '0') << (4 - (bits % 8));
				break;
			case 'A': case 'B': case 'C':
			case 'D': case 'E': case 'F':
				cur_val |= ((*str - 'A') + 10)
					<< (4 - (bits % 8));
				break;
			default:
				assert(!"_y UNREACH2");
			case ' ': case '\r': case '\n':
				continue;
			}
			break;
		}

		bits += baselen;
		if((bits % 8) == 0) {
			*bv_ptr++ = cur_val;
			cur_val = 0;
		}
	}

	*bv_ptr = cur_val;
	assert((bv_ptr - binary_vector) <= memlen);

	val = asn1p_value_frombits(binary_vector, bits, 0);
	if(val == NULL) {
		free(binary_vector);
	}

	return val;
}

/*
 * For unnamed types (used in old X.208 compliant modules)
 * generate some sort of interim names, to not to force human being to fix
 * the specification's compliance to modern ASN.1 standards.
 */
static void
_fixup_anonymous_identifier(asn1p_expr_t *expr) {
	char *p;
	assert(expr->Identifier == 0);

	/*
	 * Try to figure out the type name
	 * without going too much into details
	 */
	expr->Identifier = ASN_EXPR_TYPE2STR(expr->expr_type);
	if(expr->reference && expr->reference->comp_count > 0)
		expr->Identifier = expr->reference->components[0].name;

	fprintf(stderr,
		"WARNING: Line %d: expected lower-case member identifier, "
		"found an unnamed %s.\n"
		"WARNING: Obsolete X.208 syntax detected, "
		"please give the member a name.\n",
		yylineno, expr->Identifier ? expr->Identifier : "type");

	if(!expr->Identifier)
		expr->Identifier = "unnamed";
	expr->Identifier = strdup(expr->Identifier);
	assert(expr->Identifier);
	/* Make a lowercase identifier from the type name */
	for(p = expr->Identifier; *p; p++) {
		switch(*p) {
		case 'A' ... 'Z': *p += 32; break;
		case ' ': *p = '_'; break;
		case '-': *p = '_'; break;
		}
	}
	fprintf(stderr, "NOTE: Assigning temporary identifier \"%s\". "
			"Name clash may occur later.\n",
		expr->Identifier);
}

static int
yyerror(const char *msg) {
	extern char *asn1p_text;
	fprintf(stderr,
		"ASN.1 grammar parse error "
		"near %s:%d (token \"%s\"): %s\n",
		ASN_FILENAME, yylineno, asn1p_text, msg);
	return -1;
}


