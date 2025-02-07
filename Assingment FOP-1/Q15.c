#include<stdio.h>
main()
{
	float P,R,T,I;
	printf("Enter the values:");
	scanf("%f %f %f",&P,&R,&T);
	I=(P*R*T)/100;
	printf("Intrest= %f",I);
}
