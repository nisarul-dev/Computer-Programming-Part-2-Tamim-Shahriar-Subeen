#include <stdio.h>

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

    printf("%d%s\n", n, ordinal_num_sign(n));
    return 0;
}

/*
    [niSaRuL@fedora z. Custom codes for future use]$ ./a.out
    31
    31st
*/
