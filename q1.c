#include<stdio.h>
int main(){
	float bp,da,hra,grpay;
	pritnf("\nEnter Basic Salary Of Ramesh:");
	scanf("%f",&bp);
	da=0.4*bp;
	hra=0.2*bp;
	grpay=bp+da+hra;
	printf("Basic SAlary of Ramesh=%f\n",bp);
	printf("Dearness Allowance =%f\n",da);
	printf("House Rent allowance = %f\n",hra);
	printf("Gross pay of Ramesh is %f\n",grpay);
 
return 0;


}