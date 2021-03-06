/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.ypp" /* yacc.c:339  */

	#include<bits/stdc++.h>
	#include "ast.h"
	extern FILE *yyin;
	extern char* yytext;
	extern "C" int yylex();
	extern int yyparse();
	void yyerror(const char *s);
	class Program* start=NULL;
	extern int errors;
	int errors=0;


#line 80 "parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    TYPE = 259,
    CLASS = 260,
    PROGRAM = 261,
    CHAR_TYPE = 262,
    BOOL_LIT = 263,
    INT_LIT = 264,
    INT = 265,
    BOOL = 266,
    NUM = 267,
    HEX = 268,
    STRING = 269,
    CHAR = 270,
    VOID = 271,
    IF = 272,
    ELSE = 273,
    FOR = 274,
    RETURN = 275,
    BREAK = 276,
    CONTINUE = 277,
    CALLOUT = 278,
    TRUE = 279,
    FALSE = 280,
    LE = 281,
    GE = 282,
    AE = 283,
    SE = 284,
    EQ = 285,
    NEQ = 286,
    AND = 287,
    OR = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.ypp" /* yacc.c:355  */

	int num;
	char *str;
	class Program *prog;
	class Field_decls *fldds;
	class Fields_decl *fldd;
	class Comma_sep_fields *c_s_fs;
	class Comma_sep_field *c_s_f;
	class Method_decls *m_ds;
	class Method_decl *m_d;
	class Type_plus_ids *t_p_ids;
	class Type_plus_id *t_p_id;
	class Block *blk;
	class Var_decls *v_ds;
	class Var_decl *v_d;
	class IDSS *id_ss;
	class IDS *id_s;
	class Statements *stmts;
	class Statement *stmt;
	class Assignment *asgnmt;
	class Method_call *mthd_call;
	class If_Else *if_else;
	class Iff *iff;
	class Fors *fors;
	class Return *retn;
	class Break *brk;
	class Continue *cntue;
	class Assign_op *asgn_op;
	class Func_call *func_call;
	class Call_out *call_out;
	class Callout_args_plus *C_a_p;
	class Callout_arg *C_a;
	class Location *loc;
	class Expr_plus *expr_p;
	class Expr *expr;
	class Literal *lit;
	class Int_literal *int_lit;
	class Bool_literal *bool_lit;
	class Char_literal *char_lit;
	class Unary_expr *un_expr;
	class Binary_expr *bin_expr;
	class Bracket_expr *brckt_expr;


#line 199 "parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 216 "parser.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,     2,     2,    40,     2,     2,
      48,    49,    38,    36,    43,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
      35,    33,    34,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   147,   147,   152,   156,   162,   168,   173,   179,   184,
     189,   194,   198,   203,   208,   213,   217,   221,   225,   230,
     235,   240,   246,   250,   254,   258,   263,   268,   273,   279,
     284,   291,   296,   301,   305,   309,   313,   317,   321,   325,
     329,   333,   337,   343,   347,   352,   356,   360,   365,   369,
     373,   377,   381,   385,   389,   393,   397,   401,   405,   409,
     413,   417,   421,   425,   429,   433,   437,   444,   448,   452,
     456,   463,   468,   474,   478,   483,   488,   495,   500,   504,
     509
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "TYPE", "CLASS", "PROGRAM",
  "CHAR_TYPE", "BOOL_LIT", "INT_LIT", "INT", "BOOL", "NUM", "HEX",
  "STRING", "CHAR", "VOID", "IF", "ELSE", "FOR", "RETURN", "BREAK",
  "CONTINUE", "CALLOUT", "TRUE", "FALSE", "LE", "GE", "AE", "SE", "EQ",
  "NEQ", "'!'", "'='", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "AND", "OR", "','", "'{'", "'}'", "'['", "']'", "'('", "')'", "';'",
  "$accept", "program", "field_decls", "fields_decl", "comma_sep_fields",
  "comma_sep_field", "method_decls", "method_decl", "type_plus_ids",
  "type_plus_id", "block", "var_decls", "var_decl", "idss", "statements",
  "statement", "location", "assign_op", "expr", "method_call",
  "callout_arg_plus", "callout_arg", "expr_plus", "literal", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    33,    61,    62,    60,    43,    45,    42,    47,
      37,   287,   288,    44,   123,   125,    91,    93,    40,    41,
      59
};
# endif

