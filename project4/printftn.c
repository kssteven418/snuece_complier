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
