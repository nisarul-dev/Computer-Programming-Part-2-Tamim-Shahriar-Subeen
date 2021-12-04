#include <stdio.h>

void recurse() {
    char *s = "Hurrey, I'm learning recursion!";
    printf("%s\n", s);
    recurse();
}

int main()
{
    recurse();
    return 0;
}

/*
    Output:
    Hurrey, I'm learning recursion!
    Hurrey, I'm learning recursion!
    Hurrey, I'm learning recursion!
    ...........................................
    ...........................................
    Hurrey, I'm learning recursion!
    Hurrey, I'm learning recursion!
    Hurrey, I'm learning recursion!
    Hurrey, I'm learning recursion!
    Segmentation fault (core dumped)
*/
