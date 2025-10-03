#include <stdio.h>

int main() {
    int n, posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], pos[n], neg[n], zero[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            pos[posCount++] = arr[i];
        } else if (arr[i] < 0) {
            neg[negCount++] = arr[i];
        } else {
            zero[zeroCount++] = arr[i];
        }
    }

    printf("Positive elements (%d): ", posCount);
    for (int i = 0; i < posCount; i++)
        printf("%d ", pos[i]);
    printf("\n");

    printf("Negative elements (%d): ", negCount);
    for (int i = 0; i < negCount; i++)
        printf("%d ", neg[i]);
    printf("\n");

    printf("Zero elements (%d): ", zeroCount);
    for (int i = 0; i < zeroCount; i++)
        printf("%d ", zero[i]);
    printf("\n");

    return 0;
}
