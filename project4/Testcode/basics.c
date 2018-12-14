

struct str1{
	int x;
	int a[10];
	int y;
}*st;

struct str1* foo(struct str1* s, int x, int y, int a){
	s->x = x;
	(*s).y = y;
	s->a[0] = a;
	return s;
}


int main(){
	int a;
	int b;
	int x;
	int arr[10];
	int* p;
	int* q;
	int* r;
	
	a = 1;
	b = 0;
	p = &(arr[0]);
	q = &(arr[0]);
	r = &(arr[1]);

	write_string("Basic bool op : 0 1 0 1 / 1 0 0 0 / 1 1 1 0 / 0 1/ -1 1 -1 1\n");
	write_int((a&&b));
	write_string("\n");
	write_int((a||b));
	write_string("\n");
	write_int((!a));
	write_string("\n");
	write_int((!b));
	write_string("\n");
	write_string("\n");
	write_int((1&&1));
	write_string("\n");
	write_int((1&&0));
	write_string("\n");
	write_int((0&&1));
	write_string("\n");
	write_int((0&&0));
	write_string("\n");
	write_string("\n");
	write_int((1||1));
	write_string("\n");
	write_int((1||0));
	write_string("\n");
	write_int((0||1));
	write_string("\n");
	write_int((0||0));
	write_string("\n");
	write_string("\n");
	write_int((!1));
	write_string("\n");
	write_int((!0));
	write_string("\n");

	write_int((-a));
	write_string("\n");
	write_int((-(-a)));
	write_string("\n");
	write_int((-1));
	write_string("\n");
	write_int((-(-1)));
	write_string("\n");

	write_string("Basic equrel op : 0 1 1 0 1 1 X2 / 1 0 0 1\n");
	a = 0;
	b = 1;
	write_string("\n");
	write_int((a==b));
	write_string("\n");
	write_int((a!=b));
	write_string("\n");
	write_int((a<b));
	write_string("\n");
	write_int((a>b));
	write_string("\n");
	write_int((a<=a));
	write_string("\n");
	write_int((a>=a));
	write_string("\n");
	write_string("\n");
	write_int((0==1));
	write_string("\n");
	write_int((0!=1));
	write_string("\n");
	write_int((0<1));
	write_string("\n");
	write_int((0>1));
	write_string("\n");
	write_int((0<=0));
	write_string("\n");
	write_int((1>=1));
	write_string("\n");

	write_string("\n");
	write_int((p==q));
	write_string("\n");
	write_int((p!=q));
	write_string("\n");
	write_int((p==r));
	write_string("\n");
	write_int((p!=r));
	write_string("\n");

}

