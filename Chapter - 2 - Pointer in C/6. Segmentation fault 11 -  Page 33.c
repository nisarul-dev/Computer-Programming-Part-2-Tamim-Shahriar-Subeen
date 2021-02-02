#include <stdio.h>

int main() {
    int x = 10,y;
    int *p, *q;

    p = &x;
    y = *p;
    *p = 15;
    *q = 20; // But there is no variable associated with pointer q. so the dereferencing won't work. The is "Segmentation Fault" and the program will crash.

    printf("Value of x : %d\n", x);

    x = 15;

    printf("Value of x : %d\n", x);
    printf("Value of y : %d\n", y);
    printf("Value of *p : %d\n", *p);
    printf("Address of *q : %d\n", *q);

    return 0;
}
