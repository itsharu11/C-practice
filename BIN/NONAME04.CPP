#include<stdio.h>
#include<conio.h>
int linear_search(int a[],int size,int x);
int sort(int[],int);
void main()
{
	int a[50],i,n,val;
	clrscr();
	printf("\n Enter the number element");
	scanf("%d",&n);



	printf("\n Enter the elements ");
	for(i=0;i<n;i++)
	{
		printf("\n %d value : ",i);
		scanf("%d",&a[i]);

	}

	printf("\n Enter the value");
	scanf("%d",&val);
	linear_search(a,n,val);
	getch();
}
	void linear_search(int a[],int n,int val)
	{
	int flag=0,i;
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
		printf("\n Data found");
		printf("\n search at location : %d ",i+1);
	}
	else
	{
		printf("\n Data not found ");
	}

	int sort(a[],n)
	{
		int i,j,temp;
		printf("\n The sorted array is  : ") ;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{

			printf("%d",a[i]);
		}




}


