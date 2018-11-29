

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
} *spa2[10];


struct str1 *spa[10];
struct str1 sa[10];
int x;


void main(){
	(spa[0]->x)++;
	((*spa[0]).x)++;
	sa[10].x;
	(&sa[10])->x;
	((spa[0]->s)[1]->x)++;
	(spa[0]->s)[1] == spa[10];
	--((((*(spa[0])).s)[1]).x); /* error */
	--((*(((*(spa[0])).s)[1])).x);
	spa[0] == &(spa[0]->x);
}
