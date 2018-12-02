
struct str{
	int x;
} st;

struct str func(){
}

struct st func(){ /* error */
}

int f(void);
void g(void);

int main(){
	int x;
	struct a; /* error */
	struct a b; /* error */
	int a[10];

	st.x; 
	st->x; /* error */
	(&x)->x; /* error */
	(&st)->y; /* error */
	str.x; /* error */
	st(); /* error */
	func.x; /* error */
	func->x; /* error */
	x.x; /* error */
	x->x; /* error */
	x(); /* error */
	&func; /* error */
	*func; /* error */
	func[10]; /* error */
	x[10]; /* error */
	str[10]; /* error */
	st[10]; /* error */

	a[2+b]; /* error */
	a[2+x];
	x = a; /* error */
	x = NULL; /* error */

	str++; /* error */
	st++; /* error */
	a++; /* error */
	(st.x)++;
	&a; /* error */
	a;
	++(a[10]++);


	f() + 1;
	f() + 'a'; /* error */
	g() + 1; /* error */

	return NULL; /* error */
}
