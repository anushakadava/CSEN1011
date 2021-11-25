/*program to calculate simple interest and variable interest*/
#include <stdio.h>
#include<math.h>
int main()
{
	int p,r,t;
	printf("enter your principle:--\n");
	scanf("%d,&p");
	printf("enter your rate of interest:--\n");
	scanf("%d",&r);
	printf("enter your time period:--\n");
	scanf("%",&t);
	
	printf("your calculated simple interest value is--%d\n",(p*r*t)/100);
	
	printf("your calculated compound interest value is--%d\n",p*(1+r/100)*t)-1);
	
}
