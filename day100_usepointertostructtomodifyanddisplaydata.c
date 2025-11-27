#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter name, roll number, marks: ");
    scanf("%s %d %f", ptr->name, &ptr->roll_no, &ptr->marks);

    ptr->marks += 5;

    printf("\nUpdated Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
