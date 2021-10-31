#include<stdio.h>

int main() {
    FILE *fp;
    char *file_name = "Hello.txt";

    fp = fopen(file_name, "w");
    fprintf(fp, "Hey there, ");
    fclose(fp);

    fprintf(fp, "I'm Nisarul Amin Naim.");

    return 0;
}
