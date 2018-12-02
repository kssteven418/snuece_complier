int *func(int *a) {

    return a;

}

 

char *func2(void) {

    return "abc";

}

 

struct str {

    int a;

    int b;

    char i;

 

    struct inner_str {

        struct inner_2_str {

            struct inner_3_str {

            };

        };

    } kk;

 

} str1;

 

int main() { 

    int a;

    char b;

    int *arr[20];

    int *arr2[20];

    int *ptr;

    char *chtr;

    int array[10];

    struct mine aa; /* error */

    struct str nini;

 

    struct inner_2_str { /* error: redecl */

    };

 

    ptr = func(ptr);

 

    arr[0] = arr2; /* error */

 

    a[i] = 3; /* error */

    arr[0] = NULL;

 

    *ptr = a && b; /* error */

 

    b = 2; /* error */

    func(); /* error */

 

    chtr == ptr; /* error */

    *b; /* error */

    b[10] /* error */;

    b(); /* error */

 

    b = str1.j; /* error */

 

    ptr = NULL;

    a = NULL; /* error */

    arr = NULL; /* error */

    

    chtr = "test string";

 

    return 0;

}


