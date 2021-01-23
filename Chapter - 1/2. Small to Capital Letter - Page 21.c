#include<stdio.h>

int main() {
    char small_letter, capital_letter;
    printf("Please enter a small letter : ");
    small_letter = getchar();

    capital_letter = 'A' + ( small_letter - 'a' );

    printf("\nThe capital letter of '%c' is : '%c'\n", small_letter, capital_letter);
    /*
        # capital_letter = 'A' + ( small_letter - 'a' )
        => capital_letter = 65 + ( small_letter - 97 )
        => capital_letter = small_letter - 32
    */
    return 0;
}
