#include<stdio.h>
main()
{
	int a1[5],a2[5],i;
	for(i=0;i<=4;i++)
	{
		printf("Enter the Numbers:");
		scanf("%d",&a1[i]);
	}
	for(i=0;i<=4;i++)
	{
		a2[i]=a1[i];
	}
	for(i=0;i<=4;i++)
	{
		printf(" %d ",a2[i]);
	}
}
