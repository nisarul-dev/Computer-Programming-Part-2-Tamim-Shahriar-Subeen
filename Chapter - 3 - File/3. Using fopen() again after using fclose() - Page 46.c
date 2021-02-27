#include<stdio.h>

int main() {
    FILE *fp;
    char *file_name = "Hello.txt";

    fp = fopen(file_name, "w");
    fprintf(fp, "Hey there, ");
    fclose(fp);

    fp = fopen(file_name, "a"); // This time it is Append Mode
    fprintf(fp, "I'm Nisarul Amin Naim.");
    fclose(fp);

    return 0;
}
