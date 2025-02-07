#include<stdio.h>
main()
{
	int a,b,c,totalprice;
	float discount,netprice;
	printf("Enter the value:");
	scanf("%d %d %d",&a,&b,&c);
	totalprice=a+b+c;
	printf("%d",totalprice);
	discount=(totalprice*5)/100;
	netprice=totalprice-discount;
	printf("\n the totalprice is %f",netprice);
}
