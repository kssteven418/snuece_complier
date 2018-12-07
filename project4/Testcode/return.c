

void f(int x, int *y){
	write_int(x);
	write_string("\n");
	write_int(*y);
	write_string("\n");

	*y = 100;

	write_int(*y);
	write_string("\n");

	return;
	/* this must be ignored */
	x = 123;
	*y = 456;
	write_int(x);
	write_string("\n");
	write_int(*y);
	write_string("\n");

}


struct str{
	int x;
	int a[10];
	int y;
} s;

struct str soo(int x, struct str s, struct str* sp){
	s.x = 100;
	s.y = 200;
	s.a[5] = 500;

	sp->x = x;
	sp->y = x+x;
	sp->a[5] = x+x+x+x+x;

	return s;
	
}


void main(){
	int x;
	int y;
	struct str s1;
	struct str s2;
	struct str s3;

	x = 10;
	y = 20;

	s1.x = 1;
	s1.y = 2;
	s1.a[5] = 5;

	s2.x = 10;
	s2.y = 20;
	s2.a[5] = 50;

	write_string("Testing for RETURN; statement... Ans : 10, 20, 100, 10, 100\n");
	f(x, &y);
	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");
	write_string("\n");

	write_string("Testing for RETURN struct; statement... Ans : 10, 20, 100, 10, 100\n");
	write_int(s1.x);
	write_string("\n");
	write_int(s1.y);
	write_string("\n");
	write_int(s1.a[5]);
	write_string("\n");

	s3 = soo(1000, s1, &s2);

	write_int(s1.x);
	write_string("\n");
	write_int(s1.y);
	write_string("\n");
	write_int(s1.a[5]);
	write_string("\n");

	write_int(s2.x);
	write_string("\n");
	write_int(s2.y);
	write_string("\n");
	write_int(s2.a[5]);
	write_string("\n");

	write_int(s3.x);
	write_string("\n");
	write_int(s3.y);
	write_string("\n");
	write_int(s3.a[5]);
	write_string("\n");

}
