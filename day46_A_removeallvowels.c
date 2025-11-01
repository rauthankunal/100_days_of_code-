#include <stdio.h>

int main() {
    char str[200];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);  

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j++] = str[i];  
        }
    }

    str[j] = '\0';

    printf("String after removing vowels:\n%s\n", str);

    return 0;
}
