#include <stdio.h>
int f_calls = 0;

int factor( int n ) {
    f_calls = f_calls + 1;

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
    printf("Number of function calls: %d\n", f_calls);
    return 0;
}

/*
    Ex.1. Terminal:
    4
    The factorial of 4 is 24
    Number of function calls: 4
    _____________________________

    Ex.2. Terminal:
    0
    The factorial of 0 is 1
    Number of function calls: 1

*/
