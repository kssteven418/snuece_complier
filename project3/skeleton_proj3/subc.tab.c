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
#line 1 "subc.y" /* yacc.c:339  */

/*
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"
#include "subc.tab.h"

int    yylex ();
int    yyerror (char* s);
void 	REDUCE(char* s);



#line 82 "subc.tab.c" /* yacc.c:339  */

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
   by #include "subc.tab.h".  */
#ifndef YY_YY_SUBC_TAB_H_INCLUDED
# define YY_YY_SUBC_TAB_H_INCLUDED
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
    LOGICAL_OR = 258,
    LOGICAL_AND = 259,
    EQUOP = 260,
    RELOP = 261,
    INCOP = 262,
    DECOP = 263,
    STRUCTOP = 264,
    IFONLY = 265,
    ELSE = 266,
    ID = 267,
    TYPE = 268,
    VOID = 269,
    STRUCT = 270,
    RETURN = 271,
    IF = 272,
    WHILE = 273,
    FOR = 274,
    BREAK = 275,
    CONTINUE = 276,
    STRING = 277,
    CHAR_CONST = 278,
    INTEGER_CONST = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "subc.y" /* yacc.c:355  */

	int		intVal;
	char	charVal;
	char	*stringVal;
	id		*idptr;

	decl	*declptr;

#line 156 "subc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 173 "subc.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    13,     2,     2,     2,     2,     7,     2,
      18,    19,    12,    10,     3,    11,    20,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    16,     2,    17,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
       8,     9,    14,    15,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    72,    75,    81,    85,    89,    94,    98,
      98,   109,   114,   118,   125,   125,   162,   189,   194,   200,
     199,   265,   268,   274,   277,   282,   285,   291,   293,   299,
     303,   307,   311,   318,   322,   328,   329,   333,   334,   335,
     348,   377,   378,   379,   380,   381,   382,   383,   387,   388,
     392,   404,   441,   447,   453,   469,   475,   481,   497,   503,
     522,   540,   557,   574,   579,   582,   586,   594,   602,   612,
     627,   652,   677,   687,   696,   706,   716,   734,   752,   774,
     796,   824,   847,   870,   878
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "'='", "LOGICAL_OR",
  "LOGICAL_AND", "'&'", "EQUOP", "RELOP", "'+'", "'-'", "'*'", "'!'",
  "INCOP", "DECOP", "'['", "']'", "'('", "')'", "'.'", "STRUCTOP",
  "IFONLY", "ELSE", "ID", "TYPE", "VOID", "STRUCT", "RETURN", "IF",
  "WHILE", "FOR", "BREAK", "CONTINUE", "STRING", "CHAR_CONST",
  "INTEGER_CONST", "';'", "'{'", "'}'", "$accept", "program",
  "ext_def_list", "ext_def", "$@1", "type_specifier", "struct_specifier",
  "@2", "func_decl", "@3", "pointers", "param_list", "param_decl",
  "def_list", "def", "compound_stmt", "local_defs", "stmt_list", "stmt",
  "expr_e", "const_expr", "expr", "or_expr", "or_list", "and_expr",
  "and_list", "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,    61,   258,   259,    38,   260,   261,
      43,    45,    42,    33,   262,   263,    91,    93,    40,    41,
      46,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,    59,   123,   125
};
# endif

