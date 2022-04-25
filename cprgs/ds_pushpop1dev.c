#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 10
void push(int[],int,int);
void pop(int[],int);
void display(int[],int);
int s[max],top;
void main()
{
	int c,x;
	top=-1;
	clrscr();
	do
	{

	printf("\nEnter the choice of operation : ");
	printf("\n 1. PUSH ");
	printf("\n 2. POP");
	printf("\n 3. DISPLAY");
	printf("\n 4. Exit");
	printf("\n Enter Your choice : ");
	scanf("%d",&c);

		switch(c)
		{
			case 1:push(s,top,x);
				break;
			case 2:pop(s,top);
				break;
			case 3:display(s,top);
				break;
			default : exit(0);
		}
	}while((c>0) || (c<=4));

		getch();
	}
	void push(int s[],int top,int x)
	{
		if(top==max)
			printf("stack is overflow ");
		else
		{

			printf("\n Enter the item to be insert in the stack");
			scanf("%d",&x);
			top++;
			s[top]=x;
		}
		printf("\n\n top=%d x=%d : ",top,s[top]);
	}
	void pop(int s[],int top)
	{
		int x1;
		if(top<0)
			printf("STACK UNDERFLOW");
		else
		{

			x1=s[top];
			top=top-1;
			printf("\n Item to be deleted from stack are : ");
			printf("%d",x1);
		}
	}
	void display(int s[],int top)
	{
		int i;
		printf("\n\n top=%d x=%d : ",top,s[top]);
		if(top==-1)
		{
			printf("\n STACK IS EMPTY");
		}
		else
		{
			clrscr();
			printf("\n Stack data are :");
			for(i=top;i>=0;i--)
			{
				printf("%d",s[i]);
			}
		}
	}


