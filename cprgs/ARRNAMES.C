#include<stdio.h>
#include<conio.h>
void main()
{
	char a[5][10];
	int i;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("\n Enter string %d : ",i);

		scanf("%s",a[i]);
	}
	for(i=0;i<5;i++)
	{
	puts(a[i]);
	}
	getch();
}
