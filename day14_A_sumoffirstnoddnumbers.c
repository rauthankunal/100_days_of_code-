#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of odd numbers to sum: ");
    scanf("%d", &n);

    for (i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
