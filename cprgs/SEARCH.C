#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],n,i,flag,val;
	clrscr();
	printf("\n Enter the numer of elements ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n Enter the value to search");

	for(i=0;i<n;i++)
	{
		if(a[i]==val)
		{
		flag=1;
		break;
		}
	}

	if(flag==1)
	{
	printf("Found");
	}
	else
	{
	printf("not found");
	}
	getch();
	return 0;
}