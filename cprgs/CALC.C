/*
  do while - it is exit control loop
  it will first execute then checks th condition
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{

	int n1,n2,c;
	clrscr();
	do
	{
	printf("\nselect the choice");
	printf("\n1. Addition");
	printf("\n2. subtraction");
	printf("\n3. multiplication");
	printf("\n4. division");
	printf("\n5. min");
	printf("\n6. max");
	printf("\n7. exit");
	printf("\nEnter your choice : ");
	scanf("%d",&c);

	switch(c)
	{
		case 1:
			printf("\nEnter the two numbers");
			scanf("%d %d",&n1,&n2);
		printf("\nAddition =( %d + %d ) = %d",n1,n2,n1+n2);
		break;

		case 2:
			printf("\nEnter the two numbers");
			scanf("%d %d",&n1,&n2);
		printf("\nSubtraction = ( %d - %d )= %d",n1,n2,n1-n2);

		break;

		case 3:
			printf("\nEnter the two numbers");
			scanf("%d %d",&n1,&n2);

		printf("\nMultiplication = ( %d * %d ) = %d",n1,n2,n1*n2);
		break;

		case 4:
			printf("\nEnter the two numbers");
			scanf("%d %d",&n1,&n2);

		printf("\nDivision = ( %d / %d ) = %d",n1,n2,n1/n2);
		break;

		case 5:
			printf("\nEnter the two numbers : ");
			scanf("%d %d",&n1,&n2);

		if(n1<n2)

		printf("\n%d is min",n1);
		else
		printf("\n%d is min",n2);
		break;
		case 6:
			printf("\nEnter the two numbers");
			scanf("%d %d",&n1,&n2);

		if(n1>n2)
		printf("\n%d is max",n1);
		else
		printf("\n%d is max",n2);
		break;
		case 7:
		exit (0);
		break;
		default :
		printf("\nenter your choice between 1 to 7");

	}

	}while(c>0);

	getch();
	return 0;

}