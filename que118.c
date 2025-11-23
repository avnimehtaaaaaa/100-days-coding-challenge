//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements (0 to %d, one number missing):\n", n);

    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }
    int expectedSum = n * (n + 1) / 2;

    int missingNumber = expectedSum - actualSum;

    printf("Missing number is: %d\n", missingNumber);

    return 0;
}
