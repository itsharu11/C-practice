#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	clrscr();
	printf("enter nos");
	scanf("%d",&n);
	if(n%2==0)
	{
	printf("the number is even");
	}
	else
	{
	printf("the number is odd");
	}
	getch();
	return 0;
}