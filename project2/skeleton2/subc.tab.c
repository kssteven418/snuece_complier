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

int    yylex ();
int    yyerror (char* s);
void 	REDUCE(char* s);


#line 80 "subc.tab.c" /* yacc.c:339  */

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
    ASSIGNOP = 258,
    LOGICAL_OR = 259,
    LOGICAL_AND = 260,
    EQUOP = 261,
    RELOP = 262,
    PLUS_PLUS = 263,
    MINUS_MINUS = 264,
    UMINUS = 265,
    UPOINTER = 266,
    UADDR = 267,
    STRUCTOP = 268,
    IFONLY = 269,
    ELSE = 270,
    TYPE = 271,
    STRUCT = 272,
    RETURN = 273,
    IF = 274,
    WHILE = 275,
    FOR = 276,
    BREAK = 277,
    CONTINUE = 278,
    ID = 279,
    CHAR_CONST = 280,
    STRING = 281,
    INTEGER_CONST = 282
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "subc.y" /* yacc.c:355  */

	int		intVal;
	char	*stringVal;

#line 153 "subc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 170 "subc.tab.c" /* yacc.c:358  */

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
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    16,     9,     2,
      26,    27,    14,    12,     3,    13,     2,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
       2,     5,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    24,     2,    25,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     8,    44,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     4,     6,
       7,    10,    11,    18,    19,    20,    21,    22,    23,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    50,    53,    57,    60,    64,    67,    71,
      74,    78,    81,    85,    88,    92,    95,    99,   102,   106,
     109,   112,   115,   119,   122,   126,   129,   133,   137,   140,
     144,   148,   151,   155,   158,   162,   167,   172,   176,   180,
     184,   188,   192,   196,   200,   204,   208,   212,   216,   220,
     225,   230,   234,   239,   243,   247,   250,   254,   258,   261,
     264,   268,   272,   275,   278,   282,   286,   289,   292,   295,
     298,   301,   304,   308,   312,   316,   320,   324,   328,   332,
     336,   340,   344,   348,   352,   356,   360,   364,   369,   373
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "ASSIGNOP", "'='", "LOGICAL_OR",
  "LOGICAL_AND", "'|'", "'&'", "EQUOP", "RELOP", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "PLUS_PLUS", "MINUS_MINUS", "UMINUS", "UPOINTER",
  "UADDR", "STRUCTOP", "'['", "']'", "'('", "')'", "IFONLY", "ELSE",
  "TYPE", "STRUCT", "RETURN", "IF", "WHILE", "FOR", "BREAK", "CONTINUE",
  "ID", "CHAR_CONST", "STRING", "INTEGER_CONST", "';'", "'{'", "'}'",
  "$accept", "program", "ext_def_list", "ext_def", "ext_decl_list",
  "ext_decl", "opt_specifier", "type_specifier", "struct_specifier",
  "opt_tag", "var_decl", "funct_decl", "var_list", "param_decl",
  "def_list", "def", "decl_list", "decl", "compound_stmt", "local_defs",
  "stmt_list", "stmt", "test", "opt_expr", "expr", "or_expr", "or_list",
  "and_expr", "and_list", "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,   258,    61,   259,   260,   124,    38,
     261,   262,    43,    45,    42,    47,    37,    33,   263,   264,
     265,   266,   267,   268,    91,    93,    40,    41,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,    59,   123,   125
};
# endif

#define YYPACT_NINF -84

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-84)))

