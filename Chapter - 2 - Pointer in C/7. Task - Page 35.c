#include <stdio.h>

int main() {
    int x = 10, y;
    int *p, *q;

    p = &x;
    q = &y;
    y = *p;
    *p = 15;
    *q = 20;

    printf("Value of x : %d\n", x);
    printf("Value of y : %d\n", y);
    printf("Value of *p : %d\n", *p);
    printf("Value of *q : %d\n", *q);

    return 0;
}

/*
Value of x : 15
Value of y : 20
Value of *p : 15
Value of *q : 20

Process returned 0 (0x0)   execution time : 0.024 s
Press any key to continue.
*/
