//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};
int main() {
    int choice;
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("\nChoose an operation:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nResult: ");

    switch (choice) {
        case ADD:
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;

        case SUBTRACT:
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;

        case MULTIPLY:
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;

        default:
            printf("Invalid choice! Please select from 1 to 3.\n");
    }

    return 0;
}