#define YYPACT_NINF -83

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -83,    14,    79,   -83,   -83,   -83,    -8,   -83,    -1,   -83,
     -10,    22,   -83,   -83,    13,   -83,    26,   -83,    -3,   -83,
     -83,   -83,    76,    83,   -83,    79,   -83,    -6,    76,    76,
      76,    76,    76,    76,    76,   -83,   -83,   -83,   -83,    49,
     -83,   -83,    64,   -83,    86,   121,   166,   -83,    51,    79,
      16,    71,   -83,    43,   -83,   174,   174,   174,   174,   174,
     174,    98,   153,    77,    76,    76,    76,    76,    76,    76,
      76,   -83,   -83,    76,    11,    94,   101,   -83,   114,    -2,
     -83,   -83,   126,   -83,   141,   131,   133,   140,   129,   142,
     -83,   -83,   -83,   -83,   146,   -83,   -83,   -83,   -83,   174,
     121,   125,    21,   -83,   -83,   -83,   168,   -83,   188,   177,
     -83,   -83,   169,    79,   -83,    47,   -83,   160,    76,    76,
      76,   -83,   -83,   -83,   -83,    76,   -83,   182,   -83,    76,
     -83,   -83,   180,   181,   164,   -83,   -83,    76,   185,   109,
     109,    76,   186,   167,   183,   -83,   170,   -83,   -83,   109,
      76,   -83,   189,   109,   -83
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    11,    12,     0,     3,    22,    13,
       9,    16,    21,     8,     0,     7,     0,    14,     0,    28,
      10,    28,     0,    19,     5,    34,    36,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    68,    67,    66,     0,
      50,    52,    53,    55,    56,    58,    63,    17,     0,     0,
      22,     0,    27,     0,    15,    76,    70,    77,    71,    74,
      75,     0,    63,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,     0,     0,     0,     0,    18,    22,     0,
      23,    31,     0,    32,     0,     0,     0,     0,     0,     0,
      41,    33,    38,    35,     0,    64,    65,     6,    54,    63,
      57,    60,    59,    61,    62,    51,     0,    82,    83,     0,
      79,    80,     0,     0,    20,     0,    39,     0,     0,     0,
      49,    46,    47,    37,    78,     0,    81,    25,    24,     0,
      29,    40,     0,     0,     0,    48,    84,     0,     0,     0,
       0,    49,     0,     0,    42,    44,     0,    26,    30,     0,
      49,    43,     0,     0,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   203,   -83,
     -40,   -83,    96,   190,   -83,   194,   -83,   -83,   -54,   -82,
     -36,   -22,   -83,   -83,   148,   -83,    95,   -25,    88
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    16,    50,     9,    21,    51,    49,
      14,    79,    80,    25,    52,    92,    26,    53,    93,   134,
      39,    94,    41,    42,    43,    44,    45,    46,   109
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,   113,     8,    55,    56,    57,    58,    59,    60,    62,
      82,    12,    61,    22,     3,    23,    11,   114,    28,     4,
       5,     6,    29,    30,    31,    32,    33,    15,    12,    34,
     107,    68,    69,    54,    24,    35,    13,    18,   112,    99,
      99,    99,    99,    99,    99,    36,    37,    38,   105,    78,
      28,   106,   108,    81,    29,    30,    31,    32,    33,   146,
      17,    34,   117,   129,    19,    23,    63,    35,   152,    64,
      77,    84,    85,    86,    87,    88,    89,    36,    37,    38,
      90,    19,    91,    28,   130,   144,   145,    29,    30,    31,
      32,    33,    65,   138,    34,   151,   132,   133,   135,   154,
      35,   142,    47,   108,     4,     5,     6,    40,    83,    48,
      36,    37,    38,    78,    97,    40,    28,    95,   110,   135,
      29,    30,    31,    32,    33,   111,    12,    34,   135,    66,
      67,    68,    69,    35,    67,    68,    69,    84,    85,    86,
      87,    88,    89,    36,    37,    38,    90,    19,    28,   118,
     115,   119,    29,    30,    31,    32,    33,    70,   120,    34,
     100,   101,   102,   103,   104,    35,   121,    71,    72,    73,
      70,    74,    96,    75,    76,    36,    37,    38,   116,   122,
      71,    72,    73,   123,    74,   124,    75,    76,    71,    72,
      73,   125,    74,   127,    75,    76,   126,   131,   137,   139,
     140,   141,   143,   147,   148,    10,   149,   150,   153,   128,
      20,    27,    98,   136
};

