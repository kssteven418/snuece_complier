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
#line 1 "gram.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "asm.h"

int yylex();
int yyerror(char* s);

struct instr_node {
	id_ptr opcode;
	struct operand* operand;
};

struct operand {
	id_ptr reg;
	id_ptr label;
	int integer;
	int is_integer_used;
};

#define STACK_SIZE (64*1024)
#define STACK_AREA_OFFSET (0)
#define CODE_AREA_SIZE (64*1024)
#define CODE_AREA_OFFSET (64*1024)
#define DATA_AREA_SIZE (64*1024)
#define DATA_AREA_OFFSET (64*1024 + 64*1024)

int code_area_size = 0;
int global_data_size = 0;

/*
typedef union _stack_machine_data_type {
	int i;
	unsigned char b;
} stack_machine_data_type;
*/

typedef int stack_machine_data_type;

struct instr_node* code_area[CODE_AREA_SIZE];
stack_machine_data_type stack[STACK_SIZE];
stack_machine_data_type global_data_area[DATA_AREA_SIZE];

/* instruction without operand */
#define INSTR_TYPE_1 \
	yyval.instr = (struct instr_node*)malloc(sizeof(struct instr_node)); \
	yyval.instr->opcode = yyvsp[0].id; \
	yyval.instr->operand = NULL;

/* instruction with 1 constant operand */
#define INSTR_TYPE_2 \
	yyval.instr = (struct instr_node*)malloc(sizeof(struct instr_node)); \
	yyval.instr->opcode = yyvsp[-1].id; \
	yyval.instr->operand = yyvsp[0].operand;

/* instruction with 1 register operand */
#define INSTR_TYPE_3 \
	yyval.instr = (struct instr_node*)malloc(sizeof(struct instr_node)); \
	yyval.instr->opcode = yyvsp[-1].id; \
	yyval.instr->operand = yyvsp[0].operand;

/* instruction with 1 integer const operand */
#define INSTR_TYPE_4 \
	yyval.instr = (struct instr_node*)malloc(sizeof(struct instr_node)); \
	yyval.instr->opcode = yyvsp[-1].id; \
	yyval.instr->operand = yyvsp[0].operand;


#line 137 "gram.tab.c" /* yacc.c:339  */

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
   by #include "gram.tab.h".  */
#ifndef YY_YY_GRAM_TAB_H_INCLUDED
# define YY_YY_GRAM_TAB_H_INCLUDED
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
    INT_CONST = 258,
    STRING_CONST = 259,
    NEGATE = 260,
    NOT = 261,
    ABS = 262,
    ADD = 263,
    SUB = 264,
    MUL = 265,
    DIV = 266,
    MOD = 267,
    AND = 268,
    OR = 269,
    EQUAL = 270,
    NOT_EQUAL = 271,
    GREATER = 272,
    GREATER_EQUAL = 273,
    LESS = 274,
    LESS_EQUAL = 275,
    JUMP = 276,
    BRANCH_TRUE = 277,
    BRANCH_FALSE = 278,
    EXIT = 279,
    PUSH_CONST = 280,
    PUSH_REG = 281,
    POP_REG = 282,
    SHIFT_SP = 283,
    ASSIGN = 284,
    FETCH = 285,
    READ_INT = 286,
    READ_CHAR = 287,
    WRITE_INT = 288,
    WRITE_CHAR = 289,
    WRITE_STRING = 290,
    SP = 291,
    FP = 292,
    PC = 293,
    ID = 294,
    DATA = 295,
    STRING = 296,
    NEW_LINE = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 72 "gram.y" /* yacc.c:355  */

	int intVal;
	char* stringVal;
	id_ptr id;

	struct instr_node* instr;
	struct operand* operand;

