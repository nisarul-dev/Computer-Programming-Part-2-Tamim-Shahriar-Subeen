#include <stdio.h>

void recurse( int count ) {
    if(count == 5) {
        printf("Returning from if statemnt\n");
        return;
    }

    char *s = "I'm learning recursion!";
    printf("%s\n", s);
    recurse(count + 1);

    printf("Returning from recurse function\n");
    return;
}

int main()
{
    recurse(1);
    return 0;
}

/*
    Output:
    I'm learning recursion!
    I'm learning recursion!
    I'm learning recursion!
    I'm learning recursion!
    Returning from if statemnt
    Returning from recurse function
    Returning from recurse function
    Returning from recurse function
    Returning from recurse function

*/
