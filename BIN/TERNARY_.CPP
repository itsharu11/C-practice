#include<stdio.h>
#include<conio.h>
void main()
{
int a,x;
clrscr();
printf("enter age");
scanf("%d",&a);
//a>=18 ? printf("you are an adult"): printf("you are a minor");
x=(a>=18) ?  1 : 0;
printf("%d",x);
getch();
}