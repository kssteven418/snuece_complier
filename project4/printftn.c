#include "subc.h"
#include "stdio.h"

void printStartUp(){
	fprintf(fp, "\tshift_sp 2\n");
	fprintf(fp, "\tpush_const EXIT\n");
	fprintf(fp, "\tpush_reg fp\n");
	fprintf(fp, "\tpush_reg sp \n");
	fprintf(fp, "\tpop_reg fp\n");
	fprintf(fp, "\tjump main\n");

	fprintf(fp, "EXIT:\n");
	fprintf(fp, "\texit\n");
}

void printGlobals(){
	fprintf(fp, "Lglob.\tdata %d\n", sstop->size); 
}

void printRelEqu(int op){
	if(op==_LT)	fprintf(fp, "\tless\n");
	if(op==_LTE) fprintf(fp, "\tless_equal\n");
	if(op==_GT)	fprintf(fp, "\tgreater\n");
	if(op==_GTE) fprintf(fp, "\tgreater_equal\n");
	if(op==_EQ) fprintf(fp, "\tequal\n");
	if(op==_NE) fprintf(fp, "\tnot_equal\n");
}

void printArithmetic(int op, decl* var){
	if(var->type->typeclass == _POINTER){
		if(var->type->ptrto!=NULL){
			fprintf(fp, "\tpush_const %d\n", var->type->ptrto->size);
			fprintf(fp, "\tmul\n");
		}
	}
	if(op==_PLUS) fprintf(fp, "\tadd\n");
	if(op==_MINUS) fprintf(fp, "\tsub\n");
}

void printLoadVar(decl* var){
	// loading global variable
	if(var->is_glob){
			fprintf(fp, "\tpush_const Lglob+%d\n", var->offset);
	}
	// loading local variable
	// should be indexed from the frame pointer
	// so, load the frame pointer first
	else{
			fprintf(fp, "\tpush_reg fp\n");
			fprintf(fp, "\tpush_const %d\n", var->offset); // offset from the fp
			fprintf(fp, "\tadd\n");
	}
}

void printLoadVarParam(decl* var){
	// loading global variable
	if(var->is_glob){
			fprintf(fp, "\tpush_const Lglob+%d\n", var->offset);
	}
	// loading local variable
	// should be indexed from the frame pointer
	// so, load the frame pointer first
	else{

			fprintf(fp, "\tpush_reg fp\n");
			fprintf(fp, "\tpush_const -1\n"); // ret address
			fprintf(fp, "\tadd\n");
			fprintf(fp, "\tfetch\n"); // get the old fp
			
			fprintf(fp, "\tpush_const %d\n", var->offset); // offset from the fp
			fprintf(fp, "\tadd\n");
	}
}

void printIncDec(int isInc, int isOpFst, decl* var){
	// stack top is address
	// ++a, --a
	int is_ptr = 0;
	int size = 1;
	if(var->type->typeclass == _POINTER){
		if(var->type->ptrto!=NULL){
			is_ptr = 1;
			size =  var->type->ptrto->size;
		}
	}
	if(isOpFst){
		fprintf(fp, "\tpush_reg sp\n");
		fprintf(fp, "\tfetch\n");
		fprintf(fp, "\tpush_reg sp\n");
		fprintf(fp, "\tfetch\n");
		// stack top : addr addr addr #
		fprintf(fp, "\tfetch\n");
		// stack top : var addr #
		fprintf(fp, "\tpush_const %d\n", size);
		if(isInc) fprintf(fp, "\tadd\n");
		else fprintf(fp, "\tsub\n");
		// stack top : var+1 addr addr #
		fprintf(fp, "\tassign\n");
		// stack top : addr # and addr->var+1
	}

	// a++, a--
	else{
		fprintf(fp, "\tpush_reg sp\n");
		fprintf(fp, "\tfetch\n");
		fprintf(fp, "\tpush_reg sp\n");
		fprintf(fp, "\tfetch\n");
		// stack top : addr addr addr #
		fprintf(fp, "\tfetch\n");
		// stack top : var addr #
		fprintf(fp, "\tpush_const %d\n", size);
		if(isInc) fprintf(fp, "\tadd\n");
		else fprintf(fp, "\tsub\n");
		// stack top : var+1 addr addr #
		fprintf(fp, "\tassign\n");
		// stack top : addr # and addr->var+1
		fprintf(fp, "\tfetch\n");
		// stack top : var+1 #
		fprintf(fp, "\tpush_const %d\n", size);
		if(isInc) fprintf(fp, "\tsub\n");
		else fprintf(fp, "\tadd\n");
		// stack top : var #
		
	}
}


