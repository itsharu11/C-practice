#include<stdio.h>
#include<conio.h>
int main()
{
int array[100],max,size,c;
clrscr();
printf("Enter the  number of elements in array");
scanf("%d",&size);

printf("eneter %d integers",size);

for(c=0;c<size;c++)
scanf("%d",&array[c]);

max=array[0];

for(c=1;c<size;c++)
{
	if (array[c]>max)
		{
		max=array[c];

	}
}
printf("max is %d ",max);
getch();
return 0;
}
