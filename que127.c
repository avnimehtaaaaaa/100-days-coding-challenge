//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Oops! I couldn't open input.txt for reading.\n");
        printf("Please make sure the file exists in the same folder.\n");
        return 1;
    }

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("I found input.txt, but I couldn't create output.txt.\n");
        fclose(inFile);
        return 1;
    }

    while ((ch = fgetc(inFile)) != EOF) {

        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("All done! Text has been converted to uppercase and saved in output.txt.\n");

    return 0;
}
