#include<stdio.h>
int main(){
	
	float cp,sp,p,l;
	printf("Enter cost price and selling pr9ce:");
	scanf("%f %f",&cp,&sp);

	p=sp-cp;
	l=cp-sp;
	if(p>0)
	printf("the seller akes a profit of rs%f\n",p);

	if(l>0)
	printf("seller made a profit pf rs%f\n",l);

	if (p==0)
	printf("there is no loss no profit\n");

	return 0;
}