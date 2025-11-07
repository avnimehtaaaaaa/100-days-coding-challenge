//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    printf("\nAll possible substrings of \"%s\" are:\n", str);
    for (i = 0; i < len; i++) {
         for (j = i; j < len; j++) {   
            for (k = i; k <= j; k++) {
             printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
/*Enter a string: abc

All possible substrings of "abc" are:
a
ab
abc
b
bc
c
*/