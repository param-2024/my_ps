#include<stdio.h>
main()
{
	int a,i,j;
	a=2;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4;j++)
		{
			a+=2;
			printf("\n |%d|%d|%d|",i,j,a);
		}
	}
}
