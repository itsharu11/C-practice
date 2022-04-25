/*
  do while - it is exit control loop
  it will first execute then checks th condition
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	do
	{
	int n1,n2,c;
	printf("\nselect the choice");
	printf("\n1. Addition");
	printf("\n2. subtraction");
	printf("\n3. multiplication");
	printf("\n4. division");
	printf("\n5. min");
	printf("\n6. max");
	printf("\n7. exit");
	printf("Enter your choice");
	scanf("%d",&c);
	printf("\nEnter the two numbers");
	scanf("%d %d",n1,n2);
	switch(c)
	{
		case 1:
		printf("Addition =( %d + %d ) = %d",n1,n2,n1+n2);
		break;

		case 2:
		printf("Subtraction = ( %d - %d )= %d",n1,n2,n1-n2);
		break;

		case 3:
		printf("Multiplication = ( %d * %d ) = %d",n1,n2,n1*n2);
		break;

		case 4:
		printf("Division = ( %d / %d ) = %d",n1,n2,n1/n2);
		break;

		case 5:
		if(n1<n2)
		printf(" %d is min",n1);
		else
		printf("%d is min",n2);
		break;
		case 6:
		if(n1>n2)
		printf("%d is max",n1);
		else
		printf("%d is max",n2);

		case 7:
		break;

	}

	}while(c!=0);

	getch();
	return 0;

}