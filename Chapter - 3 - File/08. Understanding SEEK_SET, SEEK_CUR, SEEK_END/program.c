// Understanding SEEK_SET, SEEK_CUR, SEEK_END
/*
	input.txt file content:
    ABCDEFGHIJKL
    MNOPQRST
    UVWX
    YZ
*/

#include <stdio.h>

int main() {
	FILE *fp;
	int ch;

	fp = fopen( "input.txt", "r" );

	ch = fgetc(fp);
	printf ("%c\n", (char) ch ); // A

	ch = fgetc(fp);
	printf ("%c\n", (char) ch ); // B

	ch = fgetc(fp);
	printf ("%c\n", (char) ch ); // C


    // SEEK_SET - মানে ফাইলের শুরুর অবস্থান
	fseek(fp, 1, SEEK_SET);
/*            |  |
 No of Movement  File Position Indegator
      Offset           Whence      */

	ch = fgetc(fp);
	printf ("%c\n", (char) ch ); //  B


	// SEEK_CUR - মানে ফাইল পজিশন ইন্ডিকেটর বর্তমান অবস্থান
	fseek(fp, 1, SEEK_CUR);

	ch = fgetc(fp);
	printf ("%c\n", (char) ch ); // D


	// SEEK_END - মানে ফাইল পজিশন ইন্ডিকেটর বর্তমান অবস্থান
	fseek(fp, 0, SEEK_END);

	ch = fgetc(fp);
	printf ("%d\n", ch ); // -1 ; Here ch == -1 which means EOF or End of line


	// Getting the last letter of the file
	fseek(fp, -2, SEEK_END);

	ch = fgetc(fp);
	printf ("%c\n", (char) ch ); // Z

	fclose(fp);
}