static const yytype_uint8 yycheck[] =
{
      22,     3,     2,    28,    29,    30,    31,    32,    33,    34,
      50,    12,    34,    16,     0,    18,    24,    19,     7,    25,
      26,    27,    11,    12,    13,    14,    15,    37,    12,    18,
      19,    10,    11,    39,    37,    24,    37,    24,    78,    64,
      65,    66,    67,    68,    69,    34,    35,    36,    70,    49,
       7,    73,    74,    37,    11,    12,    13,    14,    15,   141,
      38,    18,    84,    16,    38,    18,    17,    24,   150,     5,
      19,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     7,    37,   139,   140,    11,    12,    13,
      14,    15,     6,   129,    18,   149,   118,   119,   120,   153,
      24,   137,    19,   125,    25,    26,    27,   129,    37,    26,
      34,    35,    36,   113,    37,   137,     7,    19,    24,   141,
      11,    12,    13,    14,    15,    24,    12,    18,   150,     8,
       9,    10,    11,    24,     9,    10,    11,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     7,    18,
      24,    18,    11,    12,    13,    14,    15,     4,    18,    18,
      65,    66,    67,    68,    69,    24,    37,    14,    15,    16,
       4,    18,    19,    20,    21,    34,    35,    36,    37,    37,
      14,    15,    16,    37,    18,    17,    20,    21,    14,    15,
      16,     3,    18,    24,    20,    21,    19,    37,    16,    19,
      19,    37,    17,    17,    37,     2,    23,    37,    19,   113,
      16,    21,    64,   125
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,    25,    26,    27,    43,    45,    46,
      48,    24,    12,    37,    50,    37,    44,    38,    24,    38,
      55,    47,    16,    18,    37,    53,    56,    53,     7,    11,
      12,    13,    14,    15,    18,    24,    34,    35,    36,    60,
      61,    62,    63,    64,    65,    66,    67,    19,    26,    49,
      45,    48,    54,    57,    39,    67,    67,    67,    67,    67,
      67,    61,    67,    17,     5,     6,     8,     9,    10,    11,
       4,    14,    15,    16,    18,    20,    21,    19,    45,    51,
      52,    37,    50,    37,    28,    29,    30,    31,    32,    33,
      37,    39,    55,    58,    61,    19,    19,    37,    64,    67,
      66,    66,    66,    66,    66,    61,    61,    19,    61,    68,
      24,    24,    50,     3,    19,    24,    37,    61,    18,    18,
      18,    37,    37,    37,    17,     3,    19,    24,    52,    16,
      37,    37,    61,    61,    59,    61,    68,    16,    60,    19,
      19,    37,    60,    17,    58,    58,    59,    17,    37,    23,
      37,    58,    59,    19,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    44,
      43,    45,    45,    45,    47,    46,    46,    48,    48,    49,
      48,    50,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    54,    54,    55,    56,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    59,
      60,    61,    61,    62,    63,    63,    64,    65,    65,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     0,
       3,     1,     1,     1,     0,     6,     2,     5,     6,     0,
       7,     1,     0,     1,     3,     3,     6,     2,     0,     4,
       7,     2,     2,     4,     1,     2,     0,     2,     1,     2,
       3,     1,     5,     7,     5,     9,     2,     2,     1,     0,
       1,     3,     1,     1,     3,     1,     1,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     3,
       3,     4,     3,     1,     3
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
        case 3:
#line 72 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1368 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 75 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = NULL;
		}
#line 1376 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = define_normal((yyvsp[-3].declptr), (yyvsp[-2].intVal), (yyvsp[-1].idptr));
		}
#line 1384 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 85 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = define_array((yyvsp[-6].declptr), (yyvsp[-5].intVal), (yyvsp[-4].idptr), (yyvsp[-2].declptr));
		}
#line 1392 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 89 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = check_function((yyvsp[-1].declptr));
			pop_scope();			
		}
#line 1401 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 94 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 1409 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 98 "subc.y" /* yacc.c:1646  */
    {
				ftn_type_glob = ftn_type;
			}
#line 1417 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 100 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = check_function((yyvsp[-2].declptr));
			pop_scope();
		}
#line 1426 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 109 "subc.y" /* yacc.c:1646  */
    {
			// only int and char
			ste* typeste = find((yyvsp[0].idptr));
			(yyval.declptr) = typeste->decl;
		}
#line 1436 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "subc.y" /* yacc.c:1646  */
    {
			ste* typeste = find((yyvsp[0].idptr));
			(yyval.declptr) = typeste->decl;
		}
#line 1445 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 118 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1453 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 125 "subc.y" /* yacc.c:1646  */
    {
			push_scope(); 
			// check if the struct type(ID) is declared
			// must search in every scope
			if(check_is_declared((yyvsp[-1].idptr), 0)){
				// id should not be 'NULL'
				if(strCompare_no_len((yyvsp[-1].idptr)->name, "NULL")){
					(yyval.declptr) = raise("unqualified id");
				}
				else{
					(yyval.declptr) = raise("redeclared");
				}
			}
		}
#line 1472 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 139 "subc.y" /* yacc.c:1646  */
    {
				ste* fields = pop_scope();
				if ((yyvsp[-4].idptr) == NULL) { (yyval.declptr) = NULL; }
				
				else if(check_is_declared((yyvsp[-4].idptr), 0)){
						(yyval.declptr) = NULL;
				}
				else if(strCompare_no_len((yyvsp[-4].idptr)->name, "NULL")){
					(yyval.declptr) = NULL;
				}
				
				// id should not be 'NULL'
				else if(strCompare_no_len((yyvsp[-4].idptr)->name, "NULL")){
					(yyval.declptr) = raise("unqualified id");
				}

				else{
					(yyval.declptr) = makestructdecl(fields);
					declare_struct_type((yyvsp[-4].idptr), (yyval.declptr));
				}
		}
