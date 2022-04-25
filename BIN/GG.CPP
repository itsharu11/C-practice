#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter a value");
scanf("%d",&a);
if(a<=18 && a>=13)
{
 printf("you are a teenager");
}
else
{
 printf("you are not a teenager");
}
getch();
}