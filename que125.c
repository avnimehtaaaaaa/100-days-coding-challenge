//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char newline[200];

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();  

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    printf("Enter the line you want to append:\n");
    fgets(newline, sizeof(newline), stdin);

    fprintf(fp, "%s", newline);
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
