#include <stdio.h>

int main() {
    int n = 9; 
    int mid = (n + 1) / 2; 
    int stars, i, j;

    for (i = 1; i <= n; i++) {
        if (i <= mid)
            stars = 2 * i - 1;      
        else
            stars = 2 * (n - i) + 1; 

        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
