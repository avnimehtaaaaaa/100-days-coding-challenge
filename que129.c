//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Oops! I couldn't open numbers.txt.\n");
        printf("Please make sure the file exists in the same folder.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("Hmm... The file is empty or contains no valid integers.\n");
        return 0;
    }

    float avg = (float)sum / count;

    printf("I read %d numbers from numbers.txt.\n", count);
    printf("Sum      : %d\n", sum);
    printf("Average  : %.2f\n", avg);

    return 0;
}
