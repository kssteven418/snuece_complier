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
    STRUCTOP = 258,
    TYPE = 259,
    STRUCT = 260,
    RETURN = 261,
    IF = 262,
    ELSE = 263,
    WHILE = 264,
    FOR = 265,
    BREAK = 266,
    CONTINUE = 267,
    LOGICAL_OR = 268,
    LOGICAL_AND = 269,
    ASSINGOP = 270,
    RELOP = 271,
    EQUOP = 272,
    PLUS_PLUS = 273,
    MINUS_MINUS = 274,
    ID = 275,
    CHAR_CONST = 276,
    STRING = 277,
    INTEGER_CONST = 278
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "subc.y" /* yacc.c:355  */

	int		intVal;
	char	*stringVal;

#line 149 "subc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 166 "subc.tab.c" /* yacc.c:358  */

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
#define YYLAST   196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   278

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,     2,     2,    37,    35,     2,
      31,    32,    30,    38,     3,    39,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    25,
       2,    33,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,    34,    27,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    37,    40,    44,    47,    51,    54,    58,
      61,    65,    68,    72,    75,    79,    82,    86,    89,    93,
      96,    99,   102,   106,   109,   113,   116,   120,   124,   127,
     131,   135,   138,   142,   145,   149,   149,   154,   159,   163,
     167,   171,   175,   179,   183,   187,   191,   195,   199,   203,
     207,   212,   217,   221,   226,   230,   234,   237,   241,   245,
     248,   251,   255,   259,   262,   265,   269,   273,   276,   279,
     282,   285,   288,   291,   295,   299,   303,   307,   311,   315,
     319,   323,   327,   331,   335,   339,   343,   347,   351,   356,
     360
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "STRUCTOP", "TYPE", "STRUCT",
  "RETURN", "IF", "ELSE", "WHILE", "FOR", "BREAK", "CONTINUE",
  "LOGICAL_OR", "LOGICAL_AND", "ASSINGOP", "RELOP", "EQUOP", "PLUS_PLUS",
  "MINUS_MINUS", "ID", "CHAR_CONST", "STRING", "INTEGER_CONST", "';'",
  "'{'", "'}'", "'['", "']'", "'*'", "'('", "')'", "'='", "'|'", "'&'",
  "'/'", "'%'", "'+'", "'-'", "'!'", "$accept", "program", "ext_def_list",
  "ext_def", "ext_decl_list", "ext_decl", "opt_specifier",
  "type_specifier", "struct_specifier", "opt_tag", "var_decl",
  "funct_decl", "var_list", "param_decl", "def_list", "def", "decl_list",
  "decl", "compound_stmt", "local_defs", "stmt_list", "stmt", "test",
  "opt_expr", "expr", "or_expr", "or_list", "and_expr", "and_list",
  "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,    59,   123,   125,    91,    93,
      42,    40,    41,    61,   124,    38,    47,    37,    43,    45,
      33
};
# endif

#define YYPACT_NINF -80

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-80)))