#define YYPACT_NINF -54

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-54)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    38,    48,    31,   -54,    34,    86,    99,   -54,    36,
     -54,    37,   -54,   -24,   -13,   -54,    76,   -54,   -54,    69,
     106,   -54,   -54,   120,    -2,   131,   -54,     0,   -54,    90,
      92,   138,    98,    29,   -54,    97,   -54,    98,    41,   -54,
     -54,   144,   -54,   142,    98,   -54,    98,    82,   147,   103,
     149,    68,   107,   109,   105,   -54,   -54,   151,   -54,    12,
     -54,   -20,   119,   -54,   -54,   -54,   112,    71,   -54,    -4,
     112,   125,   -54,   -54,   -54,   -54,   112,   112,   112,   -54,
     -54,   171,   -54,   -54,   -54,   -54,   161,   -54,   -54,   159,
     -54,   -54,   -54,   -54,   -54,   112,   -54,   239,   -54,   294,
      61,   174,   -54,   205,   112,     1,   311,   222,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   -54,    63,   -54,   188,   -54,   112,   -54,   -54,    98,
     276,   -54,    57,    57,     1,     1,   330,   330,   311,   311,
     313,   313,   313,   -54,   -54,   108,   -54,    64,   -54,   294,
     165,   112,   -54,   294,   -54,   108,   -54,    98,   257,   -54,
     -54,   -54
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     3,     0,
       6,     0,    13,    11,     0,     9,     0,     4,     7,     0,
       0,     5,    14,     0,     0,     0,     8,     0,     2,     0,
       0,     0,     0,     0,    19,    11,    10,     0,     0,    12,
      21,     0,    16,     0,     0,    18,     0,    43,     0,     0,
       0,     0,     0,     0,     0,    25,    42,     0,    26,     0,
      31,     0,     0,    20,    15,    17,     0,     0,    29,     0,
       0,     0,    77,    78,    80,    79,     0,     0,     0,    39,
      48,     0,    49,    50,    40,    41,     0,    23,    27,     0,
      24,    32,    46,    47,    45,     0,    34,     0,    68,    75,
       0,     0,    28,     0,     0,    65,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    22,     0,    44,     0,    67,    30,     0,
       0,    66,    58,    59,    60,    61,    57,    56,    51,    52,
      53,    54,    55,    62,    63,     0,    70,     0,    33,    76,
      36,     0,    74,    73,    71,     0,    69,     0,     0,    72,
      35,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -54,   -54,   -54,   175,   -54,   160,   177,    -1,   163,   148,
     -32,   -54,   130,   -54,   135,   -53,   -38,   -54,   -50,   -34,
     -54,    39,   -54,   -54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    14,    15,    11,    12,    33,    34,
      56,    57,    58,    69,    59,    60,    80,    95,   153,    82,
     147,   154,   100,    83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      42,    81,    31,    61,    31,    45,    91,    62,    92,    93,
      22,     1,    64,    94,    65,    47,    97,    99,    22,    61,
     103,    61,    23,    62,    24,    62,   105,   106,   107,    49,
      25,    50,    51,    52,    53,    54,    91,    26,     6,   101,
       6,    20,   119,   120,     3,   124,   102,    32,     4,    37,
       7,    61,     7,     7,   130,    62,    41,    90,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,    47,    43,    20,    47,     5,   149,    72,    44,     8,
      72,    17,    21,    73,    43,     7,    73,   110,   111,    13,
      46,    54,    74,    75,    54,    74,    75,   150,   119,   120,
      76,   158,    16,    76,   126,    77,   145,   155,    77,    29,
     127,    47,   146,   156,    28,    47,    78,    72,    79,    78,
      98,    72,   152,    73,    27,   160,   161,    73,    66,    30,
      67,    54,    74,    75,    35,    54,    74,    75,    24,    39,
      76,    40,    41,    23,    76,    77,    31,    47,    48,    77,
      68,    70,    71,    86,    47,    48,    78,    84,   104,    85,
      78,    49,    47,    50,    51,    52,    53,    54,    49,    96,
      50,    51,    52,    53,    54,   122,    49,   128,    50,    51,
      52,    53,    54,   157,    18,    36,    19,    88,    41,    55,
      38,    63,    89,     0,   159,    41,    87,   108,   109,     0,
       0,   110,   111,    41,   123,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   108,   109,     0,     0,   110,   111,
       0,   121,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   108,   109,     0,     0,   110,   111,     0,   148,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   108,   109,
       0,     0,   110,   111,   129,     0,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   108,   109,     0,     0,   110,
     111,   131,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,     0,   108,   109,     0,   125,   110,   111,     0,
       0,   112,   113,   114,   115,   116,   117,   118,   119,   120,
       0,    41,   108,   109,     0,     0,   110,   111,     0,     0,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   151,
     108,   109,     0,     0,   110,   111,     0,     0,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   108,   109,   108,
     109,   110,   111,   110,   111,   112,   113,   112,   113,   116,
     117,   118,   119,   120,   119,   120,   108,   109,     0,     0,
     110,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120
};

