#include <stdio.h>

int hcf(int a, int b) {
    if(b == 0) return a;
    return hcf(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int h = hcf(a, b);
    printf("HCF = %d\n", h);
    printf("LCM = %d\n", (a * b) / h);

    return 0;
}