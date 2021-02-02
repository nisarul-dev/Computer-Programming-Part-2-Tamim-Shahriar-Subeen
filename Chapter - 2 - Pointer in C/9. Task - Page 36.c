#include <stdio.h>

int main() {
    int x = 100;
    int *p = NULL;

    printf("Value of x : %d\n", x);
    printf("Value of *p : %d\n", *p); // Here, we are dereferencing p(*-is dereferencing oparetor) where p is not pointing to any variable.

    return 0;
}

/*
Value of x : 100
Segmentation fault: 11 error

Process returned 0 (0x0)   execution time : 0.024 s
Press any key to continue.
*/
