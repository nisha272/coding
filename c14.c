#include <stdio.h> 
#define PI 3.14   
#define SQUARE(x) (x*x)

int main() {
    int r = 7;

    printf("Area of circle: %.2f\n", PI * r * r);
    printf("Square of 4: %d\n", SQUARE(6));

    return 0;
}