#include<stdio.h>
main()
{
	int a,i;
	for(i=1;i<=50;i++)
	{
		printf("\nEnter the Number:");
		scanf("%d",&a);
		if(a<0)
		{
			break;
		}
	}
	printf("%d",i);
}
