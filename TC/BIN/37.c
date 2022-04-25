#include<stdio.h>
int main()
{
	int n1,n2;
	
	printf("\n\nEnter the value of first number :  ");scanf("%d",&n1);
	printf("\n\nEnter the value of second number :  ");scanf("%d",&n2);
	if(n1<n2)
	          {
	printf("The first number is minimum/n/n");
		if(n1%2==0){printf("Even\n\n");}
	else{printf("Odd\n\n");}
		}
	else
	{
	printf("The Second number is minimum\n\n");

		if(n2%2==0){printf("Even\n\n");}
		else{printf("Odd\n\n");}
		}
	return 0;
}