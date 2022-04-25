#include<stdio.h>
#include<conio.h>
void xstrcpy(char[],char[]);
void main()
{
	char s1[20],s2[20];
	clrscr();
	printf("\n Enter the string : ");
	gets(s1);
	xstrcpy(s1,s2);
	printf("\n after copying the string :") ;
	puts(s2);
	getch();
}
void xstrcpy(char *s1,char *s2)
{
	while(*s1!='\0')
	{
		*s2=*s1;
		s1++;
		s2++;
	}
	*s2='\0';
}
