#include <stdio.h>

int main()
{
    char a, b;

    a = 0;
    b = ~a;

    printf("a = %d, b = %d\n", a, b );

    a = 1;
    b = ~a;

    printf("a = %d, b = %d\n", a, b );

    a = 2;
    b = ~a;

    printf("a = %d, b = %d\n", a, b );

    return 0;
}
/*
    Output:
    a = 0, b = -1
    a = 1, b = -2
    a = 2, b = -3
*/