#define YYTABLE_NINF -18

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -84,    23,    51,   -84,   -84,    -4,   -84,    -8,   -84,   -84,
      41,    47,    55,    54,     0,   -84,   -84,    79,   -84,   -84,
     -16,    94,    -8,   -84,   -84,   -84,   -15,   -84,   108,   -84,
      10,    14,   -84,   -84,   -84,    -3,   -84,   -84,    -8,   -84,
     -84,   107,   -84,    -3,   -84,    26,   -84,   -84,     2,   -84,
     -84,   136,   136,   136,   136,   136,    97,   114,   146,   147,
      92,   148,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       3,   -84,    83,   -84,   106,   145,   128,    -8,   -84,   128,
     128,   128,   128,    82,   -84,     8,   136,   136,   136,   -84,
     -84,   136,   136,   -84,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   -84,   -84,   110,   136,   103,
     -84,   -84,   -84,   162,   122,   164,   150,   122,   122,   122,
     -84,   -84,   145,   145,   167,   172,    58,    58,   -84,   -84,
     -84,   -84,    52,   -84,   122,    19,    62,    62,   136,   -84,
     136,   -84,   165,   -84,   151,   122,    62,   136,   -84,   168,
      62,   -84
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    12,     1,    13,    18,     3,     0,    11,    14,
      16,     0,     0,    19,     0,     7,     9,    10,    29,    22,
       0,     0,     0,     5,    29,     6,     0,    20,     0,    23,
       0,     0,    25,     8,    10,    36,    38,    15,     0,    28,
      21,    19,    27,     0,    24,     0,    34,    33,     0,    32,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    75,    77,    74,    43,    35,    40,    37,
       0,    56,    57,    60,    61,    64,    72,     0,    30,    82,
      78,    83,    79,     0,    41,     0,    51,    51,    53,    48,
      49,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
      31,    73,    42,     0,    50,     0,     0,    52,    54,    55,
      58,    59,    62,    63,    66,    65,    70,    71,    67,    68,
      69,    85,     0,    87,    88,     0,     0,     0,    51,    84,
       0,    86,    44,    46,     0,    89,     0,    53,    45,     0,
       0,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   -84,   -84,   -84,   174,   -84,    12,   -84,   -84,
     -28,     4,   -84,   154,   175,   -84,   -84,   121,   183,   -84,
     -84,   -18,   -83,    56,   -55,   -84,   -84,    13,   -84,    67,
     -33,   -84
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    14,    15,     7,    30,     9,    11,
      16,    47,    31,    32,    26,    39,    48,    49,    68,    36,
      45,    69,   113,   116,    70,    71,    72,    73,    74,    75,
      76,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      83,    85,    42,    22,   115,    77,    12,    91,    92,    27,
      46,    17,    91,    92,     8,     4,     5,    43,    79,    80,
      81,    82,   140,     3,    12,    28,    34,     4,     5,    37,
      13,   114,   114,   117,    10,    51,   118,   119,    38,    52,
      53,    44,    23,    54,    78,    93,   141,    38,    41,    46,
     112,    -2,    55,   132,   134,   144,    91,    92,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    24,
      67,    51,   102,   103,   104,    52,    53,   139,    20,    54,
      21,     4,     5,   114,   -17,   145,    91,    92,    55,    94,
      18,    95,   117,    19,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    24,    51,   120,   121,   111,
      52,    53,    51,    96,    54,    97,    52,    53,   142,   143,
      54,    29,    24,    55,     4,     5,    91,    92,   148,    55,
     133,    20,   151,    40,    89,    62,    63,    64,    65,    84,
      86,    62,    63,    64,    65,    51,   105,   106,   131,    52,
      53,   107,   108,    54,   109,    98,    99,   100,   101,   102,
     103,   104,    55,   122,   123,   124,   125,   126,   127,   128,
     129,   130,    87,    88,    62,    63,    64,    65,    99,   100,
     101,   102,   103,   104,   100,   101,   102,   103,   104,   136,
      90,   137,   138,   147,   146,   150,    33,    50,   110,    35,
      25,     0,     0,   149
};

