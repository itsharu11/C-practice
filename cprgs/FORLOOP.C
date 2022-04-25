/*
		for loop:
			Syntax:
			for(initialisation;condition;inc/dec)
			{
				//body
			}
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0;
	clrscr();
    /*
	i+=i++;       //in this case the ans is 3 as i=i + i++
	printf("%d",i);
	i+= ++i;     // in this case the ans is 8 as i=i + ++i cuz pre increment is used in this.
	printf("%d",i);
     */


	for(;i<10;)  //it prints 0 to 10 as it is inc/dec in the loop
	{
			++i; //it prints 0 to 10
	       //	i=i++;
		printf("i = %d \t",i);
	      //  i++;
	}

	getch();
}