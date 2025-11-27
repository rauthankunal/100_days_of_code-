#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    char c, prev = ' ';

    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (!isspace(c) && (isspace(prev) || prev == '\0')) words++;
        prev = c;
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
