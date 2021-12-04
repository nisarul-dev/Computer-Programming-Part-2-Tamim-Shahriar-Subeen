#include <stdio.h>

int main() {
    int x = 100;
    int *p = NULL;

    printf("Value of x : %d\n", x);
    p = &x; // Fix: Assigning address of the variable 'x' into pointer 'p'. So, p is no longer a null pointer.
    printf("Value of *p : %d\n", *p);

    return 0;
}

/*
Value of x : 100
Value of *p : 100
*/
