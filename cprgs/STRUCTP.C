#include<stdio.h>
#include<conio.h>
struct stud{
char n[25];
int rno;
int age;
};

void main()
{
	struct stud *s;
	clrscr();
	printf("\n ente the details : ");
	printf("\n Enter name,roll number and age respectively : ");

	scanf("%s",s->n);
	scanf("%d",&s->rno);
	scanf("%d",&s->age);

	printf("\n %s %d %d",s->n,s->rno,s->age);
	getch();
}


