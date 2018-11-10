
#include "subc.h"
#include <stdlib.h>

//push scope at the scope stack
void push_scope(){
	scope_stack* temp = (scope_stack*)malloc(sizeof(scope_stack));
	temp->prev = sstop;
	temp->top = sstop->top;
}

//pop scope from the scope stack
void pop_scope(){
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

/* make declares */

decl* maketypedecl(int type){
	decl* temp = (decl*)malloc(sizeof(decl));	
	temp->declclass = _TYPE;
	temp->typeclass = type;
	return temp;
}



// for debugging
void debugst(){
	ste *temp = sstop->top;
	while(1){
		if(temp==NULL) break;
		if(temp->name!=NULL) 
			printf("%s\n", temp->name->name);
		temp = temp->prev;
	}
	printf("\n");

}
