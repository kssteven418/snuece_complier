
struct str1{
	int x;
	int y;
	struct str3{
		int x;
		int y;
	} *s[10];
} sa1[10];

struct str2{
	int x;
	int y;
	struct str3 s;
} *spa2[10];


struct str2{ /* error */
	int x;
} s;

struct str1 *spa[10];
struct str1 sa[10];
int x;


void main(){

	struct str1;
	struct str1{}; /* error redec */
	struct str1{} st;/* error redec */

	struct str3 temp;
	struct str3* tempp;

	(spa[0]->x)++;
	((*spa[0]).x)++;
	sa[10].x;
	(&sa[10])->x;
	((spa[0]->s)[1]->x)++;
	(spa[0]->s)[1] == spa[10]; /* error */
	(spa[0]->s)[1] == spa2[0]->s; /* error */
	(spa[0]->s)[1] == &(spa2[1]->s);
	(spa[0]->s)[1] == &tempp;/* error*/
	(spa[0]->s)[1] == &temp;
	(spa[0]->s)[1] == tempp;
	(spa[0]->s)[1] == temp;/* error */
	--((((*(spa[0])).s)[1]).x); /* error */
	--((*(((*(spa[0])).s)[1])).x);
	spa[0] == &(spa[0]->x);/* error */
	spa[0] == &(sa[10]);
}
