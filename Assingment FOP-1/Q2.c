#include<stdio.h>
main()
{
	int i=1,x,product=1;
	printf("Enter the X=");
	scanf("%d",&x);
	while(i<=5)
	{
		product=product*x;
		i++;
		printf("\n %d",product);
	}
}
