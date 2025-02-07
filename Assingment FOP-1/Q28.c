#include<stdio.h>
main()
{
	float a,b,c,t,gst,totalprice,discount,tad;
	printf("Enter the value:");
	scanf("%f %f %f",&a,&b,&c);
	t=a+b+c;
	printf("%f",t);
	gst=(t*7)/100;
	totalprice=t+gst;
	printf("The price after adding gst is %f",totalprice);
	
	if (totalprice>1000)
	{
		discount=(totalprice*5)/100;
		tad=totalprice-discount;
		printf("the totalpriceis %f",tad);
	}
	else
	{
		printf("\n totalprice is  %f",totalprice);
	}
}