#line 229 "gram.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "gram.tab.c" /* yacc.c:358  */

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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   97

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  77

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    45,    44,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   138,   147,   151,   159,   177,   196,   204,
     215,   223,   231,   239,   247,   258,   266,   274,   285,   286,
     287,   288,   289,   290,   291,   292,   293
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_CONST", "STRING_CONST", "NEGATE",
  "NOT", "ABS", "ADD", "SUB", "MUL", "DIV", "MOD", "AND", "OR", "EQUAL",
  "NOT_EQUAL", "GREATER", "GREATER_EQUAL", "LESS", "LESS_EQUAL", "JUMP",
  "BRANCH_TRUE", "BRANCH_FALSE", "EXIT", "PUSH_CONST", "PUSH_REG",
  "POP_REG", "SHIFT_SP", "ASSIGN", "FETCH", "READ_INT", "READ_CHAR",
  "WRITE_INT", "WRITE_CHAR", "WRITE_STRING", "SP", "FP", "PC", "ID",
  "DATA", "STRING", "NEW_LINE", "':'", "'.'", "'-'", "'+'", "$accept",
  "inst", "state", "empty_state", "label", "global", "string", "integer",
  "const_op", "reg", "file", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    58,    46,    45,    43
};
# endif

#define YYPACT_NINF -42

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-42)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,    -3,    -3,    -3,
     -42,    -3,    44,    44,    -2,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -41,   -42,    -7,   -42,   -42,   -42,   -42,   -42,
      39,   -42,    38,    34,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,    37,   -42,    33,    45,   -42,   -42,
     -42,   -42,   -42,   -42,    84,    85,   -42,   -42,   -42,    86,
      87,   -42,   -42,    48,    50,   -42,   -42
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,     0,     0,
      21,     0,     0,     0,     0,    26,    27,    28,    29,    30,
      31,    32,     0,    34,     0,    52,    54,    53,    55,    56,
       0,    40,    42,     0,    18,    19,    20,    22,    46,    45,
      47,    23,    24,    38,     0,    25,     0,     0,    33,     1,
      48,    49,    50,    51,     0,     0,    41,    39,    35,     0,
       0,    44,    43,     0,     0,    36,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -42,   -42,    53,   -42,    54,    55,    56,   -42,    58,    74,
     -42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    34,    35,    36,    37,    38,    39,    55,    44,    51,
      40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    53,    56,    57,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    58,    42,    66,    32,    59,
      67,    33,    43,    54,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    68,    45,    46,    32,    47,
      48,    49,    50,    64,    65,    69,    70,    71,    72,    73,
      75,    74,    76,    60,    61,    62,    63,    52
};

static const yytype_uint8 yycheck[] =
{
       3,     3,    43,    44,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    42,    39,     3,    39,     0,
       3,    42,    45,    45,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    42,    18,    19,    39,    21,
      36,    37,    38,    45,    46,    40,    41,     3,     3,     3,
      42,     4,    42,    40,    40,    40,    40,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    39,    42,    48,    49,    50,    51,    52,    53,
      57,     3,    39,    45,    55,    55,    55,    55,    36,    37,
      38,    56,    56,     3,    45,    54,    43,    44,    42,     0,
      49,    51,    52,    53,    45,    46,     3,     3,    42,    40,
      41,     3,     3,     3,     4,    42,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    49,    50,    51,    52,    53,    54,    54,
      55,    55,    55,    55,    55,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    57
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     5,     5,     1,     2,
       1,     2,     1,     3,     3,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1
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
#line 104 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1382 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 105 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1388 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 106 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1394 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 107 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1400 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 108 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1406 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 109 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1412 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1418 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 111 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1424 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 112 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1430 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 113 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1436 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1442 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 115 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1448 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1454 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 117 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1460 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 118 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1466 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 119 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1472 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_2 }
#line 1478 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 121 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_2 }
#line 1484 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 122 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_2 }
#line 1490 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 123 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1496 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 124 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_2 }
#line 1502 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 125 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_3 }
#line 1508 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 126 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_3 }
#line 1514 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 127 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_4 }
#line 1520 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 128 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1526 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 129 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1532 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 130 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1538 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 131 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1544 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 132 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1550 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 133 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1556 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 134 "gram.y" /* yacc.c:1646  */
    { INSTR_TYPE_1 }
#line 1562 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 139 "gram.y" /* yacc.c:1646  */
    {
			assert(code_area_size <= CODE_AREA_SIZE);

			code_area[code_area_size++] = (yyvsp[-1].instr);
		}
#line 1572 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 152 "gram.y" /* yacc.c:1646  */
    {
			assert((yyvsp[-2].id)->pc < 0);
			(yyvsp[-2].id)->pc = CODE_AREA_OFFSET + code_area_size;
		}
#line 1581 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 160 "gram.y" /* yacc.c:1646  */
    {
			int i;

			assert((yyvsp[-4].id)->pc < 0);
			(yyvsp[-4].id)->pc = DATA_AREA_OFFSET + global_data_size;

			for(i = 0; i < (yyvsp[-1].intVal); i++) {
				global_data_area[ global_data_size + i ] = 0;
			}

			global_data_size += (yyvsp[-1].intVal);

			assert(global_data_size <= DATA_AREA_SIZE);
		}
#line 1600 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 178 "gram.y" /* yacc.c:1646  */
    {
			int i, size;

			assert((yyvsp[-4].id)->pc < 0);
			(yyvsp[-4].id)->pc = DATA_AREA_OFFSET + global_data_size;

			size = strlen((yyvsp[-1].stringVal)) + 1;
			for(i = 0; i < size; i++) {
				global_data_area[ global_data_size + i ] = (int)(yyvsp[-1].stringVal)[i];
			}

			global_data_size += size;

			assert(global_data_size <= DATA_AREA_SIZE);
		}
#line 1620 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 197 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand)); \
			(yyval.operand)->reg = NULL; \
			(yyval.operand)->label = NULL; \
			(yyval.operand)->integer = yyvsp[0].intVal; \
			(yyval.operand)->is_integer_used = 1;
		}
