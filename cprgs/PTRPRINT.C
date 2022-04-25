#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int *p,i;
	clrscr();
 //	p=a;
/*	printf("\n enter five  elements");
	for(i=0;i<5;i++,p++)
		scanf("%d",p);*/
	printf("\n enter five  elements");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	p=a;
  //	p=p-5;
	printf("\n The given values are :");
	for(i=0;i<5;i++)
		{
		printf("\n%d",*p);
		p++;
		}
	getch();
}
