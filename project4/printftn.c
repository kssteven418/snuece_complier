#include "subc.h"
#include "stdio.h"

void printStartUp(){
	P("\tshift_sp 1\n");
	P("\tpush_const EXIT\n");
	P("\tpush_reg fp\n");
	P("\tpush_reg sp \n");
	P("\tpop_reg fp\n");
	P("\tjump main\n");

	P("EXIT:\n");
	P("\texit\n");
}

void printGlobals(){
	P("Lglob.\tdata %d\n", sstop->size); 
}

void printRelEqu(int op){
	if(op==_LT)	P("\tless\n");
	if(op==_LTE) P("\tless_equal\n");
	if(op==_GT)	P("\tgreater\n");
	if(op==_GTE) P("\tgreater_equal\n");
	if(op==_EQ) P("\tequal\n");
	if(op==_NE) P("\tnot_equal\n");
}

void printArithmetic(int op){
	if(op==_PLUS) P("\tadd\n");
	if(op==_MINUS) P("\tsub\n");
}

void printLoadVar(decl* var){
	// loading global variable
	if(var->is_glob){
			P("\tpush_const Lglob+%d\n", var->offset);
	}
	// loading local variable
	// should be indexed from the frame pointer
	// so, load the frame pointer first
	else{
			P("\tpush_reg fp\n");
			P("\tpush_const %d\n", var->offset); // offset from the fp
			P("\tadd\n");
	}
}

void printLoadVarParam(decl* var){
	// loading global variable
	if(var->is_glob){
			P("\tpush_const Lglob+%d\n", var->offset);
	}
	// loading local variable
	// should be indexed from the frame pointer
	// so, load the frame pointer first
	else{

			P("\tpush_reg fp\n");
			P("\tpush_const -1\n"); // ret address
			P("\tadd\n");
			P("\tfetch\n"); // get the old fp
			
			P("\tpush_const %d\n", var->offset); // offset from the fp
			P("\tadd\n");
	}
}

void printIncDec(int isInc, int isOpFst){
	// stack top is address
	// ++a, --a
	if(isOpFst){
		P("\tpush_reg sp\n");
		P("\tfetch\n");
		P("\tpush_reg sp\n");
		P("\tfetch\n");
		// stack top : addr addr addr #
		P("\tfetch\n");
		// stack top : var addr #
		P("\tpush_const 1\n");
		if(isInc) P("\tadd\n");
		else P("\tsub\n");
		// stack top : var+1 addr addr #
		P("\tassign\n");
		// stack top : addr # and addr->var+1
	}

	// a++, a--
	else{
		P("\tpush_reg sp\n");
		P("\tfetch\n");
		P("\tpush_reg sp\n");
		P("\tfetch\n");
		// stack top : addr addr addr #
		P("\tfetch\n");
		// stack top : var addr #
		P("\tpush_const 1\n");
		if(isInc) P("\tadd\n");
		else P("\tsub\n");
		// stack top : var+1 addr addr #
		P("\tassign\n");
		// stack top : addr # and addr->var+1
		P("\tfetch\n");
		// stack top : var+1 #
		P("\tpush_const 1\n");
		if(isInc) P("\tsub\n");
		else P("\tadd\n");
		// stack top : var #
		
	}
}


void addrToVar(decl* var){
	
	// if variable, stack top is addr. of the variable
	// must fetch the value
	if(var->declclass==_VAR){
		if(var->type->typeclass != _STRUCT){
			P("\tfetch\n");
		}
		// in case of struct
		else{
		}
	}
}


void fetchStruct(decl* str){
	if(str->type->typeclass==_STRUCT){
			int size = str->size;
			P("\tshift_sp %d\n", (size-1));
			P("\tpush_reg sp\n");
			P("\tpush_const -%d\n", (size-1));
			P("\tadd\n");
			P("\tpush_reg sp\n");
			P("\tpush_const -%d\n", size);
			P("\tadd\n");
			P("\tfetch\n");

			printAssign(str);
			//printf("%d\n", str->size);
	}
}


void printAssignStruct(decl* str){
	int size = str->size;
	P("\tpush_reg sp\n");
	P("\tpush_const -%d\n", size+1);
	P("\tadd\n");
	P("\tfetch\n");
	P("\tpush_reg sp\n");
	P("\tpush_const -%d\n", size);
	P("\tadd\n");

	printAssign(str);

	P("\tshift_sp %d\n", size+1);
	
}