#line 1632 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 205 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand)); \
			(yyval.operand)->reg = NULL; \
			(yyval.operand)->label = NULL; \
			(yyval.operand)->integer = -1 * yyvsp[0].intVal; \
			(yyval.operand)->is_integer_used = 1;
		}
#line 1644 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 216 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand));
			(yyval.operand)->reg = NULL;
			(yyval.operand)->label = NULL;
			(yyval.operand)->integer = (yyvsp[0].intVal);
			(yyval.operand)->is_integer_used = 1;
		}
#line 1656 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 224 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand));
			(yyval.operand)->reg = NULL;
			(yyval.operand)->label = NULL;
			(yyval.operand)->integer = -1 * (yyvsp[0].intVal);
			(yyval.operand)->is_integer_used = 1;
		}
#line 1668 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 232 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand));
			(yyval.operand)->reg = NULL;
			(yyval.operand)->label = (yyvsp[0].id);
			(yyval.operand)->integer = 0;
			(yyval.operand)->is_integer_used = 0;
		}
#line 1680 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 240 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand));
			(yyval.operand)->reg = NULL;
			(yyval.operand)->label = (yyvsp[-2].id);
			(yyval.operand)->integer = (yyvsp[0].intVal);
			(yyval.operand)->is_integer_used = 1;
		}
#line 1692 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 248 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand));
			(yyval.operand)->reg = NULL;
			(yyval.operand)->label = (yyvsp[-2].id);
			(yyval.operand)->integer = -1 * (yyvsp[0].intVal);
			(yyval.operand)->is_integer_used = 1;
		}
#line 1704 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 259 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand));
			(yyval.operand)->reg = (yyvsp[0].id);
			(yyval.operand)->label = NULL;
			(yyval.operand)->integer = 0;
			(yyval.operand)->is_integer_used = 0;
		}
#line 1716 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 267 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand));
			(yyval.operand)->reg = (yyvsp[0].id);
			(yyval.operand)->label = NULL;
			(yyval.operand)->integer = 0;
			(yyval.operand)->is_integer_used = 0;
		}
#line 1728 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 275 "gram.y" /* yacc.c:1646  */
    {
			(yyval.operand) = (struct operand*)malloc(sizeof(struct operand));
			(yyval.operand)->reg = (yyvsp[0].id);
			(yyval.operand)->label = NULL;
			(yyval.operand)->integer = 0;
			(yyval.operand)->is_integer_used = 0;
		}
#line 1740 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 285 "gram.y" /* yacc.c:1646  */
    { }
#line 1746 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 286 "gram.y" /* yacc.c:1646  */
    { }
#line 1752 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 287 "gram.y" /* yacc.c:1646  */
    { }
#line 1758 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 288 "gram.y" /* yacc.c:1646  */
    { }
#line 1764 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 289 "gram.y" /* yacc.c:1646  */
    { }
