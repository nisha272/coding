#include <stdio.h>

int n, fact = 1;

void factorial()
{
    if (n > 0)
    {
        fact = fact * n;
        n--;
        factorial();
    }
}

int main()
{
    printf("Enter a number: ");
    scanf("%d", &n);

    factorial();

    printf("Factorial = %d\n", fact);

    return 0;
}