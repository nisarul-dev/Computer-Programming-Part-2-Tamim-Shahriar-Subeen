#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fp_in;
    char *input_file = "my-image.jpeg";

    fp_in = fopen(input_file, "rb");

    if (fp_in == NULL) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fseek(fp_in, 0, SEEK_END);

    printf("File Size: %ld bytes\n", ftell(fp_in) );

    printf("File Size (KiloByte): %ld KB \n", ftell(fp_in)/1024 );

    printf("File Size (MegaByte): %.3lf MB \n", ftell(fp_in)/(1024.0*1024.0) );

    fclose(fp_in);

    return 0;
}
/*
    [niSaRuL@fedora 9]$ ./a.out
    File Size: 158880 bytes
    File Size (KiloByte): 155 KB
    File Size (MegaByte): 0.152 MB
*/
