#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (4 * i - 1);
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
