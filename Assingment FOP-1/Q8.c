#include<stdio.h>
main()
{
	int num,reverse=0,digit;
	printf("Enter the Number=");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num/=10;
	}
	printf("Reversed Number=%d\n",reverse);
}
