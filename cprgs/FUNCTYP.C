/*
	Different form of function
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

// function rt void and without argument
void display()
{
	printf("\nFunction without argument and return type");
}
//fun with one argument and return void
void square(int l)
{
	int area= l * l;
	printf("\nArea = %d",area);
}
//function with  argument and rt

double square_root(double d)
{
		double sr;
		sr = sqrt(d);
		return sr;
}
//function with no argument and with rt
double pi()
{
	double p;
	p=(22/7);

	return p;
}
void main()
{
	double r,pie,sq,res;
	int n;
	clrscr();

	printf("\nAn Example of the function with argument and return type\n\n");
	display();

	printf("\n Enter any number :  ");
	scanf("%d",&n);
	square(n);

	printf("\n Enter a number for square root : ");
	scanf("%lf",&sq);
	res=square_root(sq);
	printf("\n Square root is %.2lf",res);

	printf("\n Enter radius of circle");
	scanf("%lf",&r);

	pie=pi();
	res=pie * pow(r,2.0);
	printf("\n Area of circle %lf",res);

	getch();









}