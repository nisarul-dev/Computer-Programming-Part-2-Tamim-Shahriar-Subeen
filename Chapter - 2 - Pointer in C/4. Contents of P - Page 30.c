#include<stdio.h>

int main() {
    int x = 10;
    int *p;

    // Assigning the memory address of x into p. Here, p is the contents of x.
    p = &x;

    printf("Value of x : %d\n", x);

    // Assigning 20 into *p (The content of p). Here, the content of p (*p) is actually the value of x;
    *p = 20;

    printf("Value of x : %d\n", x);
    printf("Address of x : %p\n", &x);
    printf("Value of p : %p\n", p);

    return 0;
}
