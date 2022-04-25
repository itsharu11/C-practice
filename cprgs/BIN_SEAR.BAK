#include<stdio.h>
#include<conio.h>

void binary_search(int a[],int size,int x);
void sort(int[],int);
void main()
{
	int a[50],i,n,val;
	clrscr();
	printf("\n Enter the number element");
	scanf("%d",&n);



	printf("\n Enter the elements ");
	for(i=0;i<n;i++)
	{
		printf("\n %d value : ",i);
		scanf("%d",&a[i]);

	}

	printf("\n Enter the value");
	scanf("%d",&val);
//    	linear_search(a,n,val);
	sort(a,n);



	binary_search(a,n,val);
	getch();
}
	void binary_search(int a[],int n,int val)
	{
		int flag=0;
		int lp=0,hp=n-1,mp;
		while(lp<=hp)
		{
			mp=(lp+hp)/2;
			if(val<a[mp])
			{
				hp=mp-1;
			}
			else
			{
				if(val>a[mp])
				{
					lp=mp+1;
				}
				else
				{
					if(val==a[mp])
					{
						printf("\n data found");
						flag=1;
						break;
					}
				}
			}


		}
		if(flag==0)
		{
			printf("\n Data not found");
		}


	}

	void sort(int a[],int n)
	{
		int i,j,temp;
		printf("\n The sorted array is  : ") ;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{

			printf("%d\n",a[i]);
		}

	}








