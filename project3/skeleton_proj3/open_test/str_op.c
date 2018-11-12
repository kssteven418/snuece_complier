/* struct operation */
struct str1 {
	int i;
	char c;
};

struct str2 {
	int *i;
	char *c;

	struct str3 {
		int *i;
		char *c;
	} st;
};

struct str3 { /* error, redeclaration of struct str3 */
	int *i;
	char *c;
};



int main(void) {
	int i1;
	char c1;

	struct str1 st1;
	struct str2 st2;

	struct str1 *pst1;
	struct str2 *pst2;

	pst1 = &st1;
	pst2 = st1; /* error */
	pst2 = &st2;

	i1 = st1.i;
	c1 = st1.i; /* error */

	i1 = *st2.c; /* error */

	i1 = *(pst2->st.i);
	i1 = *(pst2->st.c); /* error */

	return 0;
}
