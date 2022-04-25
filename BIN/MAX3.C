// A program to find maximum of three numbers
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,max;
clrscr();
printf("enter the first number ");
scanf("%d",&a);
printf("enter the second number ");
scanf("%d",&b);
printf("enter the second number ");
scanf("%d",&c);
	if(a>b)
		{
		if(a>c)
		printf("max is %d",a);
		else
		printf("max is %d",c);
		}
	else
		{
		if(b>c)
		printf("max is %d",b);
		else
		printf("max is %d",c);
		}
getch();

}




