#include <stdio.h>

struct nametype {
    char first[20];
    char second[20];
};

struct student {
    int id;
    struct nametype name;
};

int main() {

    struct student std_1;

    scanf("%d", &std_1.id);
    scanf(" %[^\n]", std_1.name.first);

    printf("ID: %d\n", std_1.id);
    printf("Name: %s\n", std_1.name.second);

    return 0;
}

/*
    [niSaRuL@fedora Chapter - 6 - Structure and Union]$ ./a.out
    1
    Nisarul Amin Naim
    ID: 1
    Name: Nisarul Amin Naim

*/
