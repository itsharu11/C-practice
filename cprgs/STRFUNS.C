/*

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50];
	clrscr();
	printf("\n Enter the string ");
	gets(s1);
	// Now copying string into another string using function

	strcpy(s2,s1);
	puts(s2);
	// Reverse string
	strrev(s2);
	puts(s2);
	// comparing original with reverse string using function
	printf("%d",strcmp(s1,s2));
	if(strcmp(s1,s2)==0)
	{

	 printf("The string is pallindrome");
	}
	else
	{
	printf("It is not pallindrome");
	}
	getch();
}