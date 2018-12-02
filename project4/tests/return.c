
void func(int x, int y){
	return;
}

int func(int x, int y){ /* error */
	return; /* error */ 
}

int func2(){
	return; /* error */
}

void func3(void){
	return;
}


int fint(int x){
	int y[10];
	int *z;
	char w;

	return 1;
	return x;
	return x+1;
	return (x=1);
	return y[1];

	return y; /* error */
	return z; /* error */
	return &x; /* error */
	return fint; /* error */
}

int *fpint(int x){
	int y[10];
	int *yp[10];
	int *z;
	char w;
	
	return z;
	return yp[1];
	return &x;
	return *(&z);
	
	return (z==yp[1]); /* error */
	return &w; /* error */
	return &z; /* error */
	return &(yp[0]); /* error */

}

char *returnString(char* p){
	p = "hello";
	return p;
	return "hello";
}
