// Arrange given words into alphabetical order.
// page no 74 with pointer.
// page no 41 without pointer.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
void main()
{
	char *a[5],b[50],*temp;
	int i,j;
	clrscr();
	puts("\n Enter five words :");
	for(i=0;i<5;i++)
	{
		gets(b);
		a[i]=(char *)malloc(strlen(b)*sizeof(char)+1);        //refer page 62 and 74.
		strcpy(a[i],b);
	}

	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(a[i],a[j]) > 0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}


	printf("\n\n");
	for(i=0;i<5;i++)
	{
	puts(a[i]);
	}


	getch();
}


