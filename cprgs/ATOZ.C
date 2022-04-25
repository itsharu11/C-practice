#include<stdio.h>
#include<conio.h>
int main()
{
	char a,b;
	clrscr();
	for(a='a',b='z';a<=b;a++)
	{
		printf("%c\t",a);
	}
	getch();
	return 0;
}