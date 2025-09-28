#include <stdio.h>

int gcd(int a, int b) {
    int remainder;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2, hcf, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    hcf = gcd(num1, num2);

    lcm = (num1 * num2) / hcf;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
