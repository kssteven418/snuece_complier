/******************************************************
 * File Name   : subc.h
 * Description
 *    This is a header file for the subc program.
 ******************************************************/

#ifndef __SUBC_H__
#define __SUBC_H__

#include <stdio.h>
#include <strings.h>

#define P printf

// decl classes
#define _VAR 0
#define _CONST 1
#define _FUNC 2
#define _TYPE 3
#define _EXP 4
#define _NULL 5

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

/* ARITHMETIC */
#define _PLUS 0
#define _MINUS 1

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
	struct ste *returntype; 
	
	/* TYPE */
	int typeclass;
	struct decl *elementvar; // ARRAY, pointer to VAR decl
	int num_index;  // ARRAY, # of elements
	struct ste *fields; // STRUCT, pointer to field list
	struct decl *ptrto; // POINTER, type of the pointer
	
	/* ALL */
	int size; // size in byte
	int offset; // offset from the gp or fp
	int is_glob;

	/* VAR */
	struct ste **scope; // scope when VAR declared

	struct decl* next;
} decl;

//scope stack element
typedef struct scope_stack{
	struct scope_stack *prev; // for pop operation
	struct ste *top; // top of the ste
	int size; // size of all declarations in the given scope
} scope_stack;

scope_stack *sstop;
scope_stack *global_scope;
ste *globaldef;
decl *null;
decl *voidtype;
decl *inttype;
decl *chartype;
id* returnid;
id* ftn_name;

decl * ftn_type;
decl * ftn_type_glob;


/* For hash table */
unsigned hash(char *name);
struct id *enter(int lextype, char *name, int length);
struct id *lookup(char *name);
int strCompare_no_len(char* x, char* y);

// file and line info
char *filename;
int read_line();


/* functions */
/* defined in functions.c */

void* raise(char* errormsg);
decl* copy(decl* org);
ste* copy_ste(ste* ste);

void push_scope();
ste* pop_scope();
void push_stelist(ste* stelist);
void declare(id* name, decl* decl);
void declare_struct_type(id* name, decl* decl);
ste* find(id* name);
ste* find_current_scope(id* name);
ste* find_field(ste* fields, id* name);

decl* maketypedecl(int type);
decl* makevardecl(decl* type_decl);
decl* makeconstdecl(decl* type_decl);
decl* makeptrdecl(decl* type_decl);
decl* makearraydecl(int size, decl* var_decl);
decl* makestructdecl(ste* fields);
decl* makeprocdecl();
decl* setprocdecl(decl* func, ste* formals);

id* find_id(decl* _decl);
void debugst(ste* st);


/* functions in subc.y */
decl* define_normal(decl* type_decl, int is_ptr, id* id_decl);
decl* define_array(decl* type_decl, int is_ptr, id* id_decl, decl* const_expr);
decl* define_function_no_param(decl* type_decl, int is_ptr, id* id_decl);
decl* connect_defs(decl* def_list, decl* def);


/* check functions */
/* defined in check.c */
int	check_is_declared(id* name, int for_current);
int check_type_compat(decl* x, decl* y, int arr_to_ptr);
int check_is_var(decl* x, int incl_expr);
int check_is_const(decl* x);
int check_is_const_var(decl* x, int incl_expr);
int check_is_pointer(decl* x);
int check_is_array(decl* x);
int check_is_struct(decl* x);
int check_is_struct_type(decl* x);
int check_is_proc(decl* f);

int check_function_call(decl* func, decl* args);
decl* check_struct_type(decl* type_decl);
decl* check_function(decl* func_decl);

int check_inc_dec(decl* src, decl* dest);
int check_add_sub(decl* x, decl* y, decl* dest);
int check_rel_equ(decl* x, decl* y, decl* dest, int op);
int check_and_or(decl* x, decl* y, decl* dest);


/* print functions */
/* defined in printftn.c */
void printStartUp();
void printGlobals();
void printRelEqu(int op);
void printArithmetic(int op);
void printLoadVar(decl* var);

void addrToVar(decl* decl);
void printAssign();
void moveSP(int n);
void afterExpr(decl* expr);

#endif

