#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	clrscr();
	printf("\n Enter first matrix \n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

		printf("\n the first matrix is \n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");

	}

	printf("\n Enter second matrix \n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

		printf("\n The second matrix is \n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");

	}


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
		}
	}

	printf("\n the product is ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");

	}

	getch();

}
