
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
	struct str_in *sp;
	struct str_in2 s2; /* error */
	int *p;
};


void main(){
	struct str st;
	struct str *stp;
	int x;
	int* xp;
	&x;

	x.a;/* error */
	ss.a;/* error */
	x->a;/* error */
	xp.a;/* error */
	str.a;/* error */

	&sp;
	&spa; /* error */
	&s;
	&sa; /* error */
	
	&spa[0];
	&sa[0];

	/* test for struct fields */
	st.x;
	st.y;
	st.z; /* error */

	st.x++;
	st.x + st.y;
	(st.x + 1);
	(st.x + 1)++; /* error */

	/* field in field */
	st.s.a;
	st.s2.q;
	st.str_in; /* error */

	st.s.a++;
	st.s2.a + st.x;
	st.s.q == st.p;
	&st == st.s.q; /* error */
	&st == stp;
	x.a; /* error */


	/* test for struct pointer fields */
	stp->x;
	stp->y;
	stp->z; /* error */
	st->x; /* error */
	x->x; /* error */
	xp->x; /* error */
	stp.x; /* error */

	
	(stp->x)++;
	stp->x + stp->y;
	(stp->x + 1);
	(stp->x + 1)++; /* error */

	/* field in field */
	stp->s.a;
	stp->s2.q;
	stp->sp->a;
	stp->str_in; /* error */
	stp->sp.a; /* error */

	stp->s.a++;
	stp->s2.a + stp->sp->a;
	stp->sp->q == stp->p;
	&stp == stp->s.q; /* error */

}
