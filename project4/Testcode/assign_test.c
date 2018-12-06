


struct str{
	int x;
	int y;
	char z;
	int* p;
} s1;


int main(){
	struct str s2;
	struct str s3;
	struct str* sp;
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

}
