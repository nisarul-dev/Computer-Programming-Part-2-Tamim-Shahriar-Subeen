#include <stdio.h>

int x = 1; // <-- Global Variable

void myfnc( int y ) {
    y = y * 2;
    x = x + 10;

    printf( "myfun, x = %d, y = %d\n", x, y );
}

int main() {

    int y = 5;

    int x = 10; // <-- Local Variable

    myfnc(y); // main, x = 11, y = 10

    printf( "main, x = %d, y = %d\n", x, y ); // main, x = 10, y = 5

    return 0;
}
