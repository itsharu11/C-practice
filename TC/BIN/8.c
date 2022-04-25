
#include<stdio.h>

#define Pi 3.14
int main()

{
	float r,c,a;
	printf("enter the value of radius  ;");
	scanf("%f",&r);
	c=2*3.14*r;
	a=3.14*r*r;
printf("\n\n\ncircumference of the circle with radius %f=%f\n\n",r,c);
	printf("\n\n\n area of the circle with radius %f=%f\n\n",r,a);
	return 0;
}