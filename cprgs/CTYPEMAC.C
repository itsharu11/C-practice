#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
void main()
{
	int n,i,nu=0;
	char s[50];
	puts("\n Enter a word :");
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(isdigit(s[i]))
		{
			 //	puts("\n Enter only alphabets");
				  nu=1;
		}
	}
	  if(nu==1)
		puts("Enter only alphabets");

	  getch();
	}