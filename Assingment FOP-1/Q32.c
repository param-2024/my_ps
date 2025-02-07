#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the 1st Number=");
	scanf("%d",&a);
	printf("Enter the 2nd Number=");
	scanf("%d",&b);
	printf("Enter the 3rd Number=");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("%d",a);
	}
	else if(b>a && b>c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
}
