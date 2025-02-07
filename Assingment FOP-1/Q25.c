#include<stdio.h>
main()
{
	int a;
	float discount;
	printf("Enter the Price=");
	scanf("%d",&a);	
	if(a<=10000)
	{
		discount=a-(a*10)/100;
		printf("Price with Discount=%f",discount);
	}
	else
	{
		discount=a-(a*5)/100;
		printf("Price with Discount=%f",discount);
	}
}
