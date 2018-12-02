/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 72 "gram.y" /* yacc.c:1909  */

	int intVal;
	char* stringVal;
	id_ptr id;

	struct instr_node* instr;
	struct operand* operand;

#line 106 "gram.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAM_TAB_H_INCLUDED  */
