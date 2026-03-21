#include<stdio.h>
int main(){
	char another;
	int num;
	do
	{
		printf("enter a number" );
		scanf("%d",&num);
		printf("squrae of %d is %d\n",num,num*num);
		printf("want another number y/n");
		fflush(stdin);
		scanf("%c",&another);

	}while(another=='y');
	return 0;
}