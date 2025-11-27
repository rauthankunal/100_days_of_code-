#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], result[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        result[i] = prev;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) printf(",");
    }

    return 0;
}
