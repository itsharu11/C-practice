#include<stdio.h>

int main()
{
	float p,r,n,i;

	printf("enter the prinicpal amount "); scanf("%f",&p);
	printf("enter the rate "); scanf("%f",&r);
	printf("enter number of years "); scanf("%f",&n);

	
	i=(p*r*n)/100;
	
	printf("\n\n\n the simple intrest is %f",i);
	return 0;
	
}