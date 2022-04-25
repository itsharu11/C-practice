#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*b,**c;
	int *temp;
	int p,*q,**r;
	clrscr();
	printf("\n Enter two number :");
	scanf("%d %d",&a,&p);

	b=&a;
  //	printf("\nb%u a%u",*b,a);
	*c=b;
	printf("\nb=%u a=%u *b=%u c=%u *c=%u b=%u **c=%u",b,a,*b,c,*c,b,**c);
	q=&p;
	*r=q;
	printf("\nq=%u p=%u *q=%u r=%u *r=%u q=%u **r=%u",q,p,*q,r,*r,r,**r);

	temp=*c;
	*c=*r;
	*r=temp;

	printf("\nthe vales are %u %u",**c,**r);
	getch();
}

