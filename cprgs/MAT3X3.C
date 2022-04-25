#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum;
	

	printf("\n Enter the first array :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	printf("\n Enter the second array :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&b[i][j]);
		}
		printf("\n");
	}


	printf("\n The first array is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	printf("\n The second array is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",b[i][j]);
		}
		printf("\n");
	}

   //	printf("\n The second array is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 sum=0;
			for(k=0;k<3;k++)
			{
			 sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;

		}
		printf("\n");
	}

	printf("\n The multi array is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;

}


