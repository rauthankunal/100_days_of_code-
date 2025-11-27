#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], result[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        result[i] = next;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) printf(",");
    }

    return 0;
}

