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
	if(op==_LT)	P("\tless");
	if(op==_LTE) P("\tless_equal");
	if(op==_GT)	P("\tgreater");
	if(op==_GTE) P("\tgreater_than");
}

void printArithmetic(int op){
	if(op==_PLUS) P("\tadd");
	if(op==_MINUS) P("\tsub");
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

void addrToVar(decl* decl){
	
	// if variable, stack top is addr. of the variable
	// must fetch the value
	if(decl->declclass==_VAR){
		P("\tfetch\n");
	}

}

void printAssign(){
		P("\tassign\n");
}

void moveSP(int n){
		if(n!=0){
			P("\tshift_sp %d\n", n);
		}
}

// post processing after expression ended
void afterExpr(decl* expr){
		addrToVar(expr);
		moveSP(-expr->size);
}
