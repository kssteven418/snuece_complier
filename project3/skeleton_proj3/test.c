#include <stdio.h>

int strCompare_no_len(char* x, char* y){
	int i = 0;
	while(1){
		if(x[i] != y[i]) return 0;
		if(x[i] == '\0') return 1;
		i += 1;
	}
}

void main(){
	char* x= "abcd";
	char* y= "abcde";
	int res = strCompare_no_len(x, y);
	printf("%d\n", res);
}