#line 1498 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 162 "subc.y" /* yacc.c:1646  */
    {
			if ((yyvsp[0].idptr) == NULL) { (yyval.declptr) = NULL;}
			// id should not be 'NULL'
			if(strCompare_no_len((yyvsp[0].idptr)->name, "NULL")){
				(yyval.declptr) = raise("unqualified id");
			}
			
			else{
				// find struct type
				ste* id_ste = find((yyvsp[0].idptr));

				// struct must have been declared
				if(id_ste == NULL){
					(yyval.declptr) = raise("incomplete type error");
				}
				// type should be a struct type 
				else if(!check_is_struct_type(id_ste->decl)){
					(yyval.declptr) = raise("undeclared");
				}
				else{
					(yyval.declptr) = id_ste->decl;
				}
			}
		}
#line 1527 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 190 "subc.y" /* yacc.c:1646  */
    {
			ftn_type = (yyvsp[-4].declptr);
			(yyval.declptr) = define_function_no_param((yyvsp[-4].declptr), (yyvsp[-3].intVal), (yyvsp[-2].idptr));
		}
#line 1536 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 195 "subc.y" /* yacc.c:1646  */
    {
			ftn_type = (yyvsp[-5].declptr);
			(yyval.declptr) = define_function_no_param((yyvsp[-5].declptr), (yyvsp[-4].intVal), (yyvsp[-3].idptr));
		}
#line 1545 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 200 "subc.y" /* yacc.c:1646  */
    {
				ftn_type = (yyvsp[-3].declptr);
				if ((yyvsp[-3].declptr) == NULL) { push_scope(); (yyval.declptr) = NULL;}
				else if ((yyvsp[-1].idptr) == NULL) { push_scope(); (yyval.declptr) = NULL;}
				
				// id should not be 'NULL'
				else if(strCompare_no_len((yyvsp[-1].idptr)->name, "NULL")){
					push_scope();
					(yyval.declptr) = raise("unqualified id");
				}

				// function name must have not defined before
				else if (check_is_declared((yyvsp[-1].idptr), 1)){
					push_scope();
					(yyval.declptr) = raise("redeclared");
				}

				else{
					decl *func = makeprocdecl();
					// function id is inserted into the stack
					// before the fack stack scope is constructed
					declare((yyvsp[-1].idptr), func);
					//fake scope
					push_scope();
					// return type that returnid ste points to
					decl *returntype;
					// if pointer, encapsule type_specifier into ptr type decl
					if((yyvsp[-2].intVal)){
						returntype = (decl*)malloc(sizeof(decl));
						returntype->declclass = _TYPE;
						returntype->typeclass = _POINTER;
						returntype->ptrto = (yyvsp[-3].declptr);
					}
					else{
						returntype = (yyvsp[-3].declptr);
					}
					
					// push returnid at the fake stack
					declare(returnid, returntype);
					(yyval.declptr) = func;
				}
			}
#line 1592 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 243 "subc.y" /* yacc.c:1646  */
    {
				decl* func = (yyvsp[-2].declptr);
				if(func==NULL){ 
						pop_scope(); // must pop unnecessary declarations
						(yyval.declptr) = NULL; 
						push_scope(); // scope for unnecessary func body 
				}
				else{
					// pop out the fake scope
					ste* formals = pop_scope();
					// set returntype and formals information of the function
					setprocdecl(func, formals); 
					// new scope for local declarations and formals
					push_scope();
					// enter all the formal variables into the stack
					push_stelist(formals);
					(yyval.declptr) = func;
				}
			}
#line 1616 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 265 "subc.y" /* yacc.c:1646  */
    {
			(yyval.intVal) = 1; // true
		}
#line 1624 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 268 "subc.y" /* yacc.c:1646  */
    {
			(yyval.intVal) = 0; // false
		}
#line 1632 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 274 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1640 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 277 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1647 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 282 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = define_normal((yyvsp[-2].declptr), (yyvsp[-1].intVal), (yyvsp[0].idptr));
		}
#line 1655 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 285 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = define_array((yyvsp[-5].declptr), (yyvsp[-4].intVal), (yyvsp[-3].idptr), (yyvsp[-1].declptr));
		}
#line 1663 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 291 "subc.y" /* yacc.c:1646  */
    {
		}
#line 1670 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 293 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = NULL;
		}
