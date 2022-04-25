#include<stdio.h>
#include<conio.h>
#include<process.h>

struct student{
int r_no;
char name[20];
int age;
};
void main()
{
	FILE *fp;
	struct student s;
	int i;

	if((fp=fopen("DATA","w"))==NULL)
	{
		printf("file could not be opened");
		exit(0);
	}

	puts("\n Enter five records");
	for(i=0;i<5;i++)
	{
	scanf("%d %s %d",&s.r_no,s.name,s.age);
	fprintf(fp,"%d %s %d\n",s.r_no,s.name,s.age);

	}

	fclose(fp);

	if((fp=fopen("DATA","r"))==NULL)
	{
	printf("\n File does not exist");
	exit(0);
	}

	puts("Rcords are :");
	for(i=0;i<5;i++)
	{
	fscanf(fp,"%d %s %d ",s.r_no,s.name,s.age);
	printf(fp,"%d %s %d\n",s.r_no,s.name,s.age);
	}
	fclose(fp);
}