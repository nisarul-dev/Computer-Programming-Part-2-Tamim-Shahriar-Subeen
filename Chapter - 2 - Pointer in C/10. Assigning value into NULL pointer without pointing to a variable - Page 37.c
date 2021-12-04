#include <stdio.h>

int main() {
    int x = 100;
    int *p = NULL;

    *p = 100; // Assigning the content of p. Which is not possible. Cause p is not pointing to any variable.

    printf("Value of *p : %d\n", *p);
    /* Still p is a null pointer(Cause p is not pointing to any variable)
    and cannot have values to be printing. */

    return 0;
}

/*
Segmentation fault (core dumped)
*/
