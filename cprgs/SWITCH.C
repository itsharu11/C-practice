#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	clrscr();
	printf("enter the marks");
	scanf("%d",&n);
	n=n/10;


	switch(n)
	{
	case 1:
	case 2:
	case 3:
		printf("fail");
		break;

	case 4:
		printf("pass");
		break;

	case 5:
		printf("second class");
		break;

	case 6:
		printf("first class");
		break;

	case 7:
	case 8:
	case 9:
		printf("distinction");
		break;


	default:
		printf("invalid");

	}
getch();
return 0;
}