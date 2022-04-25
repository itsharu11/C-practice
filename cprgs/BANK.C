#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int amt,choice,pin,pass=123,main,opin,wd,avl_bal=0;
	clrscr();
	amt=50000;
	printf("\nEnter the pin : ");
	scanf("%d",&pin);
	if(pass==pin)
	{
	goto main;
	}
	else
	{
	printf("\nwrong password");
	exit(0);
	}
	main:
	printf("\nchoose the option from the following");
	printf("\n1. withdraw");
	printf("\n2. mini statement");
	printf("\n3. change pin");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
	printf("\nEnter the amount ");
	scanf("%d",&wd);
	avl_bal=amt-wd;
	printf("\navailable balance is %u",avl_bal);
	break;
	case 2:
	printf("\nThe available balance is %u",amt);
	break;
	case 3:
	printf("\nEnter your old pin");
	scanf("%d",&opin);
	if(opin==pin)
	{
	printf("\nenter the new pin");
	scanf("%d",&pin);
	}
	else
	{
	printf("\nwrong pin");
	}
	default:
	printf("\nwrong input");
	break;
	}
	getch();
	return 0;
	}
