
#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    FILE *fp;
    struct Student s, t;
    int n, i, search, found = 0;

    // Write records
    fp = fopen("data.dat", "wb");
    printf("Enter number of records: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %s", &s.id, s.name);
        fwrite(&s, sizeof(s), 1, fp);
    }
    fclose(fp);

    // Search record
    printf("Enter ID to search: ");
    scanf("%d", &search);

    fp = fopen("data.dat", "rb");
    while (fread(&t, sizeof(t), 1, fp)) {
        if (t.id == search) {
            printf("Found: %d %s", t.id, t.name);
            found = 1;
        }
    }
    fclose(fp);

    if (!found)
        printf("Not found");

    return 0;
}