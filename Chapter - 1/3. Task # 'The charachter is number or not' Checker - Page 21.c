#include<stdio.h>

int isNum(char letter) {
    if( letter >= '0' && letter <= '9' ) {
// Alternate line for Line-4 could be -
//   if( letter >= 48 && letter <= 57 ) {
        return 1;
    }
    return 0;
}

int main() {
    char the_letter;
    printf("Note # If the input is a number then print 1. otherwise print 0.\nPlease, Enter a character : ");
    the_letter = getchar();
    printf("\n");
    printf("%d\n", isNum(the_letter));
    return 0;
}
