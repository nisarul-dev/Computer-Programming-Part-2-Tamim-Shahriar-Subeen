#include<stdio.h>

int main() {
    FILE *fp_in, *fp_out;
    char *input_file = "in_1.txt";
    char *output_file = "out_1.txt";
    int num_1, num_2, sum;

    fp_in = fopen(input_file, "r");
    fscanf(fp_in, "%d", &num_1);
    fscanf(fp_in, "%d", &num_2);
    fclose(fp_in);

    sum = num_1 + num_2;

    fp_out = fopen(output_file, "w");
    fprintf(fp_out, "%d + %d = %d", num_1, num_2, sum);
    fclose(fp_out);

    return 0;
}
