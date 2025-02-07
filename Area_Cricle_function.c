#include<stdio.h>
float area_cricle(int r)
{
	float area;
	area=3.14*r*r;
	return(area);	
}
float area_tringel(int l int b)
{
	float area;
	area=l*b;
	return(area);
}
int area_squear(int s);
{
	
}
main()
{
	int r;
	float area;
	printf("\nEnter the Redius = ");
	scanf("%d",&r);
	area=area_cricle(r);
	printf("\nArea = %f",area);
}	

