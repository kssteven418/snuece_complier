
int xx;

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

struct str2{

	int a[10];
};

struct str{
	int x;
	int y;
	int a[10];
	struct str2 s;
	int y1;
	int y2;
} s;

struct str soo(int x, struct str s){
	struct str temp;

	temp.x = 100;
	temp.y = 200;
	temp.a[1] = 300;
	temp.s.a[2] = 400;

	return temp;
	
}

struct str soo2(){
	struct str temp;

	temp.x = 11;
	temp.y = 22;
	temp.a[1] = 33;
	temp.s.a[2] = 44;

	return temp;
}

struct str *soop(){
	struct str temp;

	temp.x = 11;
	temp.y = 22;
	temp.a[1] = 33;
	temp.s.a[2] = 44;

	s.x = 11;
	s.y = 22;
	s.a[1] = 33;
	s.s.a[2] = 44;

	return &s;
}


void main(){
	int *xp;
	int x;
	int y;
	struct str s1;
	struct str s2;
	struct str s3;
	struct str* sp;

	x = 10;
	y = 20;

	s1.x = 1;
	s1.y = 2;
	s1.a[1] = 3;
	s1.s.a[2] = 4;

	write_string("Testing for RETURN; statement... Ans : 10, 20, 100, 10, 100\n");
	f(x, &y);
	write_int(x);
	write_string("\n");
	write_int(y);
	write_string("\n");
	write_string("\n");

	write_string("Testing for RETURN struct; statement... \nAns : 1 2 3 4 1 2 3 4 11 22 33 44 100 200 300 400 11 22 33 44 777\n");
	write_int(s1.x);
	write_string("\n");
	write_int(s1.y);
	write_string("\n");
	write_int(s1.a[1]);
	write_string("\n");
	write_int(s1.s.a[2]);
	write_string("\n");

	s2 = soo2();
	s3 = soo(1000, s1);

	write_int(s1.x);
	write_string("\n");
	write_int(s1.y);
	write_string("\n");
	write_int(s1.a[1]);
	write_string("\n");
	write_int(s1.s.a[2]);
	write_string("\n");

	write_int(s2.x);
	write_string("\n");
	write_int(s2.y);
	write_string("\n");
	write_int(s2.a[1]);
	write_string("\n");
	write_int(s2.s.a[2]);
	write_string("\n");

	write_int(s3.x);
	write_string("\n");
	write_int(s3.y);
	write_string("\n");
	write_int(s3.a[1]);
	write_string("\n");
	write_int(s3.s.a[2]);
	write_string("\n");
	
	sp = soop();

	write_int(sp->x);
	write_string("\n");
	write_int(sp->y);
	write_string("\n");
	write_int(sp->a[1]);
	write_string("\n");
	write_int(sp->s.a[2]);
	write_string("\n");

	sp->x = 777;
	write_int(s.x);
	write_string("\n");

}
