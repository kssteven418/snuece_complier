
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
	s->x = s->x + s->x;
	s->y = s->y + s->y;
	s->a[0] = s->a[0] + s->a[0];
	return s;
}

int main(){
	struct str1 *p;

	write_string("struct pointer function : 10 20 30 20 40 60 40 80 120\n");
	st.x = 10;
	st.y = 20;
	st.a[0] = 30;
	foo(&st);

	p = foo(&st);
	write_int(p->x);
	write_string("\n");
	write_int(p->y);
	write_string("\n");
	write_int((*p).a[0]);
	write_string("\n");
}
