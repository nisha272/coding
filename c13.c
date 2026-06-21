#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "w");
    fputs("Hello World", fp);
    fclose(fp);
    fp = fopen("file.txt", "r");
    printf("File content:\n");
    while (!feof(fp)) {
        ch = fgetc(fp);
        if (ch != EOF)
            putchar(ch);
    }
    printf("\nPosition: %ld\n", ftell(fp));
    fseek(fp, 6, SEEK_SET);
    printf("After fseek: %c\n", fgetc(fp));
    rewind(fp);
    printf("After rewind: %c\n", fgetc(fp));
    fclose(fp);
    return 0;
}