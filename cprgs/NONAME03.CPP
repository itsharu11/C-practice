#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[100],i,max,j,temp;
	clrscr();
	printf("enter the values to be entered");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	printf("\nvalue %d ",i);
	scanf("%d",&a[i]);
	}

  //	max=a[0];

  /*	for(i=0;i<n;i++)
	{
	if(a[i]>max)
	max=a[i];
	}
	printf("%d",max);  */

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}

	 for(i=0;i<n;i++)
	 {
	 printf("%d",a[i]);
	 }

	getch();
	return 0;
	}
