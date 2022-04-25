#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 10
void push(int[],int,int,int);
void pop(int[],int,int);
void display(int[],int,int);
int s[max],front,rear;
void main()
{
	int c,x;
	front=-1;
	rear=-1;
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
			case 1:push(s,front,rear,x);
			break;
			case 2:pop(s,front,rear);
				break;
			case 3:display(s,front,rear);
				break;
			default : exit(0);
		}
	}while((c>0) || (c<=4));

		getch();
	}
	void push(int s[],int front,int rear,int x)
	{
		if(rear==max-1)
			printf("Queue is overflow ");
		else
		{

			printf("\n Enter the item to be insert in the Queue");
			scanf("%d",&x);
			if(front==-1) //check the condition for empty queue
			{
				front=0;
				rear=0;
			}
			else
			{
				rear++;
				s[rear]=x;
			}
		}
		printf("\n\n rear=%d x=%d : ",rear,s[rear]);
	}
	void pop(int s[],int front,int rear)
	{

		if(front==-1)
			printf("STACK UNDERFLOW");
		else
		{
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else
			{

			front=front+1;
			printf("\n Item to be deleted from queue are : ");
			printf("%d",s[front]);
		}
	}
	void display(int s[],int front,int rear)
	{
		int i;
	    //	printf("\n\n top=%d x=%d : ",top,s[top]);
		if(front==-1)
		{
			printf("\n QUEUE IS EMPTY");
		}
		else
		{
			clrscr();
			printf("\n QUEUE data are :");
			for(i=front;i<=rear;i++)
			{
				printf("\t%d",s[i]);
			}
		}
	}
