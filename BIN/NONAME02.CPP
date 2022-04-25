// two dimensional array
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3];

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
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     //	printf("\n a[%d][%d] = %d : ",i,j,a[i][j]);
		     printf("%d\t",a[i][j]);
		}
		printf("\n");
	}


	getch();
	return 0;
}