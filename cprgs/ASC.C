//ascending array
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,j,n,temp;
	clrscr();
	printf("enter the number of elements : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	printf("\n Value %d : ",i);
	scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}
	}

	for(i=0;i<n;i++)


	printf(" %d ",a[i]);

	getch();
	return 0;
}




