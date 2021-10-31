#include <stdio.h>
#include <stdlib.h>

int main () {
    char *file_name = "my-image.jpeg";

    int return_value = remove(file_name);

    if (return_value != 0) {
        perror("File remove failed");
        return EXIT_FAILURE;
    }

    printf("%s removed succusfully\n", file_name );

    return 0;

}
