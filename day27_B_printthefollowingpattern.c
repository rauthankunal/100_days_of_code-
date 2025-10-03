#include <stdio.h>

int main() {
    int n = 7; 
    int mid = (n + 1) / 2;
    int i, j, stars, spaces;

    for (i = 1; i <= n; i++) {
        if (i <= mid)
            stars = 2 * i - 1;       
        else
            stars = 2 * (n - i) + 1;  

        spaces = (n - stars) / 2;

        for (j = 1; j <= spaces; j++)
            printf(" ");

        for (j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
