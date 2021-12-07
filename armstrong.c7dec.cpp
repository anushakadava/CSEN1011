#include<stdio.h>
int main(){
	int num,remainder,num1,sum;
	printf("enter any 3 digit number;");
	scanf("%d",&num);
	sum=0;
	num1=num;
	while(num>0)
	{
		remainder=num%10;
		sum=sum+(remainder*remainder*remainder);
		num=num/10
	}
	if(num1==sum)
	{printf("the given number is armstrong number");
	}
	else
	{
		printf("the given number is not a armstrong number");
	}
}
