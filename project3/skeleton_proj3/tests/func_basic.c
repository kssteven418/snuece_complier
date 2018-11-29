

/* function operation */

int a;

int func1(int a) {
	a+1;
	&a;
	*a; /* error */
	return 0;
}

void func2(int *a, int *b) {
	int *c;
	int a; /* error redec */
	a + b; /* error */
	a+1; /* error */
	c == a;
}

void a(int x, int y){ /* error redec */
	int c;
	a+1;
}

void f(int x, int x){ /* error redec */
}

void g(int g){ /* pass */
}

int x;

struct st1{int x; int y;};
struct st1 s;

struct st1 sf(int x, int y){
	char a;
	int c;
}

struct st2{int x; int y;} sf2(int x, int y){
	char a;
	int c;
}

struct st3 sf3(int x){ /* error */
	char a;
	int c;
}

struct st2{int x;} sf2_2(int a, int c){ /* error : redecl */
}

struct st3{int a;} *spf(int x){
	int* x; /* error */
	x+1;
}

struct x{int x;} sf(int a, int c){ /* error */
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
