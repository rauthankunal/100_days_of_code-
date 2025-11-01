#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    char repeat = '\0';

    printf("Enter a string: ");
    gets(str);  

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];


        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            freq[index]++;

            if (freq[index] == 2) {
                repeat = ch;
                break; 
            }
        }
    }

    if (repeat)
        printf("First repeating lowercase alphabet: %c\n", repeat);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
