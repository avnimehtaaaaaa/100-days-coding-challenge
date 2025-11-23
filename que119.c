//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], visited[n+1];
    for (int i = 0; i <= n; i++) {
        visited[i] = 0;
    }

    printf("Enter the array elements:\n");

    int repeated = -1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (visited[arr[i]] == 1) {
            repeated = arr[i];  
        } else {
            visited[arr[i]] = 1;
        }
    }

    printf("Repeated element is: %d\n", repeated);

    return 0;
}
