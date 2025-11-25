//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    printf("How many student records do you want to store? ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Oops! Couldn't create students.txt.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    printf("\nGreat! All records have been saved to students.txt.\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Something went wrong while reopening the file.\n");
        return 1;
    }

    printf("\nReading records from the file...\n\n");

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll No: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    return 0;
}
