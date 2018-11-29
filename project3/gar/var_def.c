/* variable redefine */
int a;


int main() {
    int a;
    char a; /* error */
    int b;
    int b;  /* error */
    int c;
    char d;

    a = b;
    a = e;	/* error */

    return 0;
}
