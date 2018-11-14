

struct str1{
	int x;
	int y;
} sa1[10];

struct str2{
	int x;
	int y;
} *spa2[10];

struct str3{
	int x;
	int y;
} *sp3;

struct str1 *sp;
struct str1 *spa[10];
struct str1 s;
struct str1 sa[10];
int x;


struct str{
	int x;
	int y;
	struct str_in{
		int a;
		int b;
		int *q;
	} s;
	struct str_in s2;
	struct str_in2 s2; /* error */
	int *p;
};

void main(){
	struct str str;

	&x;

	&sp;
	&spa; /* error */
	&s;
	&sa; /* error */
	
	&spa[0];
	&sa[0];

	/* test for struct fields */
	str.x;
	str.y;
	str.z; /* error */

	str.x++;
	str.x + str.y;
	(str.x + 1);
	(str.x + 1)++; /* error */

	/* field in field */
	str.s.a;
	str.s2.q;
	str.str_in; /* error */

	str.s.a++;
	str.s2.a + str.x;
	str.s.q == str.p;
	&str == str.s.q;


}
