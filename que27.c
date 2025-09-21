//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);   // formula for ith odd number
    }

    printf("%d\n", sum);

    return 0;
}