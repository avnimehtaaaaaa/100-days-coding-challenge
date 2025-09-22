//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, original, sum = 0, digits = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}