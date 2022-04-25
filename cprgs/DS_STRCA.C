#include<stdio.h>
#include<conio.h>
void xstrcat(char[],char[],char[]);
void main()
{
	char s1[20],s2[20],s3[40],c;
	clrscr();
	printf("\n Enter the first sring : ");
   //	gets(s1);
	scanf("%s",&s1);
	printf("\n Enter the second string : ");
//	gets(s2);
	scanf("%s",&s2);
	xstrcat(s1,s2,s3);
	printf("\n After concatenating the string : ");

	puts(s3);
	getch();
}
void xstrcat(char *s1,char *s2,char *s3)
{

	while(s1!='\0')
	{
		*s3=*s1;
		s1++;
		s3++;
		printf("*******");

		putchar(*s3);
	}
	printf("\n\n");
	puts(s3);
	printf("\n\n");

	while(s2!='\0')
	{
		*s3=*s2;
		s2++;
		s3++ ;
		printf(" --- ");
		putchar(*s3);
	}
		printf("\n\n");
	puts(s3);
	printf("\n\n");
	*s3='\0';

}
