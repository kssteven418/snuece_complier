/******************************************************
 * File Name   : subc.h
 * Description
 *    This is a header file for the subc program.
 ******************************************************/

#ifndef __SUBC_H__
#define __SUBC_H__

#include <stdio.h>
#include <strings.h>

// decl classes
#define _VAR 0
#define _CONST 1
#define _FUNC 2
#define _TYPE 3

// type classes
#define _VOID 0
#define _INT 1
#define _CHAR 2
#define _STRING 3
#define _ARRAY 4
#define _STRUCT 5
#define _POINTER 6

/* structure for ID */
typedef struct id {
      char *name;
      int lextype;
} id;

typedef struct ste{
	struct id *name;
	struct decl *decl;
	struct ste *prev;
} ste;

typedef struct decl{
	/* ALL */
	int declclass;
	
	/* VAR, CONST */
	struct decl *type;
	
	/* CONST */
	int value;
	
	/* FUNC */
	struct ste *formals; // arguments
	struct decl *returntype; 
	
	/* TYPE */
	int typeclass;
	struct decl *elementvar; // ARRAY, pointer to VAR decl
	int num_index;  // ARRAY, # of elements
	struct ste *fieldlist; // STRUCT, pointer to field list
	struct decl *ptrto; // POINTER, type of the pointer
	
	/* ALL */
	int size; // size in byte

	/* VAR */
	struct ste **scope; // scope when VAR declared

	struct decl* next;
} decl;

//scope stack element
typedef struct scope_stack{
	struct scope_stack *prev; // for pop operation
	struct ste *top; // top of the ste
} scope_stack;

scope_stack *sstop;


/* For hash table */
unsigned hash(char *name);
struct id *enter(int lextype, char *name, int length);
struct id *lookup(char *name);

int read_line();


/* functions */
/* defined in functions.c */

void push_scope();
void pop_scope();
void declare(id* name, decl* decl);

decl* maketypedecl(int type);
void makeconstdecl();
void makevardecl();

void debugst();

#endif

