#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Find common difference
    int d1 = a[1] - a[0];
    int d2 = a[2] - a[1];
    int d = (d1 < d2) ? d1 : d2;

    int missing = -1;

    // Check for missing term
    for(i = 1; i < n; i++) {
        if(a[i] - a[i - 1] != d) {
            missing = a[i - 1] + d;
            break;
        }
    }

    if(missing == -1) {
        printf("The sequence is an AP with no missing term.\n");
    } else {
        printf("Missing term = %d\n", missing);
        printf("Series including the missing term:\n");

        for(i = 0; i < n; i++) {
            printf("%d ", a[i]);

            if(i < n - 1 && a[i + 1] - a[i] != d) {
                printf("%d ", missing);
            }
        }
        printf("\n");
    }

    return 0;
}