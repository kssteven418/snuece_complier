
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
			int x;
			int y[10];
		} st;
		struct str_in st2;
		struct str_in2{
			int x2;
			int y2;
		};
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

struct str2;
struct str5; /* error */

