#include<stdio.h>
void print_table(int range,int num){

int mul;
for(int i=0;i<=range;i++){
	
	mul=num*i;
printf("%d *%d=%d",num,i,mul);
printf("\n");

}
int main(){
	int range =7;
	int num=4;
	print_table(range,num);
	return 0;
}
