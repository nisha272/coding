// C program to find the print
// Alphabets from (A to Z) and
// (a to z) using while loop

#include <stdio.h>

int main()
{
    // Declaring the variable
    char i;

    // Display the alphabets
    printf("The Alphabets from A to Z are: \n");

    // Traversing each character
    // with the help of while loop

    i = 'A';

    while (i <= 'Z') {
        printf("%c ", i);
        i++;
    }

    // for lower case alphabets
    printf("\nThe Alphabets from a to z are: \n");

    i = 'a';

    while (i <= 'z') {
        printf("%c ", i);
        i++;
    }

    return 0;
}