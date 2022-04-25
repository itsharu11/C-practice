#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter two numbers : ");
	scanf("%d %d",&a,&b);
	swap(a,b);
	getch();
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("\n The number after swaping are : \na=%d \nb=%d ",a,b);
}


