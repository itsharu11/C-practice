#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],c,max,size;
clrscr();
printf("enter the number of elements to be entered");
scanf("%d",&size);

printf("Enter %d integers ",size);

for(c=0;c<size;c++)
scanf("%d",&a[c]);


max=a[0];

for(c=1;c<size;c++)
{
	if(a[c]>max)
	{
	max=a[c];
	 }
}
printf("The max is %d ",max);
getch();
return 0;
}