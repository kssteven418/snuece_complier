/* struct operation */
struct str1 {
	int i;
	char c;
} ;

struct str2 {
	int *i;
	char *c;

	struct str3 {
		int *i;
		char *c;
		struct str_in {
		} st;
	} st;
} ;

int x;

struct str2 s1;
struct str3 s2;
struct str4 s3; /* error : not declared */
struct x s4; /* error : not struct type */

struct str3 { /* error, redeclaration of struct str3 */
	int *i;
	char *c;
};

struct str_in{ /* error, redec */
	int x;
};

struct str4{
	struct str_in{ /* error, redec */
		struct str3{} st; /* error, redec */
	}st;
};

int;
void;

int main(void) {
	return 0;
}
