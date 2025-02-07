#include<stdio.h>
main()
{
	int a=2,i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4;j++)
		{
			if((i+j)%2==0)
			{
				a+=2;
				printf("\n |%d|%d|%d",i,j,a);
			}
			else
			{
				a-=2;
				printf("\n |%d|%d|%d",i,j,a);
			}
		}
	}
}
