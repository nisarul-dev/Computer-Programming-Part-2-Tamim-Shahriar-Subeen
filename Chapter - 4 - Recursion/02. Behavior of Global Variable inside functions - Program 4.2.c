#include <stdio.h>

int x = 1; // <-- Global Variable

void myfnc( int y ) {
    y = y * 2;
    x = x + 10;

    printf( "myfun, x = %d, y = %d\n", x, y );
}

int main() {

    int y = 5;

    x = 10; // <--- Accesiing Global Variable

    myfnc(y); // main, x = 20, y = 10

    printf( "main, x = %d, y = %d\n", x, y ); // main, x = 20, y = 5

    return 0;
}
