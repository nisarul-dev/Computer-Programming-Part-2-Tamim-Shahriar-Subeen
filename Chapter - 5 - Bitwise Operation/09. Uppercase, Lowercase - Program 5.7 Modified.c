#include <stdio.h>

void to_upper( char str[] ) {
    for ( int i = 0; str[i] != '\0'; i++ ) {
        str[i] = str[i] & 95;
    }
}

void to_lower( char str[] ) {
    for ( int i = 0; str[i] != '\0'; i++ ) {
        str[i] = str[i] | 32;
    }
}

int main() {

    char alphabets[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";

    to_upper(alphabets);
    printf( "Uppercase: '%s'\n", alphabets );

    to_lower(alphabets);
    printf( "Lowercase: '%s'\n", alphabets );

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 5 - Bitwise Operation]$ ./a.out
    Uppercase: 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    Lowercase: 'abcdefghijklmnopqrstuvwxyz'

    ---------------------------------------------
    a    = 0110 0001
    95   = 0101 1111
    ______________________
    a&95 = 0100 0001 = A

    ---------------------------------------------
    A    = 0100 0001
    32   = 0010 0000
    ______________________
    A|32 = 0110 0001 = a
*/
