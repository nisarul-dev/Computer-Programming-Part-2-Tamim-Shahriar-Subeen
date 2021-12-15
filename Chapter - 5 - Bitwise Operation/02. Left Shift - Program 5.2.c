#include <stdio.h>

int main() {

    int n, x, m;

    while(1) {
        printf("Please enter your number (0 to exit): ");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        printf("How many bits you want to shift left? ");
        scanf("%d", &x);

        m = n << x;

        printf("Result is %d\n\n", m);
    }

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    Please enter your number (0 to exit): 9
    How many bits you want to shift left? 1
    Result is 18

    Please enter your number (0 to exit): 9
    How many bits you want to shift left? 2
    Result is 36

    Please enter your number (0 to exit): 2
    How many bits you want to shift left? 1
    Result is 4

    Please enter your number (0 to exit): 2
    How many bits you want to shift left? 2
    Result is 8

    Please enter your number (0 to exit): 2
    How many bits you want to shift left? 3
    Result is 16

    Please enter your number (0 to exit): 5
    How many bits you want to shift left? 1
    Result is 10

    Please enter your number (0 to exit): 5
    How many bits you want to shift left? 2
    Result is 20

    Please enter your number (0 to exit): 5
    How many bits you want to shift left? 3
    Result is 40

    Please enter your number (0 to exit): 0
*/