#line 1678 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 299 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = define_normal((yyvsp[-3].declptr), (yyvsp[-2].intVal), (yyvsp[-1].idptr));
		}
#line 1686 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 303 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = define_array((yyvsp[-6].declptr), (yyvsp[-5].intVal), (yyvsp[-4].idptr), (yyvsp[-2].declptr));
		}
#line 1694 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 307 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 1702 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 311 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = check_function((yyvsp[-1].declptr));
			pop_scope();
		}
#line 1711 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 322 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1719 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 335 "subc.y" /* yacc.c:1646  */
    {
			ste* ret = find_current_scope(returnid);				
			if (ret != NULL){
				if(!check_type_compat(ret->decl, voidtype, 0)){
					raise("return value is not return type");			
				}
			}
			else{
				if(!check_type_compat(ftn_type_glob, voidtype, 0)){
					raise("return value is not return type");
				}
			}
		}
#line 1737 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 348 "subc.y" /* yacc.c:1646  */
    {
			
			if((yyvsp[-1].declptr)==NULL){
			}
			else{
				ste* ret = find_current_scope(returnid);

				// expression must be a constant, a variable or a pointer
				// cannot be func, array constant, or type
				if (ret != NULL){
	
					// if the expr is NULL
					if((yyvsp[-1].declptr)->declclass == _NULL){
						if (!(ret->decl->typeclass == _POINTER)){
							raise("return value is not return type");
						}
					}
					else if(!check_type_compat(ret->decl, (yyvsp[-1].declptr)->type, 0)){
						raise("return value is not return type");			
					}
					
				}
				else{
					if(!check_type_compat(ftn_type_glob, (yyvsp[-1].declptr)->type, 0)){
						raise("return value is not return type");
					}
				}
			}
		}
#line 1771 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 392 "subc.y" /* yacc.c:1646  */
    {
			//should be a constant
			if(check_is_const((yyvsp[0].declptr))){
				(yyval.declptr) = (yyvsp[0].declptr);
			}
			else{
				(yyval.declptr) = raise("not constant");
			}
		}
#line 1785 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 404 "subc.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].declptr)==NULL) {(yyval.declptr)=NULL;}
				else if ((yyvsp[0].declptr)==NULL) {(yyval.declptr)=NULL;}
				
				// LHS unary must be a pure variable
				// array is not allowed since it is a CONST
				else if (!check_is_var((yyvsp[-2].declptr), 0)){
					(yyval.declptr) = raise("LHS is not a variable");
				}
					
				// if RHS is NULL
				else if((yyvsp[0].declptr)->declclass==_NULL){
					// the LHS must be a pointer
					if ((yyvsp[-2].declptr)->type->typeclass == _POINTER){
						(yyval.declptr) = (yyvsp[-2].declptr);
					}
					else{
						(yyval.declptr) = raise("RHS is not a const or variable");
					}
				}

				// RHS expr must be a variable(+expr) or a const
				else if (!check_is_const_var((yyvsp[0].declptr), 1)
								&& (yyvsp[0].declptr)->type->typeclass != _ARRAY){
						(yyval.declptr) = raise("RHS is not a const or variable");	
				}

				// RHS and LHS must have same type
				else if (!check_type_compat((yyvsp[-2].declptr)->type, (yyvsp[0].declptr)->type, 1)){
					(yyval.declptr) = raise("LHS and RHS are not same type");
				}
				
				// otherwise, return the unary itself
				else{
					(yyval.declptr) = (yyvsp[-2].declptr);
				}
		}
