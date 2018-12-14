
struct str2{
	int a[10];
};

struct str{
	int x;
	int y[10];
	struct str2 s;
};

int b[10];

int main(){
	int a[10];
	char c[10];
	struct str s[10];
	int x;

	int* p;
	char* q;
	struct str* r;

	write_string("testing for pointer +/- int operator. 5 b 50 / 6 c 60 / 4 a 40 / 777 x 888 999\n");
	p = &(a[5]);
	q = &(c[5]);
	r = &(s[5]);

	a[5] = 5;
	a[6] = 6;
	a[4] = 4;
	c[5] = 'b';
	c[4] = 'a';
	c[6] = 'c';
	s[5].s.a[0] = 50;
	s[6].s.a[0] = 60;
	s[4].s.a[0] = 40;

	write_int(*p);
	write_string("\n");
	write_char(*q);
	write_string("\n");
	write_int(r->s.a[0]);
	write_string("\n");
	p = p+1;
	q = q+1;
	r = r+1;
	write_int(*p);
	write_string("\n");
	write_char(*q);
	write_string("\n");
	write_int(r->s.a[0]);
	write_string("\n");
	p = p-2;
	q = q-2;
	r = r-2;
	write_int(*p);
	write_string("\n");
	write_char(*q);
	write_string("\n");
	write_int(r->s.a[0]);
	write_string("\n");

	*p = 777;
	*q = 'x';
	(*r).s.a[0] = 888;
	(r+1)->s.a[0] = 999;
	write_int(a[4]);
	write_string("\n");
	write_char(c[4]);
	write_string("\n");
	write_int(s[4].s.a[0]);
	write_string("\n");
	write_int(s[5].s.a[0]);
	write_string("\n");

	write_string("testing for pointer ++/-- operation, 5 6 5 5 50 60 50 50\n");
	p = &(a[5]);
	q = &(c[5]);
	r = &(s[5]);

	a[5] = 5;
	a[6] = 6;
	a[4] = 4;
	c[5] = 'b';
	c[4] = 'a';
	c[6] = 'c';
	s[5].s.a[0] = 50;
	s[6].s.a[0] = 60;
	s[4].s.a[0] = 40;

	p = &(a[5]);
	x = *(p++);
	write_int(x);
	write_string("\n");
	write_int(*p);
	write_string("\n");

	x = *(--p);
	write_int(x);
	write_string("\n");
	write_int(*p);
	write_string("\n");

	x = (r++)->s.a[0];
	write_int(x);
	write_string("\n");
	write_int(r->s.a[0]);
	write_string("\n");

	x = (--r)->s.a[0];
	write_int(x);
	write_string("\n");
	write_int(r->s.a[0]);
	write_string("\n");

	return 0;

}
