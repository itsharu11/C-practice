#include<stdio.h>
#include<conio.h>
void main()
{
	char c,n[20];
	int i,co=0;
	clrscr();
	printf("\n Enter a string");
	gets(n);
	printf("\n Enter a character ");
	scanf("%c",&c);

	for(i=0;i<20;i++)
	{
		if(n[i]==c)
		co++;
	}
	printf(" the occurenece of %c is %d",c,co);
	getch();
}