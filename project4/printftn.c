#include "subc.h"
#include "stdio.h"

void printRelEqu(int op){
	if(op==_LT)	P("	less");
	if(op==_LTE) P("	less_equal");
	if(op==_GT)	P("	greater");
	if(op==_GTE) P("	greater_than");
}

void printArithmetic(int op){
	if(op==_PLUS) P("	add");
	if(op==_MINUS) P("	sub");
}
