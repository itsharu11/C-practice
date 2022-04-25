#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,k=0;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
		for(j=1;j<=i;j++)
			{
			printf("%d ",++k);
			}
			printf("\n");
		}
	getch();
	return 0;
}