void printStack(){
	P("\tpush_const 77777\n");
	P("\twrite_int\n");

	P("\tpush_reg sp\n");
	P("\tpush_const 0\n");
	P("\tadd\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");
	P("\tpush_reg sp\n");
	P("\tpush_const 0\n");
	P("\tadd\n");
	P("\tfetch\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");

	P("\tpush_reg sp\n");
	P("\tpush_const -1\n");
	P("\tadd\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");
	P("\tpush_reg sp\n");
	P("\tpush_const -1\n");
	P("\tadd\n");
	P("\tfetch\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");

	P("\tpush_reg sp\n");
	P("\tpush_const -2\n");
	P("\tadd\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");
	P("\tpush_reg sp\n");
	P("\tpush_const -2\n");
	P("\tadd\n");
	P("\tfetch\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");

	P("\tpush_reg sp\n");
	P("\tpush_const -3\n");
	P("\tadd\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");
	P("\tpush_reg sp\n");
	P("\tpush_const -3\n");
	P("\tadd\n");
	P("\tfetch\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");

	P("\tpush_reg sp\n");
	P("\tpush_const -4\n");
	P("\tadd\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");
	P("\tpush_reg sp\n");
	P("\tpush_const -4\n");
	P("\tadd\n");
	P("\tfetch\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");

	P("\tpush_reg sp\n");
	P("\tpush_const -5\n");
	P("\tadd\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");
	P("\tpush_reg sp\n");
	P("\tpush_const -5\n");
	P("\tadd\n");
	P("\tfetch\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");

	P("\tpush_reg sp\n");
	P("\tpush_const -6\n");
	P("\tadd\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");
	P("\tpush_reg sp\n");
	P("\tpush_const -6\n");
	P("\tadd\n");
	P("\tfetch\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");

	P("\tpush_reg sp\n");
	P("\tpush_const -7\n");
	P("\tadd\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");
	P("\tpush_reg sp\n");
	P("\tpush_const -7\n");
	P("\tadd\n");
	P("\tfetch\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");

	P("\tpush_reg sp\n");
	P("\tpush_const -8\n");
	P("\tadd\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");
	P("\tpush_reg sp\n");
	P("\tpush_const -8\n");
	P("\tadd\n");
	P("\tfetch\n");
	P("\twrite_int\n");
	P("\tpush_const 1000\n");
	P("\twrite_int\n");


}

void printAssign(decl* var){

		//printStack();
		
		decl* temp = copy(var);
		temp->is_expanded = 0;

		if(var->is_expanded){
				printAssignStruct(temp);
				return;
		}

		// assigning value
		// stack top : var addr #
		if(var->type->typeclass != _STRUCT &&
						var->type->typeclass != _ARRAY){
			P("\tassign\n");
		}
		// assigning array
		// stack top : addr_src addr_dest #
		else if(var->type->typeclass == _ARRAY){
			decl* elmt = var->type->elementvar;
			int num_index = var->type->num_index;
			int var_size = elmt->size;

			for(int i=0; i<num_index; i++){
				P("\tpush_reg sp\n");
				P("\tpush_const -1\n");
				P("\tadd\n");
				P("\tfetch\n");
				// addr_dest addr_src addr_dest#
				P("\tpush_const %d\n", i*var_size);
				P("\tadd\n");
				// addr_dest+i addr_src addr_dest#
				P("\tpush_reg sp\n");
				P("\tpush_const -1\n");
				P("\tadd\n");
				P("\tfetch\n");
				// addr_src addr_dest+i addr_src addr_dest#
				P("\tpush_const %d\n", i*var_size);
				P("\tadd\n");
				// addr_src+1 addr_dest+i addr_src addr_dest#
				addrToVar(elmt);
				printAssign(elmt);
			}
			// pop out src and dest addresses
			P("\tshift_sp -2\n");
		}

		// assigning struct
		// stack top : addr_src addr_dest #
		else{
			//printf("THIS IS STACK\n");
			ste* field = var->type->fields;
			while(field!=NULL && field->decl!=NULL){
				decl* elmt = field->decl;
				int offset = field->decl->offset;
				P("\tpush_reg sp\n");
				P("\tpush_const -1\n");
				P("\tadd\n");
				P("\tfetch\n");
				// addr_dest addr_src addr_dest#
				P("\tpush_const %d\n", offset);
				P("\tadd\n");
				// addr_dest+i addr_src addr_dest#
				P("\tpush_reg sp\n");
				P("\tpush_const -1\n");
				P("\tadd\n");
				P("\tfetch\n");
				// addr_src addr_dest+i addr_src addr_dest#
				P("\tpush_const %d\n", offset);
				P("\tadd\n");
				// addr_src+1 addr_dest+i addr_src addr_dest#
				addrToVar(elmt);
				printAssign(elmt);
				field = field->prev;
			}
			// pop out src and dest addresses
			P("\tshift_sp -2\n");
			//printf("THIS IS STACK DONE\n");
			//printStack();
		}
}

void printFetchPtr(decl* var){
	// if the stack top is exp 
	// e.g. *(&a)
	if(var->declclass == _EXP){
		/* stack top itself is the location */
	}
	
	// otherwise, stack top is the variable(unary) addr
	// e.g. *p
	else{
		/* fetch location from the stack top variable */
		P("\tfetch\n");
	}
}

void moveSP(int n){
		if(n!=0){
			P("\tshift_sp %d\n", n);
		}
}


// post processing after expression ended
void afterExpr(decl* expr){
		if(expr!=NULL){
			addrToVar(expr);
			if(expr->type->typeclass==_STRUCT 
							&& expr->is_expanded){
					moveSP(-expr->size);
			}
			else{
				moveSP(-1);
			}
		}
}


