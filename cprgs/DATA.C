#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp1,*fp2;
	char fdata[20],udata[20],c;
	clrscr();
	puts("\n Enter string");
	gets(udata);
	if((fp1=fopen("DATA","w"))==NULL)
	{
	printf("\n File not found");
	exit(0);
	}
	fprintf(fp1,"%s",udata);
	fclose(fp1);
	//READ DATA FROM FILE
	if((fp2=fopen("DATA","r"))==NULL)
	{
		printf("file not found");
		exit(0);
	}

     //	fscanf(fp2,"%s",fdata);
    //	printf("\n DAta from file is %s \n",fdata);
	while((c=fgetc(fp2))!=EOF)
	{
		putchar(c);
	}
     //	puts(fdata);

	getch();
}





