#include<stdio.h>
#include<conio.h>
void main()
{
	int x = 20;
	float y=30.5;
	void *p;
	clrscr();
	p=&x;
	printf("\np = %d ",*(int *)p);
     //	*p=*p+1;
	printf("\np = %d ",*(int *)p+1);
	p=&y;
	printf("\np = %f ",*(float *)p);

	getch();

}

