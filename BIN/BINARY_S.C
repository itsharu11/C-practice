#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void binary_search(int[],int,int);
void main()
{
	int a[20],n,x,i;
	clrscr();
	printf("\n How many numbers to enter in the list : ");
	scanf("%d",&n);
	printf("\n Enter the elements  : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the element to search : ");
	scanf("%d",&x);
	sort(a,n);
	binary_search(a,n,x);;
	getch();
}
void sort(int a[],int n)
{
	int i,j,temp=0;
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
	printf("\n The sorted array is :");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}

}

void binary_search(int a[],int n,int x)
{
	int flag=1;
	int low,high,mid;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x<a[mid])
			high=mid-1;

		else if(x>a[mid])
				low=mid+1;

		else if(x==a[mid])
		{
			printf("\n Search success");
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n Search is unsuccessful");
	}
}





