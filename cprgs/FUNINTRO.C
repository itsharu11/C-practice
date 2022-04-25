/*
	function;
		two types of functions:
		1)user define function
			- it is created by user
			- it always returns a value
			- if it doesnot return anything then use void.
			- returntype of the function and datatype of the return variable must be same.
			- declaration of the function after the include header files.

			syntax:

			// declaration of the functions
			 returntype fun_name(arguments);
			// define a function
				returntype function_name(argument1,...argn)
				{
					//body

					return varable;
				}
		2) Library function
			A function which is given by the header files.
			e.g printf,scanf,clrscr,getch,puts,gets....

	- function reduce the repeation of code. and save the momory.
	- function returns a value.
	- function call by its name only.
	- function can call two ways
		 1) call by value
		 2) call by reference
	- if function call itself then it is called recursive function.
	- when function is called then the no of argument must be same as the definitiion of the function


*/


#include"stdio.h"
#include<conio.h>

int addition(int,int);// prototype ofthe functions(Declarations)
void multy(int a,int b)
{
	int c = a * b;
	printf("\nMultiplication = %d ",c);
}

void main()
{
	int a,b,sum;
	clrscr();

	printf("\nEnter Two values : ");
	scanf("%d %d",&a,&b);

	// calling a function

	sum = addition(a,b);// passing two value to the function
	printf("\nAddtion = %d",sum);
	// calling multy function. it doesnot return value.
	multy(a,b);

	getch();
}

// Defining a addition function
int addition(int a,int b)
{
	int c;
	// store the value of addition
	c=(a + b);
	// return sum
	return c;
}
