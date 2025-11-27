#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter name, roll number, marks: ");
    scanf("%s %d %f", s->name, &s->roll_no, &s->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    free(s);
    return 0;
}
