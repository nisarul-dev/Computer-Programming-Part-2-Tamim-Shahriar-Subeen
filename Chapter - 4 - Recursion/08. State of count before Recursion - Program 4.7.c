#include <stdio.h>

void recurse( int count ) {
    if(count > 5) {
        printf("Returning from if statemnt\n");
        return;
    }

    printf("Count = %d\n", count);
    recurse(count + 1);

    printf("Returning from recurse function\n");
    // return; Void function doesn't need return. It autometically returens at the end.
}

int main()
{
    recurse(1);
    return 0;
}

/*
    Output:
    Count = 1
    Count = 2
    Count = 3
    Count = 4
    Count = 5
    Returning from if statemnt
    Returning from recurse function
    Returning from recurse function
    Returning from recurse function
    Returning from recurse function
    Returning from recurse function

*/
