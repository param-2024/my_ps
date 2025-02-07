#include<stdio.h>
main()
{
	int p,d,s,m,e;
	printf("Enter Years of Experience=");
	scanf("\n%d",&e);
	printf("Enter Department Name=");
	scanf("\n%d",&p);
	scanf("\n%d",&d);
	scanf("\n%d",&s);
	
	if(p>20)
	{
		printf("10%");
	}
	else if(d>10)
	{
		printf("7%");
	}
	else if(s>15)
	{
		printf("9%");
	}
	else
	{
		printf("6%");
	}
}