#line 1827 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 441 "subc.y" /* yacc.c:1646  */
    {
				(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1835 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 447 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1843 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 453 "subc.y" /* yacc.c:1646  */
    {
			if(check_and_or((yyvsp[-2].declptr), (yyvsp[0].declptr), (yyval.declptr))){
				(yyval.declptr) = makevardecl(inttype); // output must be a integer type
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					// in case of addition of two integer constants
					(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value || (yyvsp[0].declptr)->int_value;
					(yyval.declptr)->declclass = _CONST;
				}
				else{
					(yyval.declptr)->declclass = _EXP;
				}
			}
			else{
					(yyval.declptr) = NULL;
			}
		}
#line 1864 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 469 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1872 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 475 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);	
		}
#line 1880 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 481 "subc.y" /* yacc.c:1646  */
    {
			if(check_and_or((yyvsp[-2].declptr), (yyvsp[0].declptr), (yyval.declptr))){
				(yyval.declptr) = makevardecl(inttype); // output must be a integer type
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					// in case of addition of two integer constants
					(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value && (yyvsp[0].declptr)->int_value;
					(yyval.declptr)->declclass = _CONST;
				}
				else{
					(yyval.declptr)->declclass = _EXP;
				}
			}
			else{
				(yyval.declptr) = NULL;
			}
		}
#line 1901 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 497 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1909 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 503 "subc.y" /* yacc.c:1646  */
    {
			if(check_rel_equ((yyvsp[-2].declptr), (yyvsp[0].declptr), (yyval.declptr), 0)){
				(yyval.declptr) = makevardecl(inttype); // output must be a integer type
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					// in case of addition of two integer constants
					if((yyvsp[-1].intVal)==_LT)	(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value < (yyvsp[0].declptr)->int_value;
					if((yyvsp[-1].intVal)==_LTE)	(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value <= (yyvsp[0].declptr)->int_value;
					if((yyvsp[-1].intVal)==_GT)	(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value > (yyvsp[0].declptr)->int_value;
					if((yyvsp[-1].intVal)==_GTE)	(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value >= (yyvsp[0].declptr)->int_value;
					(yyval.declptr)->declclass = _CONST;
				}
				else{
					(yyval.declptr)->declclass = _EXP;
				}
			}
			else{
				(yyval.declptr) = NULL;
			}
		}
#line 1933 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 522 "subc.y" /* yacc.c:1646  */
    {
			if(check_rel_equ((yyvsp[-2].declptr), (yyvsp[0].declptr), (yyval.declptr), 1)){
				(yyval.declptr) = makevardecl(inttype); // output must be a integer type
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					// in case of addition of two integer constants
					if((yyvsp[-1].intVal)==_EQ)	(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value == (yyvsp[0].declptr)->int_value;
					if((yyvsp[-1].intVal)==_NE)	(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value != (yyvsp[0].declptr)->int_value;
					(yyval.declptr)->declclass = _CONST;
				}
				else{
					(yyval.declptr)->declclass = _EXP;
				}
			}
			else{
				(yyval.declptr) = NULL;
			}
			
		}
#line 1956 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 540 "subc.y" /* yacc.c:1646  */
    {
			if(check_add_sub((yyvsp[-2].declptr), (yyvsp[0].declptr), (yyval.declptr))){
				(yyval.declptr) = copy((yyvsp[-2].declptr));
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					//ASSERT : $$->declclass = _CONST
					// in case of addition of two integer constants
					(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value + (yyvsp[0].declptr)->int_value;
				}
				else{
					(yyval.declptr)->declclass = _EXP;
				}
			}
			else{
				(yyval.declptr) = NULL;
			}
		}
#line 1977 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 557 "subc.y" /* yacc.c:1646  */
    {
			if(check_add_sub((yyvsp[-2].declptr), (yyvsp[0].declptr), (yyval.declptr))){
				(yyval.declptr) = copy((yyvsp[-2].declptr));
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					//ASSERT : $$->declclass = _CONST
					// in case of subtraction of two integer constants
					(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value + (yyvsp[0].declptr)->int_value;
				}
				else{
					(yyval.declptr)->declclass = _EXP;
				}
			}
			else{
				(yyval.declptr) = NULL;
			}
			
		}
#line 1999 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 574 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2007 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 579 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2015 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 582 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2023 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 586 "subc.y" /* yacc.c:1646  */
    {
			ste* temp = find(lookup("int")); 
			// construct a new constant declaration
			decl* const_decl = makeconstdecl(temp->decl);
			const_decl->int_value = (yyvsp[0].intVal);
			(yyval.declptr) = const_decl;
		}
#line 2035 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 594 "subc.y" /* yacc.c:1646  */
    {
			ste* temp = find(lookup("char"));
			// construct a new constant declaration
			decl* const_decl = makeconstdecl(temp->decl);
			const_decl->char_value = (yyvsp[0].charVal);
			(yyval.declptr) = const_decl;
		}
#line 2047 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 602 "subc.y" /* yacc.c:1646  */
    {
			id* temp = lookup("char");	
			ste* typeste = find(temp);
			decl* typedecl = typeste->decl;

			(yyval.declptr) = makeptrdecl(typedecl);
			(yyval.declptr)->declclass = _EXP; 
		}
#line 2060 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 612 "subc.y" /* yacc.c:1646  */
    {
			id* name = (yyvsp[0].idptr);	
			// find in all scopes
			ste* id_ste = find(name); 
			if(id_ste==NULL){
				//use without definition
				(yyval.declptr) = raise("not declared");
			}
			else{
				// copy declaration : not in the symbol table
				(yyval.declptr) = copy(id_ste->decl);
			}
		
		}
#line 2079 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 627 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].declptr) == NULL) (yyval.declptr) = NULL;
			
			// unary is not INT type
			else if(!check_type_compat((yyvsp[0].declptr)->type, inttype, 0)){
				(yyval.declptr) = raise("not int type");
			}

			// unary must be a const or a variable 
			else if(!check_is_const_var((yyvsp[0].declptr), 1)){
				(yyval.declptr) = raise("not const or variable");
			}
			
			else{
				(yyval.declptr) = (yyvsp[0].declptr);
				if(check_is_const((yyval.declptr))){
					// in case unary is a constant, value must be computed
					(yyval.declptr)->int_value = -((yyval.declptr)->int_value);
				}
				else{
					(yyval.declptr)->declclass = _EXP; // integer expression
				}
			}
		}
#line 2108 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 652 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].declptr) == NULL) (yyval.declptr) = NULL;
			
			// unary must be a INT type
			else if(!check_type_compat((yyvsp[0].declptr)->type, inttype, 0)){
				(yyval.declptr) = raise("not int type");
			}
			
			// unary must be a const or a variable 
			else if (!check_is_const_var((yyvsp[0].declptr), 1)){
				(yyval.declptr) = raise("not const or variable");
			}
			
			else{
				(yyval.declptr) = (yyvsp[0].declptr);
				if(check_is_const((yyval.declptr))){
					// in case unary is a constant, value must be computed
					(yyval.declptr)->int_value = !((yyval.declptr)->int_value);
				}
				else{
					(yyval.declptr)->declclass = _EXP; // integer expression
				}
			}
		}
#line 2137 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 677 "subc.y" /* yacc.c:1646  */
    {
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec((yyvsp[-1].declptr), (yyval.declptr))){
				(yyval.declptr) = (yyvsp[-1].declptr);
			}
			else{
				(yyval.declptr) = NULL;
			}
		}
#line 2151 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 687 "subc.y" /* yacc.c:1646  */
    {
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec((yyvsp[-1].declptr), (yyval.declptr))){
				(yyval.declptr) = (yyvsp[-1].declptr);
			}
			else{
				(yyval.declptr) = NULL;
			}
		}
#line 2165 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 696 "subc.y" /* yacc.c:1646  */
    {
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec((yyvsp[0].declptr), (yyval.declptr))){
				(yyval.declptr) = (yyvsp[0].declptr);
			}
			else{
				(yyval.declptr) = NULL;
			}
		}
