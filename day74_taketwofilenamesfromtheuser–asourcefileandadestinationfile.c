#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter source filename: ");
    scanf("%s", src);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Error opening source file\n");
        return 1;
    }

    FILE *fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Error opening destination file\n");
        fclose(fs);
        return 1;
    }

    char ch;
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully\n");
    return 0;
}
