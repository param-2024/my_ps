#include<stdio.h>
main()
{
	int count=0,num;
	printf("Enter the number=");
	scanf("%d",&num);
	while(num!=0)
	{
		num/=10;
		count++;
	}
	printf("Total number of digits:%d",count);
}
