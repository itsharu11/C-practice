#include<stdio.h>

int main()

{
	int year;
	printf("\n\n\n enter the year ; " );
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year /n/n");
		
	}
	else
	{
		printf("not leap year \n\n ");
	}
	printf("\n\n");
	return 0;
}