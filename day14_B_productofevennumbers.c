#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    if (n >= 2)
        printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}