static const yytype_int16 yycheck[] =
{
      32,    51,     4,    41,     4,    37,    59,    41,    28,    29,
      11,     5,    44,    33,    46,     3,    66,    67,    19,    57,
      70,    59,    46,    57,    48,    59,    76,    77,    78,    17,
      43,    19,    20,    21,    22,    23,    89,    50,     4,    43,
       4,     4,    41,    42,     6,    95,    50,    49,     0,    49,
      16,    89,    16,    16,   104,    89,    44,    45,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,     3,    43,     4,     3,    44,   126,     9,    49,    45,
       9,    45,    45,    15,    43,    16,    15,    30,    31,     3,
      49,    23,    24,    25,    23,    24,    25,   129,    41,    42,
      32,   151,     3,    32,    43,    37,    43,    43,    37,     3,
      49,     3,    49,    49,    45,     3,    48,     9,    50,    48,
      49,     9,    14,    15,    48,   157,   158,    15,    46,     9,
      48,    23,    24,    25,     3,    23,    24,    25,    48,    47,
      32,     3,    44,    46,    32,    37,     4,     3,     4,    37,
       3,    48,     3,    48,     3,     4,    48,    50,    33,    50,
      48,    17,     3,    19,    20,    21,    22,    23,    17,    50,
      19,    20,    21,    22,    23,    14,    17,     3,    19,    20,
      21,    22,    23,    18,     9,    25,     9,    57,    44,    45,
      27,    43,    57,    -1,   155,    44,    45,    26,    27,    -1,
      -1,    30,    31,    44,    45,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    26,    27,    -1,    -1,    30,    31,
      -1,    50,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    26,    27,    -1,    -1,    30,    31,    -1,    50,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    26,    27,
      -1,    -1,    30,    31,    49,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    26,    27,    -1,    -1,    30,
      31,    49,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    26,    27,    -1,    47,    30,    31,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    26,    27,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    26,    27,    26,
      27,    30,    31,    30,    31,    34,    35,    34,    35,    38,
      39,    40,    41,    42,    41,    42,    26,    27,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    52,     6,     0,    44,     4,    16,    45,    53,
      54,    57,    58,     3,    55,    56,     3,    45,    54,    57,
       4,    45,    58,    46,    48,    43,    50,    48,    45,     3,
       9,     4,    49,    59,    60,     3,    56,    49,    59,    47,
       3,    44,    61,    43,    49,    61,    49,     3,     4,    17,
      19,    20,    21,    22,    23,    45,    61,    62,    63,    65,
      66,    67,    70,    60,    61,    61,    46,    48,     3,    64,
      48,     3,     9,    15,    24,    25,    32,    37,    48,    50,
      67,    69,    70,    74,    50,    50,    48,    45,    63,    65,
      45,    66,    28,    29,    33,    68,    50,    69,    49,    69,
      73,    43,    50,    69,    33,    69,    69,    69,    26,    27,
      30,    31,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    50,    14,    45,    69,    47,    43,    49,     3,    49,
      69,    49,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    43,    49,    71,    50,    69,
      61,    43,    14,    69,    72,    43,    49,    18,    69,    72,
      61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    53,    53,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    58,    58,    59,
      59,    60,    61,    61,    61,    61,    62,    62,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    71,    71,    72,    72,    73,    73,    74,    74,    74,
      74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     5,     5,     1,     2,     3,     1,
       3,     1,     4,     1,     2,     6,     5,     6,     5,     1,
       3,     2,     4,     3,     3,     2,     1,     2,     3,     1,
       3,     1,     2,     4,     2,     7,     5,     7,     3,     2,
       2,     2,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     4,     3,     5,
       4,     2,     3,     1,     1,     1,     3,     1,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 147 "parser.ypp" /* yacc.c:1646  */
    {
	(yyval.prog)=new Program((yyvsp[-2].fldds),(yyvsp[-1].m_ds));
	start=(yyval.prog);
}
#line 1451 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 152 "parser.ypp" /* yacc.c:1646  */
    {
		(yyval.prog)=new Program(NULL,NULL);
		start=(yyval.prog);
		}
#line 1460 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 157 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.prog)=new Program((yyvsp[-1].fldds),NULL);
			start=(yyval.prog);
		}
