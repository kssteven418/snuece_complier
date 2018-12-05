
struct str{
	int x;
	int y;
	int* p[8];
}; /* size 10 */

struct str2{
	struct str ss[10];
	int* p[100];
}; /* size 200 */

struct str sarr[10]; /* size 100 */
struct str2 s2arr[10]; /* size 2000 */

int main(){
	struct str2 s[10];
	int x;
}

