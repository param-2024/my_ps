#include<stdio.h>
main()
{
	int a1[5],num,i;
	for(i=0;i<=4;i++)
	{
		printf("Enter the Numbers:");
		scanf("%d",&a1[i]);
	}
	printf("Enter the ten number:");
	scanf("%d",&num);
	for(i=0;i<=4;i++)
	{
		if(num==a1[i])
		{
			printf("Found");
			break;
		}
	}
	if(i==5)
	{
		printf("Not Found");
	}
}
