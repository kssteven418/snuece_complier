
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

//push scope at the scope stack
void push_scope(){
	scope_stack* temp = (scope_stack*)malloc(sizeof(scope_stack));
	temp->prev = sstop;
	temp->top = sstop->top;
	sstop = temp;
}

//pop scope from the scope stack
ste* pop_scope(){
	/*
	ste* from = sstop->top;
	ste* to = sstop->prev->top;
	ste* temp = from;
	while(1){
		if(from==to) break;
		temp = from;
		from = from->prev;
		free(temp);
	}
	scope_stack* sstemp = sstop;
	sstop = sstop->prev;
	free(sstemp);
	*/
	
	ste* from = sstop->top;
	ste* to = sstop->prev->top;
	while(1){
		if(from->prev == to) break;
		from = from->prev;
	}
	
	//make dummy node for the output stack table
	ste* dummy = (ste*)malloc(sizeof(ste));
	dummy->prev = NULL;
	from->prev = dummy;

	from = sstop->top; // stack top to return
	sstop = sstop->prev;

	return from;
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

