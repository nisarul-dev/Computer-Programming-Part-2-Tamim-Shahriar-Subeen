#include<stdio.h>

int main() {
    int i;
    for( i = 33; i < 127; i++) {
        printf("\nFor ASCII code '%d' the char. is : '%c'\n", i, i);
    }
    /*
    # The size ASCII Code is a 1 byte/ 8 bit.
    # So, there are 256 items
    # The ASCII Code is from 0 to 255
    # The characters of ASCII Code 127 to 255 are non-printable
    */
    return 0;
}
