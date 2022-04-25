/*
	prime no
*/

#include<stdio.h>
#include<conio.h>
void prime(int,int);
int factor(int);
int main()
{
	int n,c;
	clrscr();
	printf("\n Enter a number : ");
	scanf("%d",&n);
	c=factor(n);
//	prime(c,n);
	getch();
	return 0;

}
int factor(int n)
{
	int count=0,i;
	printf("\n Factors are : ");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		printf("%d\t",i);
		count++;
		}

	}
	prime(count,n);
	return count;
}
void prime(int cnt,int n)
{

	if(cnt==2)
	printf("\n %d is prime",n);
	else
	printf("\n %d non prime",n);

}