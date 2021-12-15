#include <stdio.h>

int main() {

    int n = 32, i, count = 0, num;

    scanf("%d", &num);

    for( i = 0; i < n; i++ ) {
        if (num & (1 << i)) count++;
    }

    printf("Number of 1: %d\n", count);

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
