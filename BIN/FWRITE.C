#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
	FILE *fp;

	char fname[20];
	char c,s[50];
	clrscr();
	printf("\n Enter the name of the file :");
	gets(fname);
	fp=fopen(fname,"w");
	if(fp==NULL)
	{
		printf("file does not exist");
		exit(0);
	}
	printf("\n Enter a string");
	gets(s);

    /*	while((c=fgetc(fp)) != EOF)
		putchar(c);      */

	fprintf(fp,"%s",s);


	fclose(fp);
	getch();
}