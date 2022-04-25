#include<stdio.h>
#include<conio.h>
void main()
{
	int a=30;
	int *p;
	int **q;
	clrscr();
	p=&a;
	printf("\n a=%d ",a);
	printf("\n address of a=%u ",&a);
	printf("\n\n p=%u",p);
	printf("\n *p=%d",*p);
	printf("\n address of p %u",&p);

	*q=p;
	printf("\n\n q=%u",&q);
	printf("\n *q=%u",*q);
	printf("\n **q=%d",**q);
   //	printf("\n address of p %u",&p);

	q=&p;
	printf("\n\n q=%u",q);     // value of q is address of p.
	printf("\n *q=%u",*q);
	printf("\n **q=%d",**q);

	getch();
}