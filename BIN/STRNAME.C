/*
	Array of string - Array of string is two dimensional character array.
	 for e.g. char name[5][10];
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10]={"harsh","kush","kamal","computer","laxman"};
	int i;
	clrscr();
	printf("\nprinting the names");
	for(i=0;i<5;i++)
	{
		printf("\n%s",name[i]);
	}
	getch();
}
