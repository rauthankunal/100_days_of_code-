#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;
    printf("Enter name, id, salary: ");
    scanf("%s %d %f", emp.name, &emp.id, &emp.salary);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
