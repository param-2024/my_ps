#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
			printf("1");
			}
			else
			{
				printf("2");
			}
		}
		printf("\n");
	}
}
