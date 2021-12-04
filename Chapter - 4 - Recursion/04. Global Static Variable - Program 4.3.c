#include <stdio.h>

int a;        // <---- Global Variable
static int b; // <---- Global Static Variable

void func() {
    a = a + 1;
    b = b + 1;
}

int main()
{
    func();
    printf("a = %d\n", a); // a = 1
    printf("b = %d\n", b); // b = 1
    return 0;
}

/*
    From the output we can see. Both of the output is the same.
    So, there is no diffrence between "Global Variable" Vs "Global Static Variable"
    but "Global Variable" works on any file of a whole project
    where "Global Static Variable" works just on a single .c file where it's declared.
*/