#define YYTABLE_NINF -18

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -80,    14,   134,   -80,   -80,   -13,   -80,    93,   -80,   -80,
      -8,    -6,   132,     3,     4,   -80,   -80,    18,   -80,   112,
       5,   -80,    93,   -80,   -80,   -80,    11,    -7,   -80,   -80,
      94,     1,   -80,   -80,   -80,    48,   -80,   -80,    93,   -80,
     -80,    55,   -80,    48,   -80,    39,   -80,   -80,    16,   -80,
     -80,   107,    45,    73,    88,    96,   100,   -80,   -80,   -80,
     -80,   -80,   -80,   147,   147,   147,   147,   147,   -80,   -80,
     -10,   -80,    41,   -80,    10,    54,     8,    93,   -80,   -80,
      52,   147,   147,   147,   -80,   -80,     8,    70,     8,     8,
       8,   147,   -80,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   114,   -80,   -80,   147,   127,
     -80,   -80,   101,    40,   111,   119,    40,   -80,    40,    40,
     -80,   -80,    54,    54,    54,    54,    54,    54,    54,    54,
      54,   -80,    72,   -80,    40,     2,    87,    87,   147,   -80,
     147,   -80,   136,   -80,   128,    40,    87,   147,   -80,   129,
      87,   -80
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    12,     1,    13,    18,     3,     0,    11,    14,
      16,     0,    19,     0,     0,     7,     9,    35,    29,     0,
       0,    22,     0,     5,    29,     6,     0,     0,    20,    23,
       0,     0,    25,     8,    10,    37,    39,    15,     0,    28,
      21,    19,    27,     0,    24,     0,    34,    33,     0,    32,
      26,     0,     0,     0,     0,     0,     0,    77,    76,    78,
      75,    44,    36,     0,     0,     0,     0,     0,    41,    38,
       0,    57,    58,    61,    62,    65,    73,     0,    30,    42,
       0,    52,    52,    54,    49,    50,    84,     0,    83,    79,
      80,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,    82,     0,     0,
      31,    43,     0,    51,     0,     0,    53,    74,    55,    56,
      59,    60,    63,    64,    66,    67,    68,    69,    70,    71,
      72,    86,     0,    88,    89,     0,    35,    35,    52,    85,
       0,    87,    45,    47,     0,    90,    35,    54,    46,     0,
      35,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,   -80,   -80,   142,   -80,     0,   -80,   -80,
     -29,    60,   -80,   122,   148,   -80,   -80,    97,   156,   -80,
     -80,   -30,   -79,    28,   -51,   -80,   -80,   -14,   -80,    92,
      89,   -80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    14,    15,     7,    30,     9,    11,
      16,    47,    31,    32,    26,    39,    48,    49,    68,    36,
      45,    69,   112,   115,    70,    71,    72,    73,    74,    75,
      76,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,    42,     8,   114,    43,   140,    91,    22,    10,    46,
       4,     5,   105,    87,     3,    92,     4,     5,   -17,    77,
      18,   -10,    40,    93,    21,    96,    38,   106,   107,    23,
     113,   113,   116,    44,   141,    38,   108,    29,    37,   109,
     118,    78,   119,   -10,    24,    97,    51,    52,    46,    53,
      54,    55,    56,     4,     5,    94,    91,   132,   134,   144,
      57,    58,    59,    60,    61,    24,    62,    17,    91,    63,
      64,    98,    99,    93,    65,    95,    81,   111,    66,    67,
     120,   121,    34,    19,   100,    93,    91,   113,    91,   145,
     101,   102,   103,   104,    51,    52,   116,    53,    54,    55,
      56,   139,   117,    93,    82,    93,   142,   143,    57,    58,
      59,    60,    61,    24,    12,    41,   148,    63,    64,    83,
     151,    84,    65,    13,    13,    85,    66,    67,    57,    58,
      59,    60,    79,   136,    -2,   131,    27,    63,    64,     4,
       5,    28,    65,   137,   138,   146,    66,    67,    57,    58,
      59,    60,    86,   147,    88,    89,    90,    63,    64,   133,
      19,   150,    65,    20,    33,    50,    66,    67,    57,    58,
      59,    60,    35,    25,   110,   149,     0,    63,    64,     0,
       0,     0,    65,     0,     0,     0,    66,    67,   122,   123,
     124,   125,   126,   127,   128,   129,   130
};

