
struct str1{
	int x;
	int a[10];
	int y;
}st;

struct str1* sp;

struct str1* foo(struct str1* s){

	write_int(s->x);
	write_string("\n");
	write_int(s->y);
	write_string("\n");
	write_int((*s).a[0]);
	write_string("\n");
	return sp;
}

int* p;

int goo(int* p){
	*p = *p + 10;
	return *p;
}

int* hoo(int* p){
	*p = *p + 10;
	return p;
}

int main(){
	int x;
	int y;
	int* q;

	y = 0;
	x = 0;
	p = &x;

	write_string("int pointer function : 10 10 0 20 20 20 30 30 50 50\n");
	goo(p);
	write_int(*p);
	write_string("\n");
	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");
	y = goo(p);
	write_int(*p);
	write_string("\n");
	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");

	hoo(p);
	write_int(*p);
	write_string("\n");
	write_int(x);
	write_string("\n");

	q = hoo(p);
	*p = *q+10;
	write_int(*p);
	write_string("\n");
	write_int(*q);
	write_string("\n");

}
