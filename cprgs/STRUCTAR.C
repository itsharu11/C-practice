//structure
#include<stdio.h>
#include<conio.h>
struct store{
	char item[50];
	int  qty;
	int  price;
};
void main()
{
	struct store s[10];
	// s is variable of structure store
	int n,i;
	clrscr();
	printf("\n Enter the number of items");
	scanf("%d",&n);

	printf("\n enter the details");
	printf("\n item , quantity , price");

	for(i=0;i<n;i++)
	{
		printf("\n Enter item name : ");
		scanf("%s",s[i].item);
		printf("\n Enter the quantity : ");
		scanf("%d",&s[i].qty);
		printf("\n Enter the price : ");
		scanf("%d",&s[i].price);
	}
	for(i=0;i<n;i++)
	{
		printf("\n item name : ");
		printf("%s",s[i].item);
		printf("\t the quantity : ");
		printf("%d",s[i].qty);
		printf("\t the price : ");
		printf("%d",s[i].price);
	}
	getch();

}



