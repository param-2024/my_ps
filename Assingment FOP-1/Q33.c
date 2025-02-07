#include<stdio.h>
main()
{
	int i;
	float principal,rate,year,intrest;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter the Principal Amount,Rate of Intrest,Year for customer%d=",i);
		scanf("%f %f %f",&principal,&rate,&year);
		intrest=(principal*rate*year)/100;
		printf("Interest for customer %d=%.2f\n\n",i,intrest);
	}
}
