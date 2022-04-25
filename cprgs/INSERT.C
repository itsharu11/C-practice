#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int k,i,n,pos,val;
	clrscr();

	printf("\nEnter the size of array : ");
	scanf("%d",&n);
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("\nEnter the position to insert : ");
	scanf("%d",&pos);

	printf("\nEnter the value : ");
	scanf("%d",&val);

	for(k=n-1;k>=pos;k--)
	{
	a[k+1] = a[k];
	}
	a[pos] = val;
	n=n+1;

	printf("\nAfter insertion :");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

	printf("\n");
	getch();
	return 0;
	}