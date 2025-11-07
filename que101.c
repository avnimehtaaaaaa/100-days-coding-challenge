#include <stdio.h>

void findFirstAndLast(int arr[], int n, int target) {
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    printf("%d %d\n", first, last);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int target;
    printf("Enter target element: ");
    scanf("%d", &target);

    findFirstAndLast(arr, n, target);
    return 0;
}
