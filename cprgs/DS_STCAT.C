#include<stdio.h>
#include<conio.h>
void xstrcat(char[],char[],char[]);
void main()
{
	char s1[20],s2[20],s3[40];
	clrscr();
	printf("\n Enter the first sring : ");
	gets(s1);
	printf("\n Enter the second string : ");
	gets(s2);
	xstrcat(s1,s2,s3);
	printf("\n After concatenating the string : ");
	puts(s3);
	getch();
}
void xstrcat(char s1[],char s2[],char s3[])
{
	int i=0,j=0,k=0;
	while(s1[i]!='\0')
	{
		s3[k]=s1[i];
		k++;
		i++;
	}
	while(s2[j]!='\0')
	{
		s3[k]=s2[j];
		k++;
		j++ ;
	}
	s3[k]='\0';
	puts(s3);

}
