#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    if ( n > 0 && ( (n & (n-1)) == 0 ) ) {
        int i = 0, n_cpy = n;
        while( 1 ) {
            n_cpy = n_cpy >> 1;
            if( n_cpy == 0 ) {
                break;
            }
            i++;
        }

        printf("%d = 2 ^ %d\n", n, i);
    } else {
        printf("%d is not a power of 2\n", n);
    }

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    8
    8 = 2 ^ 3

    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    7
    7 is not a power of 2
*/
