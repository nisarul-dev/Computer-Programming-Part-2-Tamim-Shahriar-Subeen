#include <stdio.h>

int main() {

    char x;

    printf("Enter a char: ");
    scanf("%c", &x);

    if ( (x & 32) == 32 ) {
        printf("'%c' is lower case\n", x);
    } else {
        printf("'%c' IS UPPER CASE\n\n", x);
    }

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    Enter a char: A
    'A' IS UPPER CASE // Here: (0100 0001 & 0010 0000) = 0 -> (else)

    ---------------------------------------------------------
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    Enter a char: a
    'a' is lower case // Here: (0110 0001 & 0010 0000) = 32 -> (if)

*/
