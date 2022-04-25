#include<stdio.h>
#include<conio.h>
struct time{
int hours;
int minutes;
int seconds;
};
void main()
{
	struct time t;
	int t1;
	clrscr();
	printf("\n Enter number of seconds");
	scanf("%d",&t1);
   //	t.seconds=t1;
	if(t1>60)
	{


		t.minutes=t1/60;
		t.seconds=t1%60;
		if(t.minutes>60)
		{
		t.hours=t.minutes/60;
		t.minutes=t.minutes%60;
		}
		else
		{
		t.hours=0;
		}

	}
	else

	{
	t.hours=0;
	t.minutes=0;
	t.seconds=t1 ;
	}

	printf(" %d : %d : %d ",t.hours,t.minutes,t.seconds);
	getch();
   }




