
struct str1{
	int x;
	int a[5];
} s1;

struct str2{
	int x;
	int a[10];
	struct str1 s[2];
	int y;
};

struct str2 s2;

int main(){
	struct str1 ls1;
	struct str2 ls2;
	struct str2* sp;

	write_string("struct test 1...\n");
	write_string("ans : 10 0 1 2 3 4\n");
	s1.x = 10;
	s1.a[0] = 0;
	s1.a[1] = 1;
	s1.a[2] = 2;
	s1.a[3] = 3;
	s1.a[4] = 4;
	write_int(s1.x);
	write_string("\n");
	write_int(s1.a[0]);
	write_string("\n");
	write_int(s1.a[1]);
	write_string("\n");
	write_int(s1.a[2]);
	write_string("\n");
	write_int(s1.a[3]);
	write_string("\n");
	write_int(s1.a[4]);
	write_string("\n");

	write_string("struct test 2...\n");
	write_string("ans : 10 0 1 2 3 4\n");
	ls2.s[1].x = 10;
	ls2.s[1].a[0] = 0;
	ls2.s[1].a[1] = 1;
	ls2.s[1].a[2] = 2;
	ls2.s[1].a[3] = 3;
	ls2.s[1].a[4] = 4;
	write_int(ls2.s[1].x);
	write_string("\n");
	write_int(ls2.s[1].a[0]);
	write_string("\n");
	write_int(ls2.s[1].a[1]);
	write_string("\n");
	write_int(ls2.s[1].a[2]);
	write_string("\n");
	write_int(ls2.s[1].a[3]);
	write_string("\n");
	write_int(ls2.s[1].a[4]);
	write_string("\n");

	write_string("struct pointer and -> operator...\n");
	write_string("ans : 10 0 1 2 3 4 \n~ 10 0 1 2 3 4\n");
	sp = &ls2;
	write_int(sp->s[1].x);
	write_string("\n");
	write_int(sp->s[1].a[0]);
	write_string("\n");
	write_int(sp->s[1].a[1]);
	write_string("\n");
	write_int(sp->s[1].a[2]);
	write_string("\n");
	write_int(sp->s[1].a[3]);
	write_string("\n");
	write_int(sp->s[1].a[4]);
	write_string("\n");

	write_int((&ls2)->s[1].x);
	write_string("\n");
	write_int((&ls2)->s[1].a[0]);
	write_string("\n");
	write_int((&ls2)->s[1].a[1]);
	write_string("\n");
	write_int((&ls2)->s[1].a[2]);
	write_string("\n");
	write_int((&ls2)->s[1].a[3]);
	write_string("\n");
	write_int((&ls2)->s[1].a[4]);
	write_string("\n");

	write_string("struct test 2...\n");
	write_string("ans : 10 0 1 2 3 4\n");
	write_int((*(&ls2)).s[1].x);
	write_string("\n");
	write_int((*(&ls2)).s[1].a[0]);
	write_string("\n");
	write_int((*(&ls2)).s[1].a[1]);
	write_string("\n");
	write_int((*(&ls2)).s[1].a[2]);
	write_string("\n");
	write_int((*(&ls2)).s[1].a[3]);
	write_string("\n");
	write_int((*(&ls2)).s[1].a[4]);
	write_string("\n");

}
