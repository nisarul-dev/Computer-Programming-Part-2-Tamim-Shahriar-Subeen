#include <stdio.h>

int main() {

    int n;

    printf("n: ");
    scanf("%d", &n);

    if ( n & 1 == 1 ) {
        printf("%d is an Odd number.\n", n);
    } else {
        printf("%d is an Even number.\n", n);
    }

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    n: 6
    6 is an Even number. // Here: (6 & 1) = (110 & 001) = 0 -> (else)

    ---------------------------------------------------------
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    n: 5
    5 is an Odd number. // Here: (5 & 1) = (101 & 001) = 1 -> (if)

*/
