#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error opening output.txt\n");
        fclose(fin);
        return 1;
    }

    char ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Conversion to uppercase completed\n");
    return 0;
}
