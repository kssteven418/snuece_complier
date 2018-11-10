
#include "subc.h"
#include <stdlib.h>

void push_scope(){
	scope_stack* temp = (scope_stack*)malloc(sizeof(scope_stack));
	temp->prev = sstop;
	temp->top = sstop->top;
}

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

void insert(id* name, decl* decl){
	// make a new ste
	ste* temp = (ste*)malloc(sizeof(ste));
	temp->decl = decl;
	temp->name = name;
	temp->prev = sstop->top;

	// modify scopestack
	sstop->top = temp;
}
