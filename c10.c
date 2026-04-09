#include <stdio.h>
int main() {
FILE *fp;
char str[100];
int count = 0;
fp = fopen("example.txt", "w");
fputs("Hello, World!\n", fp);
fputs("abc.\n", fp);
fputs("xyzzzsz!", fp);
fclose(fp);
fp = fopen("example.txt", "r");
while (fgets(str, sizeof(str), fp) != NULL) {
printf("%s", str);
count++;
}
fclose(fp);
printf("Number of lines: %d\n", count);
return 0;
}