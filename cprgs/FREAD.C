
#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
	FILE *fp;

	char fname[20];
	char c;
	clrscr();
	printf("\n Enter the name of the file :");
	gets(fname);
	fp=fopen(fname,"r");
	if(fp==NULL)
	{
		printf("file does not exist");
		exit(0);
	}

	while((c=getc(fp)) != EOF)
		putchar(c);


	fclose(fp);
	getch();
}