#line 2179 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 706 "subc.y" /* yacc.c:1646  */
    {
			/* for INCOP and DECOP, the unary must be a variable */
			if(check_inc_dec((yyvsp[0].declptr), (yyval.declptr))){
				(yyval.declptr) = (yyvsp[0].declptr);
			}
			else{
				(yyval.declptr) = NULL;
			}
		}
#line 2193 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 716 "subc.y" /* yacc.c:1646  */
    {
			/* returns pointer of a value */
			if((yyvsp[0].declptr)==NULL){
				(yyval.declptr) = NULL;
			}

			// unary must be a pure variable
			else if(!check_is_var((yyvsp[0].declptr), 0)){
				(yyval.declptr) = raise("not variable");
			}
			else{
				// $2 : VAR	
				decl* temp = makeptrdecl((yyvsp[0].declptr)->type); // type is either int or char		
				(yyval.declptr) = temp;
				(yyval.declptr)->declclass = _EXP;
			}
		}
#line 2215 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 734 "subc.y" /* yacc.c:1646  */
    {
			/* returns pointer of a value */
			if((yyvsp[0].declptr)==NULL){
				(yyval.declptr) = NULL;
			}

			// unary must be a pointer
			else if(!check_is_pointer((yyvsp[0].declptr))){
				(yyval.declptr) = raise("not a pointer");
			}
			else{
				// access the value in the pointer
				decl* temp = makevardecl((yyvsp[0].declptr)->type->ptrto);		
				(yyval.declptr) = temp;
				(yyval.declptr)->declclass = _VAR;
			}
		}
#line 2237 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 752 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[-3].declptr) == NULL){
				(yyval.declptr) = NULL;
			}
			else if((yyvsp[-1].declptr) == NULL){
				(yyval.declptr) = NULL;
			}

			else if(!check_is_array((yyvsp[-3].declptr))){
				(yyval.declptr) = raise("not array type"); 
			}
			//exp must be a integer
			else if(!check_type_compat((yyvsp[-1].declptr)->type, inttype, 0)){
				(yyval.declptr) = raise("not int type");
			}
			else{
				decl* temp = copy((yyvsp[-3].declptr)->type->elementvar);
				(yyval.declptr) = temp;
				(yyval.declptr)->declclass = _VAR;
			}
		}
