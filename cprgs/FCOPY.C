#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
	FILE *fw,*fr;

	char fread[20],fwrite[20];
	char c;
	clrscr();


	/* code to read file from user*/
	printf("\n Enter the file to be read :");
	gets(fread);
	fr=fopen(fread,"r");
	if(fr==NULL)
	{
		printf("\nfile does not exist");
		exit(0);
	}


	/* code to write the into given file*/

	printf("\n Enter the filename to be created");
	gets(fwrite);
	fw=fopen(fwrite,"w");
	if(fw==NULL)
	{
		printf("\n file cannot be created");
		exit(0);
	}





	while((c=fgetc(fr)) != EOF)
	       putc(c,fw);





	fclose(fr);
	fclose(fw);
	getch();
}