#line 1469 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 163 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.prog)=new Program(NULL,(yyvsp[-1].m_ds));
			start=(yyval.prog);
		}
#line 1478 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 169 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.fldds)= new Field_decls();
					(yyval.fldds)->Push_back((yyvsp[0].fldd));
				}
#line 1487 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 174 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.fldds)->Push_back((yyvsp[0].fldd));
				}
#line 1495 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 180 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.fldd) = new Fields_decl(string((yyvsp[-2].str)),(yyvsp[-1].c_s_fs));
				}
#line 1503 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 185 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.c_s_fs) = new Comma_sep_fields();
					(yyval.c_s_fs)->Push_back((yyvsp[0].c_s_f));
				}
#line 1512 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 190 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.c_s_fs)->Push_back((yyvsp[0].c_s_f));
			}
#line 1520 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 195 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.c_s_f) = new Comma_sep_field(string((yyvsp[0].str)));
			}
#line 1528 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 199 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.c_s_f) = new Comma_sep_field(string((yyvsp[-3].str)),(yyvsp[-1].num));
			}
#line 1536 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 204 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.m_ds) = new Method_decls();
				(yyval.m_ds)->Push_back((yyvsp[0].m_d));
			}
#line 1545 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 209 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.m_ds)->Push_back((yyvsp[0].m_d));
				}
#line 1553 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 214 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.m_d) = new Method_decl(string((yyvsp[-5].str)),string((yyvsp[-4].str)),(yyvsp[-2].t_p_ids),(yyvsp[0].blk));
			}
#line 1561 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 218 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.m_d) = new Method_decl(string((yyvsp[-4].str)),string((yyvsp[-3].str)),NULL,(yyvsp[0].blk));
			}
#line 1569 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 222 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.m_d) = new Method_decl(string((yyvsp[-5].str)),string((yyvsp[-4].str)),(yyvsp[-2].t_p_ids),(yyvsp[0].blk));
			}
#line 1577 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 226 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.m_d) = new Method_decl(string((yyvsp[-4].str)),string((yyvsp[-3].str)),NULL,(yyvsp[0].blk));
			}
#line 1585 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 231 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.t_p_ids) = new Type_plus_ids();
				(yyval.t_p_ids)->Push_back((yyvsp[0].t_p_id));
			}
#line 1594 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 236 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.t_p_ids)->Push_back((yyvsp[0].t_p_id));
			}
#line 1602 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 241 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.t_p_id) = new Type_plus_id(string((yyvsp[-1].str)),string((yyvsp[0].str)));
			}
#line 1610 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 247 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.blk) = new Block((yyvsp[-2].v_ds),(yyvsp[-1].stmts));
			}
#line 1618 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 251 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.blk) = new Block((yyvsp[-1].v_ds),NULL);
			}
#line 1626 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 255 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.blk) = new Block(NULL,(yyvsp[-1].stmts));
			}
#line 1634 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 259 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.blk) = new Block(NULL,NULL);
			}
#line 1642 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 264 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.v_ds) = new Var_decls();
				(yyval.v_ds)->Push_back((yyvsp[0].v_d));
			}
#line 1651 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 269 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.v_ds)->Push_back((yyvsp[0].v_d));
			}
#line 1659 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 274 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.v_d) = new Var_decl(string((yyvsp[-2].str)),(yyvsp[-1].id_ss));
			}
#line 1667 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 280 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.id_ss) = new IDSS();
			(yyval.id_ss)->Push_back((yyvsp[0].str));
		}
#line 1676 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 285 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.id_ss)->Push_back((yyvsp[0].str));
		}
#line 1684 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 292 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmts) = new Statements();
				(yyval.stmts)->Push_back((yyvsp[0].stmt));
			}
#line 1693 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 297 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmts)->Push_back((yyvsp[0].stmt));
			}
#line 1701 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 302 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt) = new Assignment((yyvsp[-3].loc),(yyvsp[-2].asgn_op),(yyvsp[-1].expr));
			}
#line 1709 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 306 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt)=(yyvsp[-1].mthd_call);
			}
#line 1717 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 310 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt) = new If_Else((yyvsp[-4].expr),(yyvsp[-2].blk),(yyvsp[0].blk));
			}
#line 1725 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 314 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt) = new If_Else((yyvsp[-2].expr),(yyvsp[0].blk),NULL);
			}
#line 1733 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 318 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt) = new Fors(string((yyvsp[-5].str)),(yyvsp[-3].expr),(yyvsp[-1].expr),(yyvsp[0].blk));
			}
