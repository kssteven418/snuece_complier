
struct str{
	int x;
	int y;
	char z;
	int* p;
} s1;

struct strarr{
	int x;
	int a[10];
	int y;
};

struct strstr{
	int x;
	int a[10];
	struct strarr s;
	struct strarr t[10];
	int b[10];
	int y;
};


int main(){
	int i;

	struct str s2;
	struct str s3;
	struct str* sp;

	struct strarr t1;
	struct strarr t2;

	struct strstr ss1;
	struct strstr ss2;

	sp = &s2;

	s2.x = 10;
	(&s2)->y = 20;
	sp->z = 'A';
	sp->p = &(sp->x);

	write_string("simple assignments... ans : 10 20 A 10\n");
	write_int(s2.x);
	write_string("\n");
	write_int(s2.y);
	write_string("\n");
	write_char(s2.z);
	write_string("\n");
	write_int(*(s2.p));
	write_string("\n");

	
	write_string("\n");
	write_string("simple struct assignment... ans : 10 20 A 10 X3\n");
	s1 = s2;
	write_int(s1.x);
	write_string("\n");
	write_int(s1.y);
	write_string("\n");
	write_char(s1.z);
	write_string("\n");
	write_int(*(s1.p));
	write_string("\n");
	write_string("\n");

	s3 = *(&s2);
	write_int(s3.x);
	write_string("\n");
	write_int(s3.y);
	write_string("\n");
	write_char(s3.z);
	write_string("\n");
	write_int(*(s3.p));
	write_string("\n");
	write_string("\n");

	s3 = *sp;
	write_int(s3.x);
	write_string("\n");
	write_int(s3.y);
	write_string("\n");
	write_char(s3.z);
	write_string("\n");
	write_int(*(s3.p));
	write_string("\n");
	write_string("\n");


	write_string("array in struct... ans : 0 1 ... 9 10 20 \n");
	
	t1.x = 10;
	t1.y = 20;
	for(i=0; i<10; i++){
		t1.a[i] = i;
	}

	t2 = t1;
	for(i=0; i<10; i++){
		write_int(t2.a[i]);
		write_string("\n");
	}
	write_int(t2.x);
	write_string("\n");
	write_int(t2.y);
	write_string("\n");


	write_string("struct in struct... ans : 1 2 10 11 ... 19 100 101 ... 109 \n");
	ss1.x = 1;
	ss1.b[9] = 2;

	for(i=0; i<10; i++){
		ss1.s.a[i] = 10+i;
		ss1.t[5].a[i] = 100+i;
	}

	ss2 = ss1;
	write_int(ss2.x);
	write_string("\n");
	write_int(ss2.b[9]);
	write_string("\n");

	for(i=0; i<10; i++){
		write_int(ss2.s.a[i]);
		write_string("\n");
	}
	for(i=0; i<10; i++){
		write_int(ss2.t[5].a[i]);
		write_string("\n");
	}
	

}
