
int a;

void a(){ /* error redec */
	int c;
	a+1;
}

int x;

struct st1{int x; int y;};
struct st1 s;

struct st1 sf(){
	char a;
	int c;
}

struct st2{int x; int y;} sf2(void){
	char a;
	int c;
}

struct st3 sf3(){ /* error */
	char a;
	int c;
}

struct st3{int a;} *spf(){ 
	int* x; 
}

struct st3{int b;} spf(){ /* error */
	int a;
	int b;
}

struct st2{}; /* error */
struct st2{} a; /* error */
struct st2 ss; /* pass */

int c; /* pass! */
int a; /* error */

int main(void) {
	a+1; /* pass */
	return 0;
}
