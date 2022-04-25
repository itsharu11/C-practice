#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	clrscr();
	for(a=1;a<=10;a++)
	{
		if(a==3 || a==8)
		{
		continue;
		}
		else
		{
		printf("%d",a);
		}


	       /*	if((a!=3) && (a!=8))
		{
		printf("%d\t",a);
		}
		*/
	}
	getch();
	return 0;
}