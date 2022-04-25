#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter two numbers :- ");
	scanf("%d %d",&a,&b);
	printf("%u %u",&a,&b);
	swap(&a,&b);       //Call by refernce.
	getch();

}
/*void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("a=%d b=%d",*a,*b);
} */

void swap(int *a,int *b)
{
	int *temp;
	temp=a;
	a=b;
	b=temp;
	printf("\na=%d b=%d",*a,*b);
	printf("\n%u %u",a,b);
}