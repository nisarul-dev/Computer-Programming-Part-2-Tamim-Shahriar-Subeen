#include <stdio.h>

int factor( int n ) {
    if ( n <= 1) {
        return 1;
    }

    return n * factor(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Undefined\n");
        return 0;
    }

    printf("The factorial of %d is %d\n", n, factor(n));
    return 0;
}

/*
    Ex.1. Terminal:
    4
    The factorial of 4 is 24

    _____________________________

    Ex.2. Terminal:
    0
    The factorial of 0 is 1

*/
