#include<stdio.h>
main()
{
	int a,b,c;
	a=10;
	b=20;
	printf("A=%d B=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	
	printf("\n A=%d B=%d \n",a,b,c);
}
