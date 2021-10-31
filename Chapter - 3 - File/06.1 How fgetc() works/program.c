// How fgetc works

#include <stdio.h>

int main() {
	FILE *fp;
	int ch;

	fp = fopen( "abcd.txt", "r" );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	fclose(fp);

/*
	[niSaRuL@fedora A Task]$ ./a.out
    A
    B
    C
    D
    E


    F
    G
    H
*/

}
