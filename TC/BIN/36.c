#include <stdio.h>
int main()
{
	int n1,n2;
	system ("clear");
	printf("Enter the first number: ");scanf("%d",&n1);
	printf("Enter the second number:");scanf("%d",&n2);
	if(n1%n2==0)
	{printf("The first number is divisible by the second number\n");}
	else
	{printf("The first number not is divisible by the second number\n");}
	printf("\n");
	return 0;
}	