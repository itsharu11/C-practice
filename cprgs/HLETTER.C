#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if((i<=3 ||i>5)&&(j==5 || j==4))
			{
			printf("  ");
			}
			else
			printf("*
			");


		}
		printf("\n");
	}
	getch();
	return 0;
}
