

void func(int x, int y){
	return;
}

int func(int x, int y){ /* error */
	return; 
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

	/* errors */
	return y;
	return z;
	return &x;
	return fint;
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
	
	/* errors */
	return (z==yp[1]);
	return &w;
	return &z;
	return &(yp[0]);

}
