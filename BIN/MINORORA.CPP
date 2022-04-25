// A program to print if you are an adult or not
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter your age");
scanf("%d",&a);
if(a>=18)
{
printf("You are and adult\n");
}
else
{
 printf("You are a minor\n");
}
getch();
}