#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Create and write file
    fp = fopen("file.txt", "w");
    fputs("Hello World", fp);
    fclose(fp);

    // Open file for reading
    fp = fopen("file.txt", "r");

    // Read using feof()
    printf("File content:\n");
    while (!feof(fp)) {
        ch = fgetc(fp);
        if (ch != EOF)
            putchar(ch);
    }

    // Get current position
    printf("\nPosition: %ld\n", ftell(fp));

    // Move pointer using fseek()
    fseek(fp, 6, SEEK_SET);
    printf("After fseek: %c\n", fgetc(fp));

    // Move back to start using rewind()
    rewind(fp);
    printf("After rewind: %c\n", fgetc(fp));

    fclose(fp);
    return 0;
}