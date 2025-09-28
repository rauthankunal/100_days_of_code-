#include <stdio.h>
#include <string.h>

int main() {
    char binary[65]; 
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number!\n");
            return 1;
        }
    }

    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else
            binary[i] = '0';
    }

    printf("1's complement: %s\n", binary);

    return 0;
}

