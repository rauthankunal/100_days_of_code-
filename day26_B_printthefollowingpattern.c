#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int n = sizeof(groups) / sizeof(groups[0]);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        if (i != n - 1) {
            printf("\n");
        }
    }

    return 0;
}
