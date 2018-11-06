

#include <stdio.h>

void main(){
	int barr[10];
	barr[0] = 0;
	barr[1] = 1;
	barr[2] = !barr[0];
	barr[3] = !barr[1];
	printf("%d %d %d %d\n", barr[0], barr[1], barr[2], barr[3]);
}
