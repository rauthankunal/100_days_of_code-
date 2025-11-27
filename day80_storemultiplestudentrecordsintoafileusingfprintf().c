#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char name[100];
    int roll;
    float marks;

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks: ");
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %d %f", name, &roll, &marks);
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
