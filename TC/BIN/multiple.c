/*Program to accept the number and print its multiples*/
#include<stdio.h>
int main()
{
	int count,no;
	printf("Enter a number of which you want to print multiples : ");
	scanf("%d",&no);
	printf("\n\n");
	for(count=1;count<=10;count=count+1)	/*count++*/
	{
		printf("%d\n",count*no);
	}
	printf("\n\n");
	return 0;
}