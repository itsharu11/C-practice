#include<stdio.h>

int main()

{
	int age;
	system("clear");
	printf("\n\n\n enter the age; " );
	scanf("%d",&age);
	
		if(age>0)
		{
	if(age>=18)
	{
		printf("eligible for voting /n/n");
		
	}
	else
	{
		printf("not eligble for voting \n\n ");
	}
}
	else
	{
		printf("age enter should be greater than zero");
		}
		

	
	return 0;
	}
