// two dimensional array
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}




	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     //	printf("\n a[%d][%d] = %d : ",i,j,a[i][j]);
		     printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     //	printf("\n b[%d][%d] = %d : ",i,j,b[i][j]);
		     printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		     //	printf("\n a[%d][%d] = %d : ",i,j,a[i][j]);
		     printf("%d\t ",c[i][j]);
		}
		printf("\n");
	}
		printf("\n\n------------------\n\n");

		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     printf("%d ",a[i][j]);

		}
			printf("\t ");
			for(j=0;j<3;j++)
		{
		     printf("%d ",b[i][j]);
		}
			printf("\t ");

			for(j=0;j<3;j++)
		{


		     //	printf("\n a[%d][%d] = %d : ",i,j,a[i][j]);
		     printf("%d ",c[i][j]);

		}
		printf("\n");
	}

	printf("\n\n-------------------------\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     printf("%d ",a[i][j]);

		}
			printf("\t ");
			for(j=0;j<3;j++)
		{
		     printf("%d ",b[i][j]);
		}
			printf("\t ");

			for(j=0;j<3;j++)
		{


		     //	printf("\n a[%d][%d] = %d : ",i,j,a[i][j]);
		     printf("%d ",a[i][j]-b[i][j]);

		}
		printf("\n");
	}





	getch();
	return 0;
}