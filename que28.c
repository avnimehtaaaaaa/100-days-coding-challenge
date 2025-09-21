//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;   // using long long for bigger results

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld\n", product);

    return 0;
}
/*Enter n: 4
8
Enter n: 6
48
*/