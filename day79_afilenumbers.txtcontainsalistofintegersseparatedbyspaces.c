#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int num, count = 0, sum = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers in the file\n");
        return 1;
    }

    double average = (double)sum / count;
    printf("Sum: %d\nAverage: %.2f\n", sum, average);
    return 0;
}
