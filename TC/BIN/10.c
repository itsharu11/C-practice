#include<stdio.h>
int main()
{
	float p,a,l,b;
	printf("enter the value of length ;");scanf("%f",&l);
	printf("enter the value of breadth");scanf("%f",&b);
	
p=2*(l+b);
a=l*b;	
	
printf("\n\n\n perimeter of the rectangle with lenght and breath = %f\n\n",p);
	printf("\n\n\n area of the rectangle with  with lenght and breath %f\n\n",a);
	return 0;
}