#include <stdio.h>

int main() {

    int n, x, m;

    while(1) {
        printf("Please enter your number (0 to exit): ");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        printf("How many bits you want to shift right? ");
        scanf("%d", &x);

        m = n >> x;

        printf("Result is %d\n\n", m);
    }

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    Please enter your number (0 to exit): 100
    How many bits you want to shift right? 2
    Result is 25

    Please enter your number (0 to exit): 100
    How many bits you want to shift right? 1
    Result is 50

    Please enter your number (0 to exit): 9
    How many bits you want to shift right? 1
    Result is 4

    Please enter your number (0 to exit): 9
    How many bits you want to shift right? 2
    Result is 2

    Please enter your number (0 to exit): 2
    How many bits you want to shift right? 1
    Result is 1

    Please enter your number (0 to exit): 2
    How many bits you want to shift right? 2
    Result is 0

    Please enter your number (0 to exit): 2
    How many bits you want to shift right? 3
    Result is 0

    Please enter your number (0 to exit): 5
    How many bits you want to shift right? 1
    Result is 2

    Please enter your number (0 to exit): 5
    How many bits you want to shift right? 2
    Result is 1

    Please enter your number (0 to exit): 0

*/
