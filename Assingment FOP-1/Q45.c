#include<stdio.h>
main()
{
	int unit1,unit2,kwh,bill;
	printf("Enter the Unit 1=");
	scanf("%d",&unit1);
	printf("Enter the Unit 2=");
	scanf("%d",&unit2);
	kwh=unit1-unit2;
	bill=kwh*6;
	printf("Bill=%d",bill);
}
