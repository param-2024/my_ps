#include<stdio.h>
main()
{
	int i,j;
	for(i=10;i>=0;i-=3)
	{
		for(j=1;j<=4;j++)
		{
			if(i%j==0)
			{
				printf("|%d|%d",i,j);
			}
		}
		printf("\n");
	}
	
}