#line 1770 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 290 "gram.y" /* yacc.c:1646  */
    { }
#line 1776 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 291 "gram.y" /* yacc.c:1646  */
    { }
#line 1782 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 292 "gram.y" /* yacc.c:1646  */
    { }
#line 1788 "gram.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 293 "gram.y" /* yacc.c:1646  */
    { }
#line 1794 "gram.tab.c" /* yacc.c:1646  */
    break;


#line 1798 "gram.tab.c" /* yacc.c:1646  */
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
#line 296 "gram.y" /* yacc.c:1906  */


void init_stack_machine(void)
{
	memset(code_area, 0, sizeof(struct instr_node*) * CODE_AREA_SIZE);
	memset(stack, 0, sizeof(stack_machine_data_type) * STACK_SIZE);
	memset(global_data_area, 0, sizeof(stack_machine_data_type) * DATA_AREA_SIZE);
}

void validate_stack_machine(void)
{
	int i;
	struct operand* operand;

	for(i=CODE_AREA_OFFSET; i<CODE_AREA_OFFSET + code_area_size; i++) {
		assert(code_area[i - CODE_AREA_OFFSET]!=NULL);

		operand = code_area[i - CODE_AREA_OFFSET]->operand;

		switch(code_area[i - CODE_AREA_OFFSET]->opcode->lextype) {
		case NEGATE: case NOT: case ABS: case ADD: case SUB:
		case MUL: case DIV: case MOD: case AND: case OR:
		case EQUAL: case NOT_EQUAL: case GREATER: case GREATER_EQUAL:
		case LESS: case LESS_EQUAL:
		case EXIT:
		case ASSIGN: case FETCH:
		case READ_INT: case READ_CHAR:
		case WRITE_INT: case WRITE_CHAR: case WRITE_STRING:
			/* opcodes without operand */
			assert(operand==NULL);
			break;

		case JUMP: case BRANCH_TRUE: case BRANCH_FALSE:
		case PUSH_CONST:
			/* opcodes with 1 constant operand */
			assert(operand!=NULL);
			assert(operand->reg==NULL && (operand->label || operand->is_integer_used));
			if(operand->label) {
				if(!((operand->label->pc >= CODE_AREA_OFFSET && operand->label->pc < CODE_AREA_OFFSET + CODE_AREA_SIZE) || (operand->label->pc >= DATA_AREA_OFFSET && operand->label->pc < DATA_AREA_OFFSET + DATA_AREA_SIZE))) {
					fprintf(stderr, "%s is not declared.\n", operand->label->name);
					abort();
				}
			}
			break;

		case PUSH_REG: case POP_REG:
			/* opcodes with 1 register operand */
			assert(operand!=NULL);
			assert(operand->reg!=NULL && operand->label==NULL && operand->is_integer_used==0);
			break;
		case SHIFT_SP:
			/* opcodes with 1 integer operand */
			assert(operand!=NULL);
			assert(operand->reg==NULL && operand->label==NULL && operand->is_integer_used);
			break;
		defaule:
			assert(0);
		}
	}
}

void simulate_stack_machine(void)
{
	int pc, sp, fp;	/* stack machine registers */

	fprintf(stderr, "code area size %d\n", code_area_size);
	fprintf(stderr, "data area size %d\n", global_data_size);

	pc = CODE_AREA_OFFSET;
	sp = STACK_AREA_OFFSET - 1;
	fp = 0;

	validate_stack_machine();

#define PUSH(x) { \
		sp++; \
		assert(sp<STACK_AREA_OFFSET + STACK_SIZE);\
		stack[sp - STACK_AREA_OFFSET] = x; \
	}
