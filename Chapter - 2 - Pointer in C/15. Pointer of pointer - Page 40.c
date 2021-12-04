#include <stdio.h>

int main() {
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    printf("Value of c      : %c\n", c);
    printf("Value of c (*p) : %c\n", *p);
    printf("Value of c (**q): %c\n", **q);

    return 0;
}

/*
    Value of c      : A
    Value of c (*p) : A
    Value of c (**q): A
*/
