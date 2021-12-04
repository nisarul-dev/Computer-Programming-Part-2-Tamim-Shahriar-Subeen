#include <stdio.h>
#include <string.h>

int i = 0;

void str_reverse(char str[], int length) {
    int i_bkp = i;
    if( i_bkp >= length ) {
        return;
    }

    char temp = str[i_bkp];
    i++;

    str_reverse(str, length);

    str[length-i_bkp-1] = temp;
    return;
}

int main()
{
    char a_string[100];
    printf("\nWrite someting and get reversed form of it: ");
    gets(a_string);

    str_reverse( a_string, strlen(a_string) );

    printf("%s\n", a_string);

    return 0;
}
/*
    Write someting and get reversed form of it: Hello Bangladesh
    hsedalgnaB olleH
*/
