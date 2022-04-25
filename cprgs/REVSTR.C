#include<stdio.h>
#include<conio.h>
void rev(char []) ;
void main()
{
	char str[50];
	clrscr();
	puts("Enter a string");
	gets(str);

	printf("Reverse string");
	rev(str);
	printf("\n\n");
	puts(str);
	getch();
}
void rev(char s[])
{
	int i=0;
	if(s[i+1] != '\0')
	rev(&s[i+1]);

	putchar(s[i]);
      //	printf("\n\n -- %d",i);
}