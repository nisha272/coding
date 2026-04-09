#include <stdio.h>
typedef struct {
int id;
char name[20];
} Student;
int main() {
FILE *fp;
Student s1 = {1, "keshav"}, s2;
fp = fopen("students.bin", "wb");
fwrite(&s1, sizeof(Student), 1, fp);
fclose(fp);
fp = fopen("students.bin", "rb");
fread(&s2, sizeof(Student), 1, fp);
printf("ID: %d, Name: %s\n", s2.id, s2.name);
fclose(fp);
int searchId = 1;
fp = fopen("students.bin", "rb");
while (fread(&s2, sizeof(Student), 1, fp) == 1) {
if (s2.id == searchId) {
printf("Record found: ID: %d, Name: %s\n", s2.id, s2.name);
break;}}
fclose(fp);
return 0;}