#include <stdio.h>

int main() {
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p1, *p2, *p3;

    p1 = &c1;
    p2 = &c2;
    p3 = &c3;

    printf("Content: %c, %c and %c\n", *p1, *p2, *p3);
    printf("Address: %p, %p and %p\n", p1, p2, p3);

    return 0;
}

/*
    Content: A, B and C
    Address: 0x7ffd1aad0947, 0x7ffd1aad0946 and 0x7ffd1aad0945
*/
