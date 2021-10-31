#include <stdio.h>

int main () {
    FILE *fp_ban, *fp_eng, *fp_math, *fp_result;

    fp_ban = fopen("bangla.txt", "r");
    fp_eng = fopen("english.txt", "r");
    fp_math = fopen("math.txt", "r");
    fp_result = fopen("result.txt", "w");

    int i, roll;
    double bangla[10], english[10], math[10], num;

    for( i = 0; i < 10; i++ ) {
        fscanf(fp_ban, "%d %lf", &roll ,&num);
        bangla[i] = num;
    }
    for( i = 0; i < 10; i++ ) {
        fscanf(fp_eng, "%d %lf", &roll ,&num);
        english[i] = num;
    }
    for( i = 0; i < 10; i++ ) {
        fscanf(fp_math, "%d %lf", &roll ,&num);
        math[i] = num;
    }

    double avg_num;
    for( i = 0; i < 10; i++ ) {
        avg_num = ( bangla[i] + english[i] + math[i] ) / 3.0;
        fprintf(fp_result, "%d %.2lf\n", i+1 , avg_num);
    }

    printf("\"result.txt\" File has been created.\n");

    return 0;
}
