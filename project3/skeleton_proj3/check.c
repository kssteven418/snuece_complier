#include "subc.h"
#include <stdio.h>


// check functions

int check_is_declared(id* name, int for_current){
	if(name==NULL) return 0;
	ste* temp;
	// find in current scope only
	if(for_current){
		temp = find_current_scope(name); 
	}
	//find in every scope
	else{
		temp = find(name);
	}
	if (temp==NULL) return 0;
	else return 1;
}

int check_type_compat(decl* x, decl* y){
	if(x==NULL) return 0;
	if(y==NULL) return 0;
	return x==y;
}

int check_is_var(decl* x, int incl_expr){
	if(x==NULL) return 0;
	return (x->declclass==_VAR) 
			|| (incl_expr && (x->declclass==_EXP));
}

int check_is_const(decl* x){
	if(x==NULL) return 0;
	decl* type = x->type;
	if(type==NULL) return 0;
	return (x->declclass==_CONST) && (type==inttype || type==chartype);
}

int check_is_const_var(decl* x, int incl_expr){
	if(x==NULL) return 0;
	decl* type = x->type;
	return (x->declclass==_VAR) 
			|| ((x->declclass==_CONST) && (type==inttype || type==chartype))
			|| (incl_expr && (x->declclass==_EXP));
}

int check_is_pointer(decl* x){
	if(x==NULL) return 0;
	decl* type = x->type;
	if(type==NULL) return 0;
	return type->typeclass==_POINTER;
}

int check_is_array(decl* x){
	if(x==NULL) return 0;
	decl* type = x->type;
	if(type==NULL) return 0;
	return (x->declclass==_CONST) && (type->typeclass==_ARRAY);
}

int check_is_struct(decl* x){
	if(x==NULL) return 0;
	decl* type = x->type;
	if(type==NULL) return 0;
	return (type->typeclass==_STRUCT);
}

// for INCOP and DECOP
int check_inc_dec(decl* src, decl* dest){
	if(src==NULL){
			dest = NULL;
			return 0;
	}
	// unary must be a INT or a CHAR
	else if (!check_type_compat(src->type, inttype)
					&& !check_type_compat(src->type, chartype)){
		dest = raise("not int or char type");
		return 0;
	}
	
	// unary must be a variable
	else if(!check_is_var(src, 0)){
		dest = raise("not variable");
		return 0;
	}
	return 1;
}

// for binary add/sub operations
int check_add_sub(decl* x, decl* y, decl* dest){
	if(x==NULL){
			dest = NULL;
			return 0;
	}
	if(y==NULL){
			dest = NULL;
			return 0;
	}

	// operands(x, y) should be INT
	if(!check_type_compat(x->type, inttype)){
		dest = raise("not int type");
		return 0;
	}
	if(!check_type_compat(y->type, inttype)){
		dest = raise("not int type");
		return 0;
	}

	// operands should be computable : should have same types
	if(!check_type_compat(x->type, y->type)){
		dest = raise("not computable");
		return 0;
	}
	return 1;
}

// for binary rel/equ operations
// op==0 for rel, 1 for equ
int check_rel_equ(decl* x, decl* y, decl* dest, int op){
	if(x==NULL){
		dest = NULL;
		return 0;
	}
	if(y==NULL){
		dest = NULL;
		return 0;
	}
	//for equ operation, pointer operation is possible
	if(op && check_is_pointer(x)){
		// if both operands are pointer, than comparable
		if(check_is_pointer(y)) return 1;
		// otherwise, not comparable
		dest = raise("not comparable");
		return 0;
	}

	//otherwise, both operands should be INT or CHAR
	if(!check_type_compat(x->type, inttype) 
					&& !check_type_compat(x->type, chartype)){
		dest = raise("not int or char type"); 
		return 0;
	}
	if(!check_type_compat(y->type, inttype) 
					&& !check_type_compat(y->type, chartype)){
		dest = raise("not int or char type"); 
		return 0;
	}

	// operands should be computable : should have same types
	if(!check_type_compat(x->type, y->type)){
		dest = raise("not comparable");
		return 0;
	}

	return 1;
}

// for and/or operations
int check_and_or(decl* x, decl* y, decl* dest){
		if(x==NULL) {
			dest = NULL;
			return 0;
		}
		if(y==NULL){
			dest = NULL;
			return 0;
		}

		//and_list and binary should be both int		
		else if(!check_type_compat(x->type, inttype)
						|| !check_type_compat(y->type, inttype)){
			dest = raise("not int type");
			return 0;
		}

		return 1;
}
