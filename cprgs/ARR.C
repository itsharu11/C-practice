/*
	Array:
		1)one D
			Datatype variable[size];//declaration
			e.g. int a[5];
			int a[3]={2,3,4};


		2)two D
			Datatype variable[Rsize][Csize];
			e.g int a[2][3];
			int a[][]={{12,23,34},{10,20,30}};
		3)multi D

		-array starts with index 0.
		- it is user define datatye.
		- array stores more than one value in one variable.

*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a[]={100,205,22,123},x=0;
	clrscr();
	printf("Enter your acc number : ");
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{
		if(n==a[i])
		{
	    //	printf("\n login successful");
		  x=1;
		}
       /*		else
		{
       //		printf("\n Enter correct acc number ");
		}   */
		}
		if(x==1)
		{
		printf("login success");
		}
		else
		{
		printf("login fail");
		}


	getch();
	return 0;
}










