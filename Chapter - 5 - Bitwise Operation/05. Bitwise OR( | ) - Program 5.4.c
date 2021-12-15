#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);

    n3 = n1 | n2;

    printf("%d | %d = %d\n", n1, n2, n3);

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    n1: 5
    n2: 6
    5 | 6 = 7
    -----------------------------

    5   = 0000 0101
    6   = 0000 0110
    ---------------------
    5|6 = 0000 0111 // 7(decimal)

*/
