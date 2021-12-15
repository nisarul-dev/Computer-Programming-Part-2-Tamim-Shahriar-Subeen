#include <stdio.h>

int main() {

    int ara[] = { 1, 1, 2, 2, 3, 3, 4 };
    int result = ara[0], n = 7;

    for ( int i = 1; i < n; i++ ) {
        result = result ^ ara[i];
    }

    printf( "Result: %d\n", result );

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    Result: 4
*/