static const yytype_int16 yycheck[] =
{
      51,    30,     2,    82,     3,     3,    16,     3,    21,    38,
       5,     6,     4,    64,     0,    25,     5,     6,    26,     3,
      26,     3,    29,    33,    21,    15,    26,    19,    20,    25,
      81,    82,    83,    32,    32,    35,    28,    32,    27,    31,
      91,    25,    93,    25,    26,    35,     7,     8,    77,    10,
      11,    12,    13,     5,     6,    14,    16,   108,   109,   138,
      21,    22,    23,    24,    25,    26,    27,     7,    16,    30,
      31,    17,    18,    33,    35,    34,    31,    25,    39,    40,
      94,    95,    22,    28,    30,    33,    16,   138,    16,   140,
      36,    37,    38,    39,     7,     8,   147,    10,    11,    12,
      13,    29,    32,    33,    31,    33,   136,   137,    21,    22,
      23,    24,    25,    26,    21,    21,   146,    30,    31,    31,
     150,    25,    35,    30,    30,    25,    39,    40,    21,    22,
      23,    24,    25,    32,     0,    21,    24,    30,    31,     5,
       6,    29,    35,    32,    25,     9,    39,    40,    21,    22,
      23,    24,    63,    25,    65,    66,    67,    30,    31,    32,
      28,    32,    35,    31,    22,    43,    39,    40,    21,    22,
      23,    24,    24,    17,    77,   147,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    40,    96,    97,
      98,    99,   100,   101,   102,   103,   104
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    43,     0,     5,     6,    44,    47,    48,    49,
      21,    50,    21,    30,    45,    46,    51,    52,    26,    28,
      31,    21,     3,    25,    26,    59,    55,    24,    29,    32,
      48,    53,    54,    46,    52,    55,    60,    27,    48,    56,
      29,    21,    51,     3,    32,    61,    51,    52,    57,    58,
      54,     7,     8,    10,    11,    12,    13,    21,    22,    23,
      24,    25,    27,    30,    31,    35,    39,    40,    59,    62,
      65,    66,    67,    68,    69,    70,    71,     3,    25,    25,
      65,    31,    31,    31,    25,    25,    71,    65,    71,    71,
      71,    16,    25,    33,    14,    34,    15,    35,    17,    18,
      30,    36,    37,    38,    39,     4,    19,    20,    28,    31,
      58,    25,    63,    65,    63,    64,    65,    32,    65,    65,
      68,    68,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    21,    65,    32,    65,    72,    32,    32,    25,    29,
       3,    32,    62,    62,    63,    65,     9,    25,    62,    64,
      32,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    47,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    51,    51,    52,    52,    53,    53,    54,    55,    55,
      56,    57,    57,    58,    58,    59,    59,    60,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    64,    64,    65,    65,    65,    66,    67,
      67,    67,    68,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     1,     3,     1,
       1,     1,     0,     1,     1,     5,     2,     1,     0,     1,
       3,     4,     2,     3,     4,     1,     3,     2,     2,     0,
       3,     3,     1,     1,     1,     0,     4,     1,     2,     0,
       2,     1,     2,     3,     1,     5,     7,     5,     9,     2,
       2,     1,     0,     1,     0,     3,     3,     1,     1,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     4,     3,     4,     3,     1,
       3
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
#line 33 "subc.y" /* yacc.c:1646  */
    { 
	REDUCE("program->ext_def_list");
}
#line 1365 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_def_list->ext_def_list ext_def");
}
#line 1373 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 40 "subc.y" /* yacc.c:1646  */
    {
    REDUCE("ext_def_list->epsilon");
}
#line 1381 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 44 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_def->opt_specifier ext_decl_list ';'");
}
#line 1389 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 47 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_def->opt_specifier funct_decl compound_stmt");
}
#line 1397 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 51 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_decl_list->ext_decl");
}
#line 1405 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 54 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_decl_list->ext_decl_list ',' ext_decl");
}
#line 1413 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 58 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_decl->var_decl");
}
#line 1421 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 61 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("ext_decl->funct_decl");
}
#line 1429 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 65 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_specifier->type_specifier");
}
#line 1437 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 68 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_specifier->epsilon");
}
#line 1445 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 72 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("type_specifier->TYPE");
}
#line 1453 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("type_specifier->struct_specifier");
}
#line 1461 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 79 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("struct_specifier->STRUCT opt_tag '{' def_list '}'");
}
#line 1469 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 82 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("struct_specifier->STRUCT ID");
}
#line 1477 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_tag->ID");
}
#line 1485 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_tag->epsilon");
}
#line 1493 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_decl->ID");
}
#line 1501 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 96 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_decl->ID '[' ']'");
}
#line 1509 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 99 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_decl->ID '[' INTEGER_CONST ']'");
}
#line 1517 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 102 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_decl->'*' ID");
}
#line 1525 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 106 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("funct_decl->ID '(' ')'");
}
#line 1533 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("funct_decl->ID '(' var_list ')'");
}
#line 1541 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 113 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_list->param_decl");
}
#line 1549 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("var_list->var_list ',' param_decl");
}
#line 1557 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("param_decl->type_specifier var_decl");
}
#line 1565 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 124 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("def_list->def_list def");
}
#line 1573 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 127 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("def_list->epsilon");
}
#line 1581 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 131 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("def->type_specifier decl_list ';'");
}
#line 1589 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 135 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("decl_list->decl_list ',' decl");
}
#line 1597 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 138 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("decl_list->decl");
}
#line 1605 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 142 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("decl->funct_decl");
}
#line 1613 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 145 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("decl->var_decl");
}
#line 1621 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 150 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("compound_stmt->compound_stmt: '{' local_defs stmt_list '}'");
}
#line 1629 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 155 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("local_defs->def_list");
}
#line 1637 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 160 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt_list->stmt_list stmt");
}
#line 1645 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 163 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt_list->epsilon");
}
#line 1653 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 168 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->expr ';'");
}
#line 1661 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 172 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->compound_stmt");
}
#line 1669 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 176 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->RETURN ';'");
}
#line 1677 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 180 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->RETURN expr ';'");
}
#line 1685 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 184 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->';'");
}
#line 1693 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 188 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->IF '(' test ')' stmt");
}
#line 1701 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 192 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->IF '(' test ')' stmt ELSE stmt");
}
#line 1709 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 196 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->WHILE '(' test ')' stmt");
}
#line 1717 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 200 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->FOR '(' opt_expr ';' test ';' opt_expr ')' stmt");
}
#line 1725 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 204 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->BREAK ';'");
}
#line 1733 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 208 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("stmt->CONTINUE ';'");
}
#line 1741 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 213 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("test->expr");
}
#line 1749 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 217 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("test->epsilon");
}
#line 1757 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_expr->expr");
}
#line 1765 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 226 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("opt_expr->epsilon");
}
#line 1773 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 231 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("expr->expr ASSINGOP expr");
}
#line 1781 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 234 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("expr->expr '=' expr");
}
#line 1789 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 237 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("expr->or_expr");
}
#line 1797 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 241 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("or_expr->or_list");
}
#line 1805 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 245 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("or_list->or_list LOGICAL_OR and_expr");
}
#line 1813 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 248 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("or_list: or_list '|' and_expr");
}
#line 1821 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 251 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("or_list->and_expr");
}
#line 1829 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 255 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("and_expr->and_list");	
}
#line 1837 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 259 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("and_list->and_list LOGICAL_AND binary");
}
#line 1845 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 262 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("and_list->and_list '&' binary");
}
#line 1853 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 265 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("and_list->binary");
}
#line 1861 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 270 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary RELOP binary");
}
#line 1869 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 273 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary EQUOP binary");
}
#line 1877 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 276 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '*' binary");
}
#line 1885 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 279 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '/' binary");
}
#line 1893 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 282 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '\%' binary");
}
#line 1901 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 285 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '+' binary");
}
#line 1909 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 288 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->binary '-' binary");
}
#line 1917 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 291 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("binary->unary");
}
#line 1925 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 296 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'(' expr ')'");
}
#line 1933 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 300 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->INTEGER_CONST");
}
#line 1941 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 304 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->CHAR_CONST");
}
#line 1949 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 308 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->ID");
}
#line 1957 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 312 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->STRING");
}
#line 1965 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 316 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'-' unary");
}
#line 1973 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 320 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'!' unary");
}
#line 1981 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 324 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary PLUS_PLUS");
}
#line 1989 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 328 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary MINUS_MINUS");
}
#line 1997 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 332 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'&' unary");
}
#line 2005 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 336 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->'*' unary");
}
#line 2013 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 340 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary '[' expr ']'");
}
#line 2021 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 344 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary STRUCTOP ID");
}
#line 2029 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 348 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary '(' args ')'");
}
#line 2037 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 352 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("unary->unary '(' ')'");
}
#line 2045 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 357 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("args->expr");
}
#line 2053 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 361 "subc.y" /* yacc.c:1646  */
    {
	REDUCE("args->args ',' expr");
}
#line 2061 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2065 "subc.tab.c" /* yacc.c:1646  */
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
#line 366 "subc.y" /* yacc.c:1906  */

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

