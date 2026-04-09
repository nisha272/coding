#include <stdio.h>

int main() {
    FILE *fp;

    // Create and write (w mode)
    fp = fopen("file.txt", "w");
    fprintf(fp, "Hello World\n");
    fclose(fp);

    // Read (r mode)
    fp = fopen("file.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    // Append (a mode)
    fp = fopen("file.txt", "a");
    fprintf(fp, "Appended Text\n");
    fclose(fp);

    return 0;
}