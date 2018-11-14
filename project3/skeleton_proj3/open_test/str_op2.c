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

int x;

struct str2 s1;
struct str3 s2;
struct str4 s3; /* error : not declared */
struct x s4; /* error : not struct type */

struct str3 { /* error, redeclaration of struct str3 */
	int *i;
	char *c;
};



int main(void) {
	return 0;
}
