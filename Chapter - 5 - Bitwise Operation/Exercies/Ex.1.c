#include <stdio.h>

int main() {

    int ara[9] = { 10, 1, 2, 3, 4, 9, 8, 7, 6 }; // 5 missing
    int result = ara[0], n = 10;

    for ( int i = 1; i < n-1; i++ ) {
        result = result ^ ara[i];
    }

    // Finding the extra numbers [where, n != 2^n]
    if ( (n+1) && ((n+1) & n) ) {

        int count = 0, n_cpy = n+1;
        while( 1 ) {
            n_cpy = n_cpy >> 1;
            if( n_cpy == 0 ) {
                break;
            }
            count++;
        }
        int new_n = 1 << (count+1);
        for ( int i = n+1; i < new_n; i++ ) {
            result = result ^ i;
        }
    }

    printf( "Result: %d\n", result );

    return 0;
}

/*
    [niSaRuL@fedora Exercies]$ ./a.out
    Result: 5
*/
