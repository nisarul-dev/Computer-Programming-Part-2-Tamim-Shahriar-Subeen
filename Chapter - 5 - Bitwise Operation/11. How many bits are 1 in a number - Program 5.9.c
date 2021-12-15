#include <stdio.h>

int main() {

    int n, i = 0;

    scanf("%d", &n);

    while( n > 0 ) {
        if (n & 1 == 1) {
            i++;
        }
        n = n >> 1;
    }

    printf("Number of 1: %d\n", i);

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    7
    Number of 1: 3       // 0000 0111

    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    8
    Number of 1: 1       // 0000 1000
*/
