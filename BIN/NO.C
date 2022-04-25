#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10];
	int k,i,n,val,pos;
	clrscr();
	printf("\n Ennter the number of elements ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

	printf("\n Enter the position");
	scanf("%d",&pos);

	printf("\n Enter the value");
	scanf("%d",&val);
	pos--;

	for(k=n-1;k>=pos;k--)
	{
	a[k+1]=a[k];
	}
	a[pos]=val;
	n=n+1;

	printf("\n array after insertion");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);

	printf("\n");
	getch();
}
