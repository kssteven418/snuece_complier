char gc;
int ga[10];
int* gpa[10];
int gx;
int gy;
int* gp;

int foo(char* str){
}

int main(){
	char c;
	int a[5];
	char ca[5];
	int* pa[5];
	int x;
	int y;
	int gy;
	int* p;
	char* s;

	s = "hello\n";
	write_string(s);
	x = gx = 77;
	write_int(x);
	write_string("\n");
	write_int(gx);
	write_string("\n");

	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;

	ca[0] = 'a';
	ca[1] = 'b';
	ca[2] = 'c';
	ca[3] = 'd';
	ca[4] = 'e';

	write_string("Testing array basics...\n");
	write_int(a[0]); /* 0 */
	write_string("\n");
	write_int(a[1]);/* 1 */
	write_string("\n");
	write_int(a[2]);/* 2 */
	write_string("\n");
	write_int(a[3]);/* 3 */
	write_string("\n");
	write_int(a[4]);/* 4 */
	write_string("\n");

	write_char(ca[0]);/* a */
	write_string("\n");
	write_char(ca[1]);/* b */
	write_string("\n");
	write_char(ca[2]);/* c */
	write_string("\n");
	write_char(ca[3]);/* d */
	write_string("\n");
	write_char(ca[4]);/* e */
	write_string("\n");

	write_string("Testing array & inc dec...\n");
	write_int(a[0]++); /* 0 */
	write_string("\n");
	write_int(a[1]--); /* 1 */
	write_string("\n");
	write_int(++a[2]); /* 3 */
	write_string("\n");
	write_int(--a[3]); /* 2 */
	write_string("\n");

	write_int(a[0]);/* 1 */
	write_string("\n");
	write_int(a[1]);/* 0 */
	write_string("\n");
	write_int(a[2]);/* 3 */
	write_string("\n");
	write_int(a[3]);/* 2 */
	write_string("\n");

	write_string("Testing pointer array with inc dec...\n");
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;

	pa[0] = &a[0]; 
    pa[1] = &a[1];
	pa[2] = &a[2];
    pa[3] = &a[3];
    pa[4] = &a[4];

	write_int(*pa[0]); /* 0 */
	write_string("\n");
	write_int(*pa[1]);/* 1 */
	write_string("\n");
	write_int(*pa[2]);/* 2 */
	write_string("\n");
	write_int(*pa[3]);/* 3 */
	write_string("\n");
	write_int(a[4]);/* 4 */
	write_string("\n");

	write_int((*pa[0])++); /* 0 */
	write_string("\n");
	write_int((*pa[1])--); /* 1 */
	write_string("\n");
	write_int(++(*pa[2])); /* 3 */
	write_string("\n");
	write_int(--(*pa[3])); /* 2 */
	write_string("\n");

	write_int((*pa[0]));/* 1 */
	write_string("\n");
	write_int((*pa[1]));/* 0 */
	write_string("\n");
	write_int((*pa[2]));/* 3 */
	write_string("\n");
	write_int((*pa[3]));/* 2 */
	write_string("\n");

	
	write_string("Testing unary pointer ...\n");
	x = 100;
	write_int(x); /* 100 */
	write_string("\n");
	write_int(*(&x)); /* 100 */
	write_string("\n");
	gp = &x;
	write_int(*gp); /* 100 */
	write_string("\n");

	write_int(a[0]); /* 1 */
	write_string("\n");
	p = &a[0];
	write_int(*p); /* 1 */
	write_string("\n");

	*gp = a[0] - *(p) + *(&a[0]);
	write_int(*gp); /* 1 */
	write_string("\n");
	write_int(*(&(*gp))); /* 1 */
	write_string("\n");
	write_int(x); /* 1 */
	write_string("\n");


}
