#include<stdio.h>
main()
{
	int year;
	printf("Enter the Year:");
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("This Year is Leap Year");
	}
	else
	{
		printf("This Year is Not Leap Year");
	}
}
