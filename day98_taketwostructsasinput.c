#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter name, roll number, marks for first student: ");
    scanf("%s %d %f", s1.name, &s1.roll_no, &s1.marks);

    printf("Enter name, roll number, marks for second student: ");
    scanf("%s %d %f", s2.name, &s2.roll_no, &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks)
        printf("Students are identical\n");
    else
        printf("Students are not identical\n");

    return 0;
}
