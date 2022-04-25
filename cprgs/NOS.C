#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	clrscr();
	for(a=0,b=100;a<=b;a+=5)
	{
	printf("%d\t\n",a);
	}
	for(a=0;a<=100;a++)
	{
		if(a%5==0)
		printf("%d\t",a);
	}

	getch();
	return 0;
}