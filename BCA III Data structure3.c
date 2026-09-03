#include <stdio.h>

void fact(int n)
{
    static int result = 1;

    if (n > 1)
    {
        result = result * n;
        fact(n - 1);
    }
    else
    {
        printf("Factorial = %d", result);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    fact(n);

    return 0;
}
