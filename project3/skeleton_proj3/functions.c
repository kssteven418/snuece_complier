
#include "subc.h"
#include <stdlib.h>
#include <string.h> 

void* raise(char* errormsg){
	printf("%s:%d: error:%s\n", filename, read_line(), errormsg);
	return NULL;
}

decl* copy(decl* org){
	decl* copy = (decl*)malloc(sizeof(decl));
	memcpy(copy, org, sizeof(decl));
	return copy;
}

ste* copy_ste(ste* s){
	ste* copy = (ste*)malloc(sizeof(ste));
	memcpy(copy, s, sizeof(ste));
	return copy;
}

//push scope at the scope stack
void push_scope(){
	scope_stack* temp = (scope_stack*)malloc(sizeof(scope_stack));
	temp->prev = sstop;
	temp->top = sstop->top;
	sstop = temp;
}

//pop scope from the scope stack
ste* pop_scope(){
	
	ste* from = sstop->top;
	ste* to = sstop->prev->top;
	ste* temp;

	ste* outstack = (ste*)malloc(sizeof(ste));
	outstack->prev = NULL;

	while(1){
		if(from == to) break;
		// append to outstack
		temp = from->prev;
		from->prev = outstack;
		outstack = from;
		from = temp;
	}

	sstop = sstop->prev;

	return outstack;
}

//push stelist to the current stack
void push_stelist(ste* stelist){
	if(stelist==NULL) return;

	ste* temp = stelist;
	while(1){
		if(temp->prev == NULL) break; // dummy
		ste* copy = copy_ste(temp);
		copy->prev = sstop->top;
		sstop->top = copy;
		temp = temp->prev;
	}

}

//insert declare into the symbol table
void declare(id* name, decl* decl){
	// make a new ste
	ste* temp = (ste*)malloc(sizeof(ste));
	temp->decl = decl;
	temp->name = name;
	temp->prev = sstop->top;

	// modify scopestack
	sstop->top = temp;
}

//insert declare of struct type
//must be global, so insert at the bottom-most entry
void declare_struct_type(id* name, decl* decl){
	// make a new ste
	ste* temp = (ste*)malloc(sizeof(ste));
	temp->decl = decl;
	temp->name = name;

	temp->prev = globaldef->prev;
	globaldef->prev = temp;

	// modify globaldef
	globaldef = temp;
}

//find symbol table entry by given id
ste* find(id* name){
	ste* temp = sstop->top;
	while(1){
		if(temp->prev == NULL) return NULL;
		if(temp->name == name) return temp;
		else temp = temp->prev;
	}
}

ste* find_current_scope(id* name){
	ste* temp = sstop->top;
	ste* bottom = sstop->prev->top;
	while(1){
		if(temp==bottom) return NULL; // out of scope
		if(temp->name == name) return temp;
		else temp = temp->prev;
	}
}

//find symbol table entry at the given fields
ste* find_field(ste* fields, id* name){
	ste* temp = fields;
	while(1){
		if(temp->prev == NULL) return NULL;
		if(temp->name == name) return temp;
		else temp = temp->prev;
	}
}

/* make declares */

decl* maketypedecl(int type){
	decl* temp = (decl*)malloc(sizeof(decl));	
	temp->declclass = _TYPE;
	temp->typeclass = type;
	return temp;
}

decl* makevardecl(decl* type_decl){
	decl* temp = (decl*)malloc(sizeof(decl));
	temp->declclass = _VAR;
	temp->type = type_decl;
	return temp;

}

decl* makeconstdecl(decl* type_decl){
	decl* temp = (decl*)malloc(sizeof(decl));
	temp->declclass = _CONST;
	temp->type = type_decl;
	return temp;
}

decl* makeptrdecl(decl* type_decl){
	//p. 31
	decl* var = (decl*)malloc(sizeof(decl));
	decl* type = (decl*)malloc(sizeof(decl));

	// variable decl
	var->declclass = _VAR;
	var->type = type;

	// type decl : pointer
	type->declclass = _TYPE;
	type->typeclass = _POINTER;
	type->ptrto = type_decl;
	return var;
}

decl* makearraydecl(int size, decl* var_decl){
	decl* cons = (decl*)malloc(sizeof(decl));
	decl* type = (decl*)malloc(sizeof(decl));

	// constant decl
	cons->declclass = _CONST;
	cons->type = type;
	
	// type decl : array
	type->declclass = _TYPE;
	type->typeclass = _ARRAY;
	type->elementvar = var_decl;
	type->size = size;
	return cons;
}

decl* makestructdecl(ste* fields){
	decl* type = (decl*)malloc(sizeof(decl));
	type->declclass = _TYPE;
	type->typeclass= _STRUCT;
	type->fields = fields;
	return type;
	
}

decl* makeprocdecl(){
	decl* func = (decl*)malloc(sizeof(decl));
	func->declclass = _FUNC;
	return func;
}

decl* setprocdecl(decl* func, ste* formals){
	if(func==NULL) return NULL;
	if(formals==NULL) return NULL;

	func->formals = formals->prev;
	func->returntype = formals;

	return func;

}


// for debugging
void debugst(ste* st){
	ste *temp = st;
	while(1){
		if(temp==NULL) break;
		if(temp->name!=NULL) 
			printf("%s\n", temp->name->name);
		temp = temp->prev;
	}
	printf("\n");

}

