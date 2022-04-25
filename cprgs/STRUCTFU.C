// struct using funtions
#include<stdio.h>
#include<conio.h>
struct point{
int x;
int y;
};

struct point midp(struct point,struct point);
void main()
{
	struct point s1,s2,mid;
	clrscr();
	puts("\n Enter first points : ");
	scanf("%d %d",&s1.x,&s1.y);

	puts("\n Enter second points : ");
	scanf("%d %d",&s2.x,&s2.y);

	mid=midp(s1,s2);
	printf("\n The midpoint is (%d,%d) ",mid.x,mid.y);

	getch();
}
	struct point midp(struct point p1,struct point p2)
	{
	 struct point temp;
	 temp.x=(p1.x+p2.x)/2;
	 temp.y=(p1.y+p2.y)/2;
	 return(temp);


	}



