//A program for arithematic operations using scanf
#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,d,e,f;
clrscr();
printf("\nenter first number:");
scanf("%d",&a);
printf("\nenter second number");
scanf("%d",&b);
c=a+b;
printf("\nthe sum is:%d",c);
d=a-b;
printf("\nthe difference is:%d",d);
e=a*b;
printf("\nthe product is:%d",e);
f=a/b;
printf("\nthe quotient is:%d",f);
getch();
}
