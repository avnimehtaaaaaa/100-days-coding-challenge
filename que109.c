//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid: k cannot be larger than array size.\n");
        return 0;
    }

    int maxSum = -1000000000; 
    
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarrays of size %d is: %d\n", k, maxSum);

    return 0;
}
