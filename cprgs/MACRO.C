#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
#define pi 3.14
void main()
{
	float r,a;
	clrscr();
	pf("\n Enter the radius :");
	sf("%f",&r);
	a=pi*r*r;
	pf("\n The area is %f ",a);
	getch();
}