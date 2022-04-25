#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<malloc.h>
void create_list(int);
void addatbeg(int);
void display();

struct node
{
	int data;
	struct node*link;
}*start;
void main()
{
	int choice,n,m,position,i;
	start=NULL;
	while(1)
	{
		printf("\n 1. Create List ");
		printf("\n 2. Add at begining \n");
		printf("\n 3. Display\n");
		printf("\n 4. Quit\n");
		printf("\n Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n How many nodes you want : ");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					printf("\n Enter the element : ");
					scanf("%d",&m);
					create_list(m);
				}
				break;
			case 2:
				printf("\n Enter the element : ");
				scanf("%d",&m);
				addatbeg(m);
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
}
void create_list(int inserted_value)
{
	struct node *q,*tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=inserted_value;
	tmp->link=NULL;
	if(start==NULL)
	{
		start=tmp;
	}
	else
	{
		q=start;
		while(q->link!=NULL)
		{
			q=q->link;
		}
		q->link=tmp;
	}
}

	void addatbeg(int inserted_value)
	{
		struct node*tmp;
		tmp=(struct node*)malloc(sizeof(struct node));
		tmp->data=inserted_value;
		tmp->link=start;
		start=tmp;
	}


	void display()
	{
		struct node*q;
		if(start==NULL)
		{
			printf("\n List is empty");
			return;
		}
		q=start;
		printf("\n List is :");
		while(q!=NULL)
		{
			printf("%d\t",q->data);
			q=q->link;
		}
		printf("\n ");
	}