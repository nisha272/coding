#include <stdio.h>

int main()
{
    int a[100], n, i, d, flag = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    d = a[1] - a[0];

    for(i = 1; i < n - 1; i++)
    {
        if(a[i + 1] - a[i] != d)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("The given sequence is in AP.");
    else
        printf("The given sequence is not in AP.");

    return 0;
}