static const yytype_int16 yycheck[] =
{
      55,    56,    30,     3,    87,     3,    14,     4,     5,    25,
      38,     7,     4,     5,     2,    30,    31,     3,    51,    52,
      53,    54,     3,     0,    14,    41,    22,    30,    31,    44,
      38,    86,    87,    88,    38,     9,    91,    92,    26,    13,
      14,    27,    42,    17,    42,    42,    27,    35,    38,    77,
      42,     0,    26,   108,   109,   138,     4,     5,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,     9,    14,    15,    16,    13,    14,    25,    24,    17,
      26,    30,    31,   138,    43,   140,     4,     5,    26,     6,
      43,     8,   147,    38,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     9,    94,    95,    27,
      13,    14,     9,     7,    17,     9,    13,    14,   136,   137,
      17,    27,    43,    26,    30,    31,     4,     5,   146,    26,
      27,    24,   150,    25,    42,    38,    39,    40,    41,    42,
      26,    38,    39,    40,    41,     9,    18,    19,    38,    13,
      14,    23,    24,    17,    26,    10,    11,    12,    13,    14,
      15,    16,    26,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    26,    26,    38,    39,    40,    41,    11,    12,
      13,    14,    15,    16,    12,    13,    14,    15,    16,    27,
      42,    27,    42,    42,    29,    27,    22,    43,    77,    24,
      17,    -1,    -1,   147
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,     0,    30,    31,    48,    51,    52,    53,
      38,    54,    14,    38,    49,    50,    55,    56,    43,    38,
      24,    26,     3,    42,    43,    63,    59,    25,    41,    27,
      52,    57,    58,    50,    56,    59,    64,    44,    52,    60,
      25,    38,    55,     3,    27,    65,    55,    56,    61,    62,
      58,     9,    13,    14,    17,    26,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    44,    63,    66,
      69,    70,    71,    72,    73,    74,    75,     3,    42,    75,
      75,    75,    75,    69,    42,    69,    26,    26,    26,    42,
      42,     4,     5,    42,     6,     8,     7,     9,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    23,    24,    26,
      62,    27,    42,    67,    69,    67,    68,    69,    69,    69,
      72,    72,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    38,    69,    27,    69,    76,    27,    27,    42,    25,
       3,    27,    66,    66,    67,    69,    29,    42,    66,    68,
      27,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    54,    54,    55,
      55,    55,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    61,    61,    62,    62,    63,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    70,    71,    71,
      71,    72,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     1,     3,     1,
       1,     1,     0,     1,     1,     5,     2,     1,     0,     1,
       3,     4,     2,     3,     4,     1,     3,     2,     2,     0,
       3,     3,     1,     1,     1,     4,     1,     2,     0,     2,
       1,     2,     3,     1,     5,     7,     5,     9,     2,     2,
       1,     0,     1,     0,     3,     3,     1,     1,     3,     3,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     4,     3,     4,     3,     1,     3
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
#line 46 "subc.y" /* yacc.c:1646  */
    { 
	REDUCE("program->ext_def_list");
}
#line 1369 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_def_list->ext_def_list ext_def");
}
#line 1377 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 53 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def_list->epsilon");
}
#line 1385 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 57 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_def->opt_specifier ext_decl_list ';'");
}
#line 1393 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 60 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_def->opt_specifier funct_decl compound_stmt");
}
#line 1401 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 64 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_decl_list->ext_decl");
}
#line 1409 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_decl_list->ext_decl_list ',' ext_decl");
}
#line 1417 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 71 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_decl->var_decl");
}
#line 1425 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 74 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_decl->funct_decl");
}
#line 1433 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_specifier->type_specifier");
}
#line 1441 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 81 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_specifier->epsilon");
}
#line 1449 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 85 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("type_specifier->TYPE");
}
#line 1457 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("type_specifier->struct_specifier");
}
#line 1465 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 92 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("struct_specifier->STRUCT opt_tag '{' def_list '}'");
}
#line 1473 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("struct_specifier->STRUCT ID");
}
#line 1481 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_tag->ID");
}
#line 1489 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 102 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_tag->epsilon");
}
#line 1497 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_decl->ID");
}
#line 1505 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 109 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_decl->ID '[' ']'");
}
#line 1513 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 112 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_decl->ID '[' INTEGER_CONST ']'");
}
#line 1521 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 115 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_decl->'*' ID");
}
#line 1529 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 119 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("funct_decl->ID '(' ')'");
}
#line 1537 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("funct_decl->ID '(' var_list ')'");
}
#line 1545 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 126 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_list->param_decl");
}
#line 1553 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 129 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_list->var_list ',' param_decl");
}
#line 1561 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 133 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("param_decl->type_specifier var_decl");
}
#line 1569 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 137 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("def_list->def_list def");
}
#line 1577 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 140 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("def_list->epsilon");
}
#line 1585 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 144 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("def->type_specifier decl_list ';'");
}
#line 1593 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 148 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("decl_list->decl_list ',' decl");
}
#line 1601 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 151 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("decl_list->decl");
}
#line 1609 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 155 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("decl->funct_decl");
}
#line 1617 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 158 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("decl->var_decl");
}
#line 1625 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 163 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
}
#line 1633 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 168 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("local_defs->def_list");
}
#line 1641 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 173 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt_list->stmt_list stmt");
}
#line 1649 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 176 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt_list->epsilon");
}
#line 1657 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 181 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->expr ';'");
}
#line 1665 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->compound_stmt");
}
#line 1673 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 189 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->RETURN ';'");
}
#line 1681 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 193 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->RETURN expr ';'");
}
#line 1689 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 197 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->';'");
}
#line 1697 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 201 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->IF '(' test ')' stmt");
}
#line 1705 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 205 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->IF '(' test ')' stmt ELSE stmt");
}
#line 1713 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 209 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->WHILE '(' test ')' stmt");
}
#line 1721 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 213 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->FOR '(' opt_expr ';' test ';' opt_expr ')' stmt");
}
#line 1729 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 217 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->BREAK ';'");
}
#line 1737 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 221 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->CONTINUE ';'");
}
#line 1745 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 226 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("test->expr");
}
#line 1753 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 230 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("test->epsilon");
}
#line 1761 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 235 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_expr->expr");
}
#line 1769 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 239 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_expr->epsilon");
}
#line 1777 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 244 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("expr->expr ASSIGNOP expr");
}
#line 1785 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 247 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("expr->expr '=' expr");
}
#line 1793 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 250 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("expr->or_expr");
}
#line 1801 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 254 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("or_expr->or_list");
}
#line 1809 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 258 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("or_list->or_list LOGICAL_OR and_expr");
}
#line 1817 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 261 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("or_list->or_list '|' and_expr");
}
#line 1825 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 264 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("or_list->and_expr");
}
#line 1833 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 268 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("and_expr->and_list");	
}
#line 1841 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 272 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("and_list->and_list LOGICAL_AND binary");
}
#line 1849 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 275 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("and_list->and_list '&' binary");
}
#line 1857 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 278 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("and_list->binary");
}
#line 1865 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 283 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary RELOP binary");
}
#line 1873 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 286 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary EQUOP binary");
}
#line 1881 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 289 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '*' binary");
}
#line 1889 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 292 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '/' binary");
}
#line 1897 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 295 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '\%' binary");
}
#line 1905 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 298 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '+' binary");
}
#line 1913 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 301 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '-' binary");
}
#line 1921 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 304 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->unary");
}
#line 1929 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 309 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'(' expr ')'");
}
#line 1937 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 313 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->INTEGER_CONST");
}
#line 1945 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 317 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->CHAR_CONST");
}
#line 1953 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 321 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->ID");
}
#line 1961 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 325 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->STRING");
}
#line 1969 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 329 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'-' unary");
}
#line 1977 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 333 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'!' unary");
}
#line 1985 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 337 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary PLUS_PLUS");
}
#line 1993 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 341 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary MINUS_MINUS");
}
#line 2001 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 345 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'&' unary");
}
#line 2009 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 349 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'*' unary");
}
#line 2017 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 353 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary '[' expr ']'");
}
#line 2025 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 357 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary STRUCTOP ID");
}
#line 2033 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 361 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary '(' args ')'");
}
#line 2041 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 365 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary '(' ')'");
}
#line 2049 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 370 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("args->expr");
}
#line 2057 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 374 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("args->args ',' expr");
}
#line 2065 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2069 "subc.tab.c" /* yacc.c:1646  */
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
#line 380 "subc.y" /* yacc.c:1906  */

/*  Additional C Codes 
 	Implemnt REDUCE function here */

int    yyerror (char* s)
{
	fprintf (stderr, "%s\n", s);
}

void 	REDUCE( char* s)
{
	printf("%s\n",s);
}

