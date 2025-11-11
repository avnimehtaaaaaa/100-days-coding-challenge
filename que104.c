
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; 
    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2; 
        int rightSum = totalSum - leftSum + x; 

        if (leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("-1\n"); 
    return 0;
}
