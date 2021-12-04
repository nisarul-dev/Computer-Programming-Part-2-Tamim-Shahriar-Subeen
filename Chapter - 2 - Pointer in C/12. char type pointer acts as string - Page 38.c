#include <stdio.h>

int main() {
    char s[] = "Bangladesh";
    char *p;

    p = s;

    printf("The name of my countyry: %s\n", p);
    printf("The address of char type array(string) s: %p\n", p);
    printf("The address of char type pointer       p: %p\n", p);

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 2 - Pointer in C]$ ./a.out
    The name of my countyry: Bangladesh
    The address of char type array(string) s: 0x7ffdd328455d
    The address of char type pointer       p: 0x7ffdd328455d
*/
