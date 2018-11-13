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
#define _EXP 4

// type classes
#define _VOID 0
#define _INT 1
#define _CHAR 2
#define _STRING 3
#define _ARRAY 4
#define _STRUCT 5
#define _POINTER 6

/* RELOP, EQUOP */
#define _LT 0
#define _LTE 1
#define _GT 2
#define _GTE 3
#define _EQ 4
#define _NE 5

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
	int int_value;
	char char_value;
	
	/* FUNC */
	struct ste *formals; // arguments
	struct decl *returntype; 
	
	/* TYPE */
	int typeclass;
	struct decl *elementvar; // ARRAY, pointer to VAR decl
	int num_index;  // ARRAY, # of elements
	struct ste *fields; // STRUCT, pointer to field list
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
decl *voidtype;
decl *inttype;
decl *chartype;

/* For hash table */
unsigned hash(char *name);
struct id *enter(int lextype, char *name, int length);
struct id *lookup(char *name);

// file and line info
char *filename;
int read_line();


/* functions */
/* defined in functions.c */

void* raise(char* errormsg);
decl* copy(decl* org);

void push_scope();
ste* pop_scope();
void declare(id* name, decl* decl);
ste* find(id* name);
ste* find_current_scope(id* name);

decl* maketypedecl(int type);
decl* makevardecl(decl* type_decl);
decl* makeconstdecl(decl* type_decl);
decl* makeptrdecl(decl* type_decl);
decl* makearraydecl(int size, decl* var_decl);
decl* makestructdecl(ste* fields);


void debugst(ste* st);

/* functions in subc.y */

int	check_is_declared(id* name);
int check_type_compat(decl* x, decl* y);
int check_is_var(decl* x, int incl_expr);
int check_is_const(decl* x);
int check_is_const_var(decl* x, int incl_expr);
int check_is_pointer(decl* x);
int check_is_array(decl* x);
int check_inc_dec(decl* src, decl* dest);
int check_add_sub(decl* x, decl* y, decl* dest);
int check_rel_equ(decl* x, decl* y, decl* dest, int op);
int check_and_or(decl* x, decl* y, decl* dest);

#endif

