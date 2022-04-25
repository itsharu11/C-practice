/*
	prime no
*/

#include<stdio.h>
#include<conio.h>
void prime(int);
int main()
{
	int n;
	clrscr();
	printf("\n Enter a number : ");
	scanf("%d",&n);
	prime(n);
	getch();
	return 0;

}
void prime(int n)
{
	int count=0,i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;

	}
	if(count==2)
	printf("\n%d is prime",n);
	else
	printf("\n%d non prime",n);

}