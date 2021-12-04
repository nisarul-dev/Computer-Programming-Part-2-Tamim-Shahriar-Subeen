#include <stdio.h>

int x;        // <--- Global Variable

int main () {
    int y;    // <--- Local Variable

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
