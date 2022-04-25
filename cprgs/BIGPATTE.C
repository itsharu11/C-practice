#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	clrscr();
	printf("enter the number of rows : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		{
			for(k=n-1;k>=i;k--)
			{
				printf("  ");
			}
			for(j=1;j<=i;j++)
			{
			     printf("  * ");
			}
			printf("\n");

		}
		for(i=n;i>=1;i--)
		{
			for(k=n-1;k>=i;k--)
			{
				printf("  ");
			}
			for(j=1;j<=i;j++)
			{
			     printf("  * ");
			}
			printf("\n");

		}
		getch();
		return 0;
}