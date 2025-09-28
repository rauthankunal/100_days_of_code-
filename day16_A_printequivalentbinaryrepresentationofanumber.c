#include <stdio.h>

int main() {
    int num;
    int binary[32]; 
    int index = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    unsigned int n = num; 

    while (n > 0) {
        binary[index] = n % 2; 
        n /= 2;                 
        index++;
    }

    printf("Binary representation of %d is: ", num);
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

