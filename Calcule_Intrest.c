#include<stdio.h>
float calculet_intrest(int P,float R,int N)
{
	float intrest;
	intrest=(P*R*N)/100;
	return(intrest);
}
main()
{
	int P,N;
	float R,intrest;
	printf("Enter the P:");
	scanf("%d",&P);
	printf("Enter the R:");
	scanf("%f",&R);
	printf("Enter the N:");
	scanf("%d",&N);
	intrest=calculet_intrest(P,R,N);
	printf("Intrest:%f",intrest);
}
