#include<stdio.h>
int max(int a,int b,int c)
{
	if(a>b && a>c)
	{
		return(a);
	}
	else if(b>c)
	{
		return(b);
	}
	else
	{
		return(c);
	}
}
main()
{
	int a,b,c,maximum;
	printf("\nEnter the number:");
	scanf("%d %d %d",&a,&b,&c);
	maximum=max(a,b,c);
	printf("\n%d",maximum);
}
