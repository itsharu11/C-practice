/* Recursive functions
  The function containing call to itself within
  its body is called recursive function.
*/
#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	int f,n;
	clrscr();
	printf("\n Enter a number ");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial of %d is %d ",n,f);
	getch();
}
//recursive function of factorial
int fact(int n)
{
	int f=1;
	if(n==1)
		return f;

	f=n*fact(n-1);




}