#line 2263 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 774 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].declptr) == NULL) { (yyval.declptr) = NULL; }
			else if((yyvsp[0].idptr) == NULL) { (yyval.declptr) = NULL;}
			
			//unary must be a struct type
			else if(!check_is_struct((yyvsp[-2].declptr))){
				(yyval.declptr) = raise("variable is not struct");
			}
			
			else{
				// find field entry from the structure type fields
				decl* strtype = (yyvsp[-2].declptr)->type;
				ste* field = find_field(strtype->fields, (yyvsp[0].idptr));
				if(field==NULL){
					(yyval.declptr) = raise("struct not have same name field");
				}
				else{
					(yyval.declptr) = copy(field->decl);
				}
			}
		}
#line 2289 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 796 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].declptr) == NULL) { (yyval.declptr) = NULL;}
			else if((yyvsp[0].idptr) == NULL) { (yyval.declptr) = NULL;}

			// unary must be a pointer value
			else if(!check_is_pointer((yyvsp[-2].declptr))){
				(yyval.declptr) = raise("not a pointer"); 
			}

			else{
				decl* strtype = (yyvsp[-2].declptr)->type->ptrto;
				// pointer value must be a struct
				if(!check_is_struct_type(strtype)){
					(yyval.declptr) = raise("variable is not struct");
				}
				else{
					// find field entry from the structure type fields
					ste* field = find_field(strtype->fields, (yyvsp[0].idptr));
					if(field==NULL){
						(yyval.declptr) = raise("struct not have same name field");
					}
					else{
					(yyval.declptr) = copy(field->decl);
					}
				}
			}

		}
#line 2322 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 824 "subc.y" /* yacc.c:1646  */
    {
			
			if((yyvsp[-3].declptr)==NULL) { (yyval.declptr) = NULL; }
			else if ((yyvsp[-1].declptr)==NULL) { (yyval.declptr) = NULL; }

			// unary must be a function 
			else if (!check_is_proc((yyvsp[-3].declptr))){
				(yyval.declptr) = raise("not a function");
			}
			else{
				//check argument
				if(!check_function_call((yyvsp[-3].declptr), (yyvsp[-1].declptr))){
					(yyval.declptr) = raise("actual args are not equal to formal args");
				}
				else {
					// return value is same as return type 
					// and should be a expression
					(yyval.declptr) = makevardecl((yyvsp[-3].declptr)->returntype->decl/* this is type */);
					(yyval.declptr)->declclass = _EXP;
				}
			}
		}
#line 2349 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 847 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].declptr)==NULL){ (yyval.declptr) = NULL; }

			// unary must be a function 
			else if (!check_is_proc((yyvsp[-2].declptr))){
				(yyval.declptr) = raise("not a function");
			}
			else{
				// check arguments
				if(!check_function_call((yyvsp[-2].declptr), NULL)){
					(yyval.declptr) = raise("actual args are not equal to formal args");
				}
				else {
					// return value is same as return type 
					// and should be a expression
					(yyval.declptr) = makevardecl((yyvsp[-2].declptr)->returntype->decl/* this is type */);
					(yyval.declptr)->declclass = _EXP;
				}
			}
		}
#line 2374 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 870 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].declptr) == NULL){
				(yyval.declptr) = NULL;
			}
			else{
				(yyval.declptr) = copy((yyvsp[0].declptr));
			}
		}
#line 2387 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 878 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].declptr)==NULL){
				(yyval.declptr) = NULL;
			}
			else if ((yyvsp[0].declptr) == NULL){
				(yyval.declptr) = NULL;
			}
			else{
				(yyval.declptr) = copy((yyvsp[-2].declptr));
				(yyval.declptr)->next = (yyvsp[0].declptr);	
			}
		}
#line 2404 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2408 "subc.tab.c" /* yacc.c:1646  */
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
#line 893 "subc.y" /* yacc.c:1906  */


/*  Additional C Codes here */

int    yyerror (char* s)
{
	fprintf (stderr, "%s\n", s);
}

void 	REDUCE( char* s)
{
	printf("%s\n",s);
}

void debug_args(decl* x){
	while(x!=NULL) {
			printf("%d ", x->type->typeclass);
			x = x->next;
	}
	printf("\n");
}

