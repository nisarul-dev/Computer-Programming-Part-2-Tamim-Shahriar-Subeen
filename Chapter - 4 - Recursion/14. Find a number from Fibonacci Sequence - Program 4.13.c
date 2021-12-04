#include <stdio.h>

int func_calls_count = 0;

int fib( int n ) {
    func_calls_count++;

    if ( n == 1 || n == 2) {
        return 1;
    }

    return fib(n-2) + fib(n-1);
}

char *ordinal_num_sign( int n ) {
    if( (n-1) % 10 == 0 && n != 11) {
        return "st";
    } else if ( (n-2) % 10 == 0 && n != 12 ) {
        return "nd";
    } else if ( (n-3) % 10 == 0 && n != 13 ) {
        return "rd";
    } else {
        return "th";
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Undefined\n");
        return 0;
    }

    printf("The %d%s fibonacci number is is %d\n", n, ordinal_num_sign(n), fib(n));
    printf("Number of function calls: %d\n", func_calls_count);
    return 0;
}

/*
    Terminal:
    7
    The 7th fibonacci number is is 13
    Number of function calls: 25

*/

