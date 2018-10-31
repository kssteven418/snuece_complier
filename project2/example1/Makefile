#
# This is a makefile for the skeleton program for project 2.
#

CC = gcc
LEX = flex
YACC = bison
COMPILE_OPTION = -g
LINK_OPTION = -lfl
YACC_OPTION = -vd

all : example

clean :
	rm -f *.o lex.yy.c example.tab.c example.tab.h example.output example

example : lex.yy.o example.tab.o
	${CC} -o example lex.yy.o example.tab.o ${LINK_OPTION}

example.tab.o : example.tab.c 
	${CC} -c ${COMPILE_OPTION} example.tab.c

lex.yy.o : lex.yy.c example.tab.h 
	${CC} -c ${COMPILE_OPTION} lex.yy.c

lex.yy.c : example.l
	${LEX} example.l

example.tab.h example.tab.c : example.y
	${YACC} ${YACC_OPTION} example.y

