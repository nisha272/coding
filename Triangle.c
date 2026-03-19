#include<stdio.h>
#include<math.h>
int main(){

	float a,b,c,sp,area;
	printf("Enter the sides:");
    scanf("%f %f %f ",&a,&b,&c");
    	sp=(a+b+c)/2;
    	area= sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    	printf("area is",area);

    	return 0;
}