void addrToVar(decl* var){
	
	// if variable, stack top is addr. of the variable
	// must fetch the value
	if(var->declclass==_VAR){
		if(var->type->typeclass != _STRUCT){
			fprintf(fp, "\tfetch\n");
		}
		// in case of struct
		else{
		}
	}
}


void fetchStruct(decl* str){
	if(str->type->typeclass==_STRUCT){
			int size = str->size;
			fprintf(fp, "\tshift_sp %d\n", (size-1));
			fprintf(fp, "\tpush_reg sp\n");
			fprintf(fp, "\tpush_const -%d\n", (size-1));
			fprintf(fp, "\tadd\n");
			fprintf(fp, "\tpush_reg sp\n");
			fprintf(fp, "\tpush_const -%d\n", size);
			fprintf(fp, "\tadd\n");
			fprintf(fp, "\tfetch\n");

			printAssign(str);
			//printf("%d\n", str->size);
	}
}


void printAssignStruct(decl* str){
	int size = str->size;
	fprintf(fp, "\tpush_reg sp\n");
	fprintf(fp, "\tpush_const -%d\n", size+1);
	fprintf(fp, "\tadd\n");
	fprintf(fp, "\tfetch\n");
	fprintf(fp, "\tpush_reg sp\n");
	fprintf(fp, "\tpush_const -%d\n", size);
	fprintf(fp, "\tadd\n");

	printAssign(str);

	fprintf(fp, "\tshift_sp %d\n", size+1);
	
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
			fprintf(fp, "\tassign\n");
		}
		// assigning array
		// stack top : addr_src addr_dest #
		else if(var->type->typeclass == _ARRAY){
			decl* elmt = var->type->elementvar;
			int num_index = var->type->num_index;
			int var_size = elmt->size;

			for(int i=0; i<num_index; i++){
				fprintf(fp, "\tpush_reg sp\n");
				fprintf(fp, "\tpush_const -1\n");
				fprintf(fp, "\tadd\n");
				fprintf(fp, "\tfetch\n");
				// addr_dest addr_src addr_dest#
				fprintf(fp, "\tpush_const %d\n", i*var_size);
				fprintf(fp, "\tadd\n");
				// addr_dest+i addr_src addr_dest#
				fprintf(fp, "\tpush_reg sp\n");
				fprintf(fp, "\tpush_const -1\n");
				fprintf(fp, "\tadd\n");
				fprintf(fp, "\tfetch\n");
				// addr_src addr_dest+i addr_src addr_dest#
				fprintf(fp, "\tpush_const %d\n", i*var_size);
				fprintf(fp, "\tadd\n");
				// addr_src+1 addr_dest+i addr_src addr_dest#
				addrToVar(elmt);
				printAssign(elmt);
			}
			// pop out src and dest addresses
			fprintf(fp, "\tshift_sp -2\n");
		}

		// assigning struct
		// stack top : addr_src addr_dest #
		else{
			//printf("THIS IS STACK\n");
			ste* field = var->type->fields;
			while(field!=NULL && field->decl!=NULL){
				decl* elmt = field->decl;
				int offset = field->decl->offset;
				fprintf(fp, "\tpush_reg sp\n");
				fprintf(fp, "\tpush_const -1\n");
				fprintf(fp, "\tadd\n");
				fprintf(fp, "\tfetch\n");
				// addr_dest addr_src addr_dest#
				fprintf(fp, "\tpush_const %d\n", offset);
				fprintf(fp, "\tadd\n");
				// addr_dest+i addr_src addr_dest#
				fprintf(fp, "\tpush_reg sp\n");
				fprintf(fp, "\tpush_const -1\n");
				fprintf(fp, "\tadd\n");
				fprintf(fp, "\tfetch\n");
				// addr_src addr_dest+i addr_src addr_dest#
				fprintf(fp, "\tpush_const %d\n", offset);
				fprintf(fp, "\tadd\n");
				// addr_src+1 addr_dest+i addr_src addr_dest#
				addrToVar(elmt);
				printAssign(elmt);
				field = field->prev;
			}
			// pop out src and dest addresses
			fprintf(fp, "\tshift_sp -2\n");
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
		fprintf(fp, "\tfetch\n");
	}
}

void moveSP(int n){
		if(n!=0){
			fprintf(fp, "\tshift_sp %d\n", n);
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


