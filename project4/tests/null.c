
struct aa{} b;


void a(int x){
	
   char y; 
    int y; /* error */
	int x; /* error */
	int a;

	int NULL; /* error */
	struct NULL; /* error */
	struct NULL b; /* error */
	struct NULL{ /* error */
		int x;
		char x; /* error */
		int stx;
	};
	int stx;
	
	struct st{ 
		int stx;
		int NULL; /* error */
		void NULL; /* error */
	};


	struct st;
	struct st NULL; /* error */
	
	int NULL[10]; /* error */
	int NULL[y]; /* error */
	struct st NULL[10]; /* error */


	void NULL; /* error */
	void NULL(int x); /* error */
	void NULL(int NULL); /* error */ /* error */
	
			
   y = "hello"[0];/* error */
   x = "hello"[0];/* error */

}

int NULL(){ /* error */
	int x;
	int NULL; /* error */
	char x; /* error */
}

int NULL(int NULL){ /* error */
	int x;
	int NULL; /* error */
	char x; /* error */

	return NULL;/* error */
}

int x(){
	return NULL; /* error */
}

int x(); /* error */


/* checking for NULL operations */
int* y(){

	int x;
	int *p;
	char* q;

	NULL+1;/* error */
	NULL+NULL;/* error */
	NULL++;/* error */
	NULL==NULL;/* error */
	NULL>NULL;/* error */
	*NULL;/* error */
	&NULL;/* error */

	x = NULL; /* error */
	p = NULL;
	q = NULL;
	
	x = 0;
	p = 0; /* error */
	q = 0; /* error */
	return NULL;	
}

int z(){
	return NULL; /* error */
}

char* w(int NULL){ /* error */

	struct str{int* p;} NULL; /* error */
	struct str s;
	s.p = NULL;
	*(s.p) = NULL; /* error */

	return NULL;
}
