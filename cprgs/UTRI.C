#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][4],flag=0,i,j,m,n;
	printf("\n Enter the elements :\n ");
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}


	for(i=0;i<4;i++)
	{
		for(j=i;j<4;j++)
		{

				if(a[i][j]==0)
				flag=1;

		      //	printf("%d ",a[i][j]);
		}
	     //	printf("\n");
	}

	if(flag!=1)
	printf("upper triangle");
	else
	printf("not a upper triangle");

	getch();
	return 0;
}