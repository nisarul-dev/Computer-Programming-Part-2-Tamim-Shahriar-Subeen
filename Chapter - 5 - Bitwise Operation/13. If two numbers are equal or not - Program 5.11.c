#include <stdio.h>

int main() {

    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if( n1 ^ n2 ) {
        printf("The numbers are not equal\n");
    } else {
        printf("The numbers are equal\n");
    }

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    5 5
    The numbers are equal
*/
