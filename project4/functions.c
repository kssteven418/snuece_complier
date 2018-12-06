
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
		if(copy->decl != NULL) {
			// parameter is allocated
			// only if variable or (const)array
			if(copy->decl->declclass==_VAR 
				 || (copy->decl->declclass==_CONST
							&&copy->decl->type->typeclass==_ARRAY)){
				sstop->size += copy->decl->size; 
			}
		}
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

	// only if integer or array
	if(decl->declclass==_VAR || 
			(decl->declclass==_CONST && decl->type->typeclass==_ARRAY)){
		// set the global decl's offset
		decl->offset = sstop->size;
		// add the decl's size to the scope size
		sstop->size += decl->size;
		// DEBUG
		//printf("offset : %d, sstop size : %d, isglob : %d\n",
		//		decl->offset, sstop->size, decl->is_glob);
	}
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
	temp->size = 1;
	return temp;
}

decl* makevardecl(decl* type_decl){
	decl* temp = (decl*)malloc(sizeof(decl));
	temp->declclass = _VAR;
	temp->type = type_decl;
	temp->size = type_decl->size;
	if (sstop==global_scope){
		temp->is_glob = 1;
	}
	else{
		temp->is_glob = 0;
	}
	return temp;

}

decl* makeconstdecl(decl* type_decl){
	decl* temp = (decl*)malloc(sizeof(decl));
	temp->declclass = _CONST;
	temp->type = type_decl;
	temp->size = 1;
	return temp;
}

decl* makeptrdecl(decl* type_decl){
	//p. 31
	decl* var = (decl*)malloc(sizeof(decl));
	decl* type = (decl*)malloc(sizeof(decl));

	// variable decl
	var->declclass = _VAR;
	var->type = type;
	var->size = 1;
	if (sstop==global_scope){
		var->is_glob = 1;
	}
	else{
		var->is_glob = 0;
	}

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

	type->num_index = size;
	int var_size = var_decl->size;
	// total array size 
	// = var_size (elmt size : canbe non-1 value if struct array!
	//   * size (the number of elements)
	cons->size = var_size * size; 
	if (sstop==global_scope){
		cons->is_glob = 1;
	}
	else{
		cons->is_glob = 0;
	}
	return cons;
}

decl* makestructdecl(ste* fields){
	decl* type = (decl*)malloc(sizeof(decl));
	type->declclass = _TYPE;
	type->typeclass= _STRUCT;
	type->fields = fields;
	
	// get the size of fields
	ste* iter = fields;
	int size = 0;
	while(iter!=NULL){
		if(iter->decl != NULL){
			size += iter->decl->size;
		}
		iter = iter->prev;
	}

	type->size = size; // TODO
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


// definition of normal expressions
// (int x, int *x, struct temp x, struct temp *x)
// push entry into the symbol table and return its 
decl* define_normal(decl* type_decl, int is_ptr, id* id_decl){

	//type undefined
	if(type_decl==NULL) return NULL; 

	//id parsing error
	if(id_decl==NULL) return NULL;
	
	// id should not be 'NULL'
	if(strCompare_no_len(id_decl->name, "NULL")){
		return raise("unqualified id");
	}

	// id_decl : variable name

	// ID must not be declared in the current scope
	if (check_is_declared(id_decl, 1)){
		return raise("redeclared");	
	}

	decl* temp;
	
	if(is_ptr) temp = makeptrdecl(type_decl);
	else temp = makevardecl(type_decl);

	declare(id_decl, temp);
	return temp;

}

// definition of array expressions
// (int x[1], int *x[1], struct temp x[1], struct temp *x[1])
decl* define_array(decl* type_decl, int is_ptr, id* id_decl, decl* const_expr){

	//type undefined
	if(type_decl==NULL) return NULL; 

	//id parsing error
	if(id_decl==NULL) return NULL;
	
	//error in constant definition
	if(const_expr==NULL) return NULL;
	
	// id should not be 'NULL'
	if(strCompare_no_len(id_decl->name, "NULL")){
		return raise("unqualified id");
	}


	//index must be an integer
	//ASSERTED : const_expr is a constant
	if(!check_type_compat(const_expr->type, inttype, 0)){
		return raise("not int type"); // could have been a constant array!
	}

	// ID must not be declared in the current scope
	if (check_is_declared(id_decl, 1)){
		return raise("redeclared");	
	}

	decl* var_decl;
	
	if(is_ptr) var_decl = makeptrdecl(type_decl);
	else var_decl = makevardecl(type_decl);

	decl* temp = makearraydecl(const_expr->int_value, var_decl);

	declare(id_decl, temp);
	
	return temp;
}

decl* define_function_no_param(decl* type_decl, int is_ptr, id* id_decl){
	if(type_decl==NULL) {
			push_scope(); // scope for unnecessary func body
			return NULL;
	}
	if(id_decl==NULL){
			push_scope(); // scope for unnecessary func body
			return NULL;
	}

	// id should not be 'NULL'
	if(strCompare_no_len(id_decl->name, "NULL")){
			push_scope();
			return raise("unqualified id");
	}

	// function name must have not defined before
	if (check_is_declared(id_decl, 1)){
		push_scope(); // scope for unnecessary func body
		return raise("redeclared");
	}

	decl* func = makeprocdecl();
	declare(id_decl, func);
	push_scope();

	decl* returntype;

	// if pointer, encapsule type_specifier into ptr type decl
	if(is_ptr){
		returntype = (decl*)malloc(sizeof(decl));
		returntype->declclass = _TYPE;
		returntype->typeclass = _POINTER;
		returntype->ptrto = type_decl;
	}
	else{
		returntype = type_decl;
	}
	declare(returnid, returntype);

	// pop out the fake scope
	ste* formals = pop_scope();
	// set returntype and formals information of the function
	setprocdecl(func, formals);
	// new scope for local declarations and formals
	push_scope();
	// enter all the formal variables into the stack
	push_stelist(formals);
	
	return func;

}

decl* connect_defs(decl* def_list, decl* def){
	if(def==NULL) return NULL;

	//connect def->def_list, def_list might be a null value
	def->next = def_list;
	return def;
}

id* find_id(decl* _decl){
	ste* temp = sstop->top;
	decl* dtemp = NULL;

	while(temp!=NULL){
		dtemp = temp->decl;
		if(dtemp!=NULL){
			if(dtemp==_decl){
				return temp->name;
			}
		}
		temp = temp->prev;
	}
	return NULL;
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

