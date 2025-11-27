#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, id, salary for employee %d: ", i + 1);
        scanf("%s %d %f", emp[i].name, &emp[i].id, &emp[i].salary);
    }

    FILE *fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fwrite(emp, sizeof(struct Employee), n, fp);
    fclose(fp);

    struct Employee readEmp[n];
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fread(readEmp, sizeof(struct Employee), n, fp);
    fclose(fp);

    printf("\nEmployee Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", readEmp[i].name, readEmp[i].id, readEmp[i].salary);
    }

    return 0;
}
