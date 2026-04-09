#include <stdio.h>

int main() {
    FILE *fp;
    char ch, word[50];

    // Write to file using fprintf() and putc()
    fp = fopen("file.txt", "w");
    fprintf(fp, "Hello World\n");
    putc('A', fp);
    fclose(fp);

    // Read from file using getc() and fscanf()
    fp = fopen("file.txt", "r");

    printf("Using getc():\n");
    while ((ch = getc(fp)) != EOF)
        putchar(ch);

    rewind(fp); // go back to beginning

    printf("\n\nUsing fscanf():\n");
    while (fscanf(fp, "%s", word) != EOF)
        printf("%s ", word);

    fclose(fp);

    return 0;
}
