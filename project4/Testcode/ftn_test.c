int x;

struct str{
	int x;
	int a[10];
	int y;
}s;

int f(struct str s1, int a, int b, struct str s2, int c, int d, int e){
	int xx;


	write_string("Parameter Passing...\n");
	write_string("ans : 777 33 22 888 33 55 88 123 11\n");
	write_string("ans : 777 10000 20000 888 33 55 50000 123 11\n");
	xx = 123;
	write_int(s1.a[5]);
	write_string("\n");
	write_int(a);
	write_string("\n");
	write_int(b);
	write_string("\n");
	write_int(s2.a[5]);
	write_string("\n");
	write_int(c);
	write_string("\n");
	write_int(d);
	write_string("\n");
	write_int(e);
	write_string("\n");

	write_int(xx);
	write_string("\n");
	write_int(x);
	write_string("\n");
	write_string("\n");
	
	a = 10000;
	b = 20000;
	e = 50000;
	write_int(s1.a[5]);
	write_string("\n");
	write_int(a);
	write_string("\n");
	write_int(b);
	write_string("\n");
	write_int(s2.a[5]);
	write_string("\n");
	write_int(c);
	write_string("\n");
	write_int(d);
	write_string("\n");
	write_int(e);
	write_string("\n");

	write_int(xx);
	write_string("\n");
	write_int(x);
	write_string("\n");


	write_string("Ending..!\n");
	return a;

}

int g(){
}

void main(){
	int y;
	int z;
	struct str s2;
	
	s.a[5] = 777;
	s2.a[5] = 888;
	x = 11;
	y = 22;
	z = 33;
	y = f(s, x+y, y, s2, z, x+44, z+55);
	g();
	write_string("Return safely..!\n");
	write_string("\n");
	write_string("Safety check ... ans : 33 10000 888\n");

	write_int(z);
	write_string("\n");
	write_int(y);
	write_string("\n");
	write_int(s2.a[5]);
	write_string("\n");



}
