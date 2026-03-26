#include<stdio.h>
int main(){
int num;
printf("enter the number:");
scanf("%d",&num);
int  fact=1;
for(int i=0;i<=num;i++)
fact+=num;
printf("factorial is %d",fact);
return 0;
}