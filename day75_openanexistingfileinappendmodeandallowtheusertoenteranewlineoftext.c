#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char line[200];
    printf("Enter a line to append: ");
    getchar();
    fgets(line, sizeof(line), stdin);

    fprintf(fp, "%s", line);
    fclose(fp);

    printf("Text appended successfully\n");
    return 0;
}
