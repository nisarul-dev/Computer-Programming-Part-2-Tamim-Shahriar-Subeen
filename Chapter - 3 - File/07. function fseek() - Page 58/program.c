// How fgetc words

#include <stdio.h>

int main() {
	FILE *fp;
	int ch;

	fp = fopen( "input.txt", "r" );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );


	fseek(fp, 1, 0);
/*            |  |
 No of Movement  File Position Indegator
      Offset           Whence      */

	ch = fgetc(fp);
	printf ("%c\n", (char) ch );

	fclose(fp);

/*
	[niSaRuL@fedora A Task]$ ./a.out
    A
    B
    C
    B
*/

}
