#include <stdio.h>

void func() {
    int a = 10;
    static int s = 10; // <---- static variable inside local scope.

    a = a + 2;
    s = s + 2;

    printf("a = %d, s = %d\n", a, s);
}

int main()
{
    func();
    func();
    func();

    return 0;
}

/*
    Output:
    a = 12, s = 12
    a = 12, s = 14
    a = 12, s = 16

    A local static variable is one that can only be accessed in the function where it is created.

    Where, A global static variable is one that can only be accessed in the file where it is created.
    This variable is said to have file scope.
*/
