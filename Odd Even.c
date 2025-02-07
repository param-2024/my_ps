#include<stdio.h>
int odd_even(int num)
{
	if(num%2==0)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
main()
{
	int num,i;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	i=odd_even(num);
	printf("%d",i);
}
