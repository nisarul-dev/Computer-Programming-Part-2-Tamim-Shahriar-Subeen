#include <stdio.h>

struct student {
    int id;
    char name[40];
};

int main() {

    struct student std_1;

    scanf("%d", &std_1.id);
    scanf(" %[^\n]", std_1.name);

    printf("ID: %d\n", std_1.id);
    printf("Name: %s\n", std_1.name);

    return 0;
}
/*
    [niSaRuL@fedora Chapter - 6 - Structure and Union]$ ./a.out
    1
    Nisarul Amin Naim
    ID: 1
    Name: Nisarul Amin Naim

*/
