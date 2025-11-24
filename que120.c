// Write a C program to convert a given string to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }

   
    i = 0;
    while (str[i] && str[i] == ' ') {
        i++; 
    }

    if (str[i]) {
        str[i] = toupper(str[i]);
    }

    printf("Sentence case: %s", str);

    return 0;
}
