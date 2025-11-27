#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total = n * (n + 1) / 2;
    int leftSum = 0, pivot = -1;

    for (int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = total - (leftSum - x);
        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);
    return 0;
}
