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

int check_type_compat(decl* x, decl* y, int arr_to_ptr){
	if(x==NULL) return 0;
	if(y==NULL) return 0;
	if (x==y) return 1;

	// if ptr = arr decl is possible
	// x : ptr, y : array
	if (arr_to_ptr){
			if (x->typeclass == _POINTER && y->typeclass == _ARRAY){
				return check_type_compat(x->ptrto, y->elementvar->type, 0);
			}
	}
	
	if (x->typeclass != y->typeclass) return 0;
	
	// both are pointers
	if(x->typeclass == _POINTER){
		return check_type_compat(x->ptrto, y->ptrto, 0); 
	}

	if(x->typeclass == _ARRAY){
		return check_type_compat(x->elementvar->type, y->elementvar->type, 0);
	}

	// assume that this function is not called
	// in case of both are array
	return 0;
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

int check_is_struct_type(decl* x){
	if(x==NULL) return 0;
	return (x->typeclass==_STRUCT);
}

int check_is_proc(decl* f){
	if(f==NULL) return 0;
	return (f->declclass==_FUNC);
}


int check_function_call(decl* func, decl* args){
	if(func==NULL) return 0;
	ste* formals = func->formals;

	// 1. no passing arguments i.e. func()
	if (args == NULL){
		return (formals->prev==NULL);
	}
	
	// 2. passing argument i.e. func(1, 2)
	else{
		while(formals->prev != NULL && args != NULL){
			// type check b/w param and arg
			if(!check_type_compat(formals->decl->type, args->type, 1)){
				return 0;
			}
			formals = formals->prev;
			args = args->next;
		}
	
		// if # param != # args
		if(formals->prev != NULL || args != NULL){
			return 0;
		}
			
		return 1;
	}
}

decl* check_struct_type(decl* type_decl){
	if(type_decl == NULL) return NULL;

	// type-only component, then should be a struct type
	// int; void; ... are not allowed!

	if(!check_is_struct_type(type_decl)){
		return raise("not struct type"); // TODO : error message??
	}
	else{
		return type_decl;
	}

}

decl* check_function(decl* func_decl){
		if(func_decl == NULL) return NULL;
		return func_decl;
}


// for INCOP and DECOP
int check_inc_dec(decl* src, decl* dest){
	if(src==NULL){
			dest = NULL;
			return 0;
	}
	// unary must be a INT or a CHAR
	else if (!check_type_compat(src->type, inttype, 0)
					&& !check_type_compat(src->type, chartype, 0)
					&& src->type->typeclass != _POINTER){
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
	if(x->type==NULL){
			dest = NULL;
			return 0;
	}

	// operands(x, y) should be INT
	if(!check_type_compat(x->type, inttype, 0)
					&& x->type->typeclass!=_POINTER){
		dest = raise("not int type");
		return 0;
	}
	if(!check_type_compat(y->type, inttype, 0)){
		dest = raise("not int type");
		return 0;
	}

	// operands should be computable : should have same types
	/*
	if(!check_type_compat(x->type, y->type, 0)){
		dest = raise("not computable");
		return 0;
	}
	*/
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
		if(check_is_pointer(y)) 
				if(check_type_compat(x->type, y->type, 0))
						return 1;
		// otherwise, not comparable
		dest = raise("not comparable");
		return 0;
	}

	//otherwise, both operands should be INT or CHAR
	if(!check_type_compat(x->type, inttype, 0) 
					&& !check_type_compat(x->type, chartype, 0)){
		dest = raise("not int or char type"); 
		return 0;
	}
	if(!check_type_compat(y->type, inttype, 0) 
					&& !check_type_compat(y->type, chartype, 0)){
		dest = raise("not int or char type"); 
		return 0;
	}

	// operands should be computable : should have same types
	if(!check_type_compat(x->type, y->type, 0)){
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
		else if(!check_type_compat(x->type, inttype, 0)
						|| !check_type_compat(y->type, inttype, 0)){
			dest = raise("not int type");
			return 0;
		}

		return 1;
}
