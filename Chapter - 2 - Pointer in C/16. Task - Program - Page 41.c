#include <stdio.h>

int main() {
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    **q = 'B';

    printf("Value of c      : %c\n", c);
    printf("Value of c (*p) : %c\n", *p);
    printf("Value of c (**q): %c\n", **q);

    return 0;
}

/*
    Value of c      : B
    Value of c (*p) : B
    Value of c (**q): B
*/
