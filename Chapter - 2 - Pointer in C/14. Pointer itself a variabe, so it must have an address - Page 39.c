#include <stdio.h>

int main() {
    char c = 'A';
    char *p;

    p = &c;

    printf("Address of c: %p\n", p);
    printf("Address of p: %p\n", &p);

    return 0;
}

/*
    Address of c: 0x7ffdfb2d9f1f
    Address of p: 0x7ffdfb2d9f10
*/
