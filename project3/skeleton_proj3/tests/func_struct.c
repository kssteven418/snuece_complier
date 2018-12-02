
struct str1{
	int x;
	int y;
	struct strstr{
		int x;
		int y;
	} s;
} s1;


struct str1 f1(struct str1 x, struct str1 y[10], struct str1* z){
	return x;
	return *z;
	return y[10];

	return y;  /* error */
	return *y;/* error */
	return &y;/* error */
	return z;/* error */
	return &x;/* error */
}

struct str1 *f2(struct str1 x, struct str1 y[10], struct str1* z){

	struct str1 s;
	return &s;
	return &x;
	return &(y[0]);
}

int* f3(int x, int y[10], int* z){
	return &x;
	return z;
	return &y; /* error */
	return &z; /* error */

}

struct strstr f4(struct strstr *s){
	return *s;
}

void main(){
	struct str1 s;
	struct str1 *sp;
	struct str1 sa[10];

	struct strstr ss;

	sp = f2(s, sa, sp);
	sp = f2(s, sa, &(sa[0]));
	sp = f2(*sp, sa, &(sa[0]));
	ss = f2(*sp, sa, &(sa[0]))->s;
	(f2(*sp, sa, &(sa[0]))->s).x++;
	(f2(*sp, sa, &(sa[0]))->s).z++; /* error */
	(f2(*sp, sa, &(sa[0]))->s).z++; /* error */
	
	f4(&(f2(*sp, sa, &(sa[0]))->s)).x;
	f4(&(f2(*sp, sa, &(sa[0]))->s)).z; /* error */
	f4((f2(*sp, sa, &(sa[0]))->s)).s.x; /* error */ 


	s = f1(s, sa, sp);
	sa[0] = f1(s, sa, &(sa[0]));
	*sp = f1(*sp, sa, &(sa[0]));
}