#line 1741 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 322 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt) = new Return((yyvsp[-1].expr));
			}
#line 1749 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 326 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt) = new Return(NULL);
			}
#line 1757 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 330 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt) = new Break();
			}
#line 1765 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 334 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt) = new Continue();
			}
#line 1773 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 338 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.stmt) = (yyvsp[0].blk);
			}
#line 1781 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 344 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.loc) = new Location(string((yyvsp[0].str)));
			}
#line 1789 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 348 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.loc) = new Location(string((yyvsp[-3].str)),(yyvsp[-1].expr));
			}
#line 1797 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 353 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.asgn_op) = new Assign_op((yyvsp[0].str));
			}
#line 1805 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 357 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.asgn_op) = new Assign_op((yyvsp[0].str));
			}
#line 1813 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 361 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.asgn_op) = new Assign_op((yyvsp[0].str));
			}
#line 1821 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 366 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr)=(yyvsp[0].loc);
		}
#line 1829 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 370 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr)=(yyvsp[0].mthd_call);
		}
#line 1837 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 374 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr)=(yyvsp[0].lit);
		}
#line 1845 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 378 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1853 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 382 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1861 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 386 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1869 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 390 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1877 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 394 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1885 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 398 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1893 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 402 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1901 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 406 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1909 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 410 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1917 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 414 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1925 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 418 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1933 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 422 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1941 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 426 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Binary_expr((yyvsp[-2].expr),string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1949 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 430 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Unary_expr(string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1957 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 434 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Unary_expr(string((yyvsp[-1].str)),(yyvsp[0].expr));
		}
#line 1965 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 438 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.expr) = new Bracket_expr((yyvsp[-1].expr));
		}
#line 1973 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 445 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.mthd_call) = new Func_call(string((yyvsp[-3].str)),(yyvsp[-1].expr_p));
				}
#line 1981 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 449 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.mthd_call) = new Func_call(string((yyvsp[-2].str)),NULL);
				}
#line 1989 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 453 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.mthd_call) = new Call_out(string((yyvsp[-2].str)),(yyvsp[-1].C_a_p));
				}
#line 1997 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 457 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.mthd_call) = new Call_out(string((yyvsp[-1].str)),NULL);
				}
#line 2005 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 464 "parser.ypp" /* yacc.c:1646  */
    {
						(yyval.C_a_p) = new Callout_args_plus();
						(yyval.C_a_p)->Push_back((yyvsp[0].C_a));
					}
#line 2014 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 469 "parser.ypp" /* yacc.c:1646  */
    {
						(yyval.C_a_p)->Push_back((yyvsp[0].C_a));
					}
#line 2022 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 475 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.C_a) = new Callout_arg((yyvsp[0].expr));
				}
#line 2030 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 479 "parser.ypp" /* yacc.c:1646  */
    {
					(yyval.C_a) = new Callout_arg(string((yyvsp[0].str)));
				}
#line 2038 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 484 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.expr_p) = new Expr_plus();
				(yyval.expr_p)->Push_back((yyvsp[0].expr));
			}
#line 2047 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 489 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.expr_p)->Push_back((yyvsp[0].expr));
			}
#line 2055 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 496 "parser.ypp" /* yacc.c:1646  */
    {
				printf("%d\n",(yyvsp[0].num));
				(yyval.lit) = new Int_literal((yyvsp[0].num));
			}
#line 2064 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 501 "parser.ypp" /* yacc.c:1646  */
    {
				(yyval.lit) = new Char_literal(string((yyvsp[0].str)));
			}
#line 2072 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 505 "parser.ypp" /* yacc.c:1646  */
    {
				
				(yyval.lit) = new Bool_literal("false");
			}
#line 2081 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 510 "parser.ypp" /* yacc.c:1646  */
    {
				
				(yyval.lit) = new Bool_literal("true");
			}
#line 2090 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2094 "parser.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 521 "parser.ypp" /* yacc.c:1906  */


main(int argc, char **argv)
{
	if(argc<=1 || argc>2)
	{
		if(argc>2)
			fprintf(stderr, "More than required number of arguments");
		fprintf(stderr, "Input should be of the form `./parser filename`\n");
	}
	yyin = fopen(argv[1], "r");
	yyparse();
	printf("Parsing Over\n");
	if(start)
	{
		start->GenCode();
		if(errors==0)
		{
			start->GenCodeDump();
		}
		else
		{
			cerr<<"Error"<<endl;
		}
	}
}

void yyerror(const char *s)
{
	fprintf(stderr, "error: %s\n", s);
}
