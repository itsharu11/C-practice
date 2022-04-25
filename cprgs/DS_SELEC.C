#include<stdio.h>
#include<conio.h>
void sort(int [],int) ;
void main()
{
  //	void sort(int [],int) ;
	int a[20],n,i;
	clrscr();
	printf("\n Enter the numbers u want to enter : ");
	scanf("%d",&n);
	printf("\n Enter the numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	getch();
}
void sort(int a[],int n)
{
	int i,j,temp,small,k;
	for(i=0;i<n;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		{
			if(a[small]>a[j])
			{
				small=j;

			       /*
				temp=a[j];
				a[j]=a[j+1] ;
				a[j+1]=temp;
				*/
			}
		}
		if(i!=small)
		{
			temp=a[i];
			a[i]=a[small];
			a[small]=temp;
		}
		printf("\n After pass %d elements are : ",i+1);
		for(k=0;k<n-1;k++)
			printf("\t %d ",a[k]);
		printf("\n");
	}
	printf("\n Display the sorted list : ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
}