#define POP(x) { \
		assert(sp>=STACK_AREA_OFFSET); \
		x = stack[sp]; \
		sp--; \
	}

	while(1) {
		int opcode;
		struct operand* operand;
		stack_machine_data_type temp_reg1, temp_reg2;

		assert(pc>=CODE_AREA_OFFSET && pc<CODE_AREA_OFFSET+CODE_AREA_SIZE);

		opcode = code_area[pc - CODE_AREA_OFFSET]->opcode->lextype;
		operand = code_area[pc - CODE_AREA_OFFSET]->operand;

		switch(opcode) {
		case NEGATE:
			POP(temp_reg1);
			PUSH(-1 * temp_reg1);
			pc++;
			break;
		case NOT:
			POP(temp_reg1);
			PUSH(!temp_reg1);
			pc++;
			break;
		case ABS:
			POP(temp_reg1);
			PUSH(temp_reg1>=0 ? temp_reg1 : (-1 * temp_reg1));
			pc++;
			break;
		case ADD:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 + temp_reg1);
			pc++;
			break;
		case SUB:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 - temp_reg1);
			pc++;
			break;
		case MUL:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 * temp_reg1);
			pc++;
			break;
		case DIV:
			POP(temp_reg1);
			POP(temp_reg2);
			if(temp_reg1==0) {
				fprintf(stderr, "divide by zero\n");
				abort();
			}
			PUSH(temp_reg2 / temp_reg1);
			pc++;
			break;
		case MOD:
			POP(temp_reg1);
			POP(temp_reg2);
			if(temp_reg1==0) {
				fprintf(stderr, "divide by zero\n");
				abort();
			}
			PUSH(temp_reg2 % temp_reg1);
			pc++;
			break;
		case AND:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 && temp_reg1);
			pc++;
			break;
		case OR:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 || temp_reg1);
			pc++;
			break;
		case EQUAL:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 == temp_reg1);
			pc++;
			break;
		case NOT_EQUAL:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 != temp_reg1);
			pc++;
			break;
		case GREATER:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 > temp_reg1);
			pc++;
			break;
		case GREATER_EQUAL:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 >= temp_reg1);
			pc++;
			break;
		case LESS:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 < temp_reg1);
			pc++;
			break;
		case LESS_EQUAL:
			POP(temp_reg1);
			POP(temp_reg2);
			PUSH(temp_reg2 <= temp_reg1);
			pc++;
			break;
		case JUMP:
			if(operand->label && operand->is_integer_used) {
				pc = operand->label->pc + operand->integer;
			} else if(operand->label && !operand->is_integer_used) {
				pc = operand->label->pc;
			} else if(operand->label==NULL && operand->is_integer_used) {
				pc = operand->integer;
			} else {
				assert(0);
			}
			break;
		case BRANCH_TRUE:
			POP(temp_reg1);
			if(temp_reg1) {
				if(operand->label && operand->is_integer_used) {
					pc = operand->label->pc + operand->integer;
				} else if(operand->label && !operand->is_integer_used) {
					pc = operand->label->pc;
				} else if(operand->label==NULL && operand->is_integer_used) {
					pc = operand->integer;
				} else {
					assert(0);
				}
			} else {
				pc++;
			}
			break;
		case BRANCH_FALSE:
			POP(temp_reg1);
			if(!temp_reg1) {
				if(operand->label && operand->is_integer_used) {
					pc = operand->label->pc + operand->integer;
				} else if(operand->label && !operand->is_integer_used) {
					pc = operand->label->pc;
				} else if(operand->label==NULL && operand->is_integer_used) {
					pc = operand->integer;
				} else {
					assert(0);
				}
			} else {
				pc++;
			}
			break;
		case EXIT:
			fprintf(stdout, "program exits\n");
			exit(0);
			break;
		case PUSH_CONST:
			if(operand->label && operand->is_integer_used) {
				temp_reg1 = operand->label->pc + operand->integer;
			} else if(operand->label && !operand->is_integer_used) {
				temp_reg1 = operand->label->pc;
			} else if(operand->label==NULL && operand->is_integer_used) {
				temp_reg1 = operand->integer;
			} else {
				assert(0);
			}
			PUSH(temp_reg1);
			pc++;
			break;
		case PUSH_REG:
			assert(operand->reg);
			switch(operand->reg->lextype) {
			case PC:
				temp_reg1 = pc;
				break;
			case SP:
				temp_reg1 = sp;
				break;
			case FP:
				temp_reg1 = fp;
				break;
			default:
				assert(0);
			}
			PUSH(temp_reg1);
			pc++;
			break;
		case POP_REG:
			assert(operand->reg);
			POP(temp_reg1);
			switch(operand->reg->lextype) {
			case PC:
				pc = temp_reg1;
				break;
			case SP:
				sp = temp_reg1;
			    pc++;
				break;
			case FP:
				fp = temp_reg1;
			    pc++;
				break;
			default:
				assert(0);
			}
			break;
		case SHIFT_SP:
			assert(operand->reg==NULL && operand->label==NULL && operand->is_integer_used==1);
			sp += operand->integer;
			pc++;
			break;
		case ASSIGN:
			POP(temp_reg1);
			POP(temp_reg2);
			if(temp_reg2>=STACK_AREA_OFFSET && temp_reg2<STACK_AREA_OFFSET+STACK_SIZE) {
				stack[temp_reg2 - STACK_AREA_OFFSET] = temp_reg1;
			} else if(temp_reg2>=DATA_AREA_OFFSET && temp_reg2<DATA_AREA_OFFSET+global_data_size ) {
				global_data_area[temp_reg2 - DATA_AREA_OFFSET] = temp_reg1;
			} else if ( temp_reg2>=DATA_AREA_OFFSET+global_data_size && temp_reg2<DATA_AREA_OFFSET+DATA_AREA_SIZE ) {
				fprintf(stderr, "Global Data size is not enough\n");
			} else {
				fprintf(stderr, "invalid address %d\n", temp_reg2);
			}
			pc++;
			break;
		case FETCH:
			POP(temp_reg1);
			if(temp_reg1>=STACK_AREA_OFFSET && temp_reg1<STACK_AREA_OFFSET+STACK_SIZE) {
				temp_reg2 = stack[temp_reg1 - STACK_AREA_OFFSET];
			} else if(temp_reg1>=DATA_AREA_OFFSET && temp_reg1<DATA_AREA_OFFSET+global_data_size) {
				temp_reg2 = global_data_area[temp_reg1 - DATA_AREA_OFFSET];
			} else if ( temp_reg1>=DATA_AREA_OFFSET+global_data_size && temp_reg1<DATA_AREA_OFFSET+DATA_AREA_SIZE ) {
				fprintf(stderr, "Global Data size is not enough\n");
			} else {
				fprintf(stderr, "invalid address %d\n", temp_reg1);
			}
			PUSH(temp_reg2);
			pc++;
			break;
		case READ_INT:
            fprintf(stdout, "read int:\n");
			scanf("%d", &temp_reg1);
			PUSH(temp_reg1);
			pc++;
			break;
		case READ_CHAR:
            fprintf(stdout, "read char:\n");
			temp_reg1 = 0;
			scanf("%c", &temp_reg1);
			PUSH(temp_reg1);
			pc++;
			break;
		case WRITE_INT:
			POP(temp_reg1);
			fprintf(stdout, "%d", temp_reg1);
			pc++;
			break;
		case WRITE_CHAR:
			POP(temp_reg1);
			fprintf(stdout, "%c", temp_reg1);
			pc++;
			break;
		case WRITE_STRING:
			POP(temp_reg1);
			if(temp_reg1>=STACK_AREA_OFFSET && temp_reg1<STACK_AREA_OFFSET+STACK_SIZE) {
				while(1) {
					int c = stack[temp_reg1++ - STACK_AREA_OFFSET];
					if(c==0) break;
					if(c=='\'') {
						if(c=='n') fputc('\n', stdout);
						else if(c=='t') fputc('\t', stdout);
						else fputc(c, stdout);
					} else {
						fputc(c, stdout);
					}
				}
			} else if(temp_reg1>=DATA_AREA_OFFSET && temp_reg1<DATA_AREA_OFFSET+DATA_AREA_SIZE) {
				while(1) {
					int c = global_data_area[temp_reg1++ - DATA_AREA_OFFSET];
					if(c==0) break;
					if(c=='\\') {
					    int c = global_data_area[temp_reg1++ - DATA_AREA_OFFSET];
						if(c=='n') fputc('\n', stdout);
						else if(c=='t') fputc('\t', stdout);
						else fputc(c, stdout);
					} else {
						fputc(c, stdout);
					}
				}
			} else {
				fprintf(stderr, "invalid address %d\n", temp_reg1);
                abort();
			}
			pc++;
			break;
		}
	}
}

int yyerror(char* s)
{
	fprintf(stderr,"%d:%s\n",lineno,s);
	exit (-1);
}
