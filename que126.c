//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;

    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");

    
    if (fp == NULL) {
        printf("Oops! I couldn't find the file \"%s\".\n", filename);
        printf("Please make sure the name is correct and try again.\n");
        return 1;
    }

    
    printf("\nGreat! The file opened successfully.\n");
    printf("Here is what's inside:\n\n");

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
