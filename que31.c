//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>
int main() {
    int num;
    int binary[32];  // to store binary digits
    int i = 0;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Special case for 0
    if (num == 0) {
        printf("0\n");
        return 0;
    }

    // Converting to binary
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Printing binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

