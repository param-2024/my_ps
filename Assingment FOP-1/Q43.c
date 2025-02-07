#include<stdio.h>
main()
{
	float A,B,C,D,E,Total,Persontage;
	printf("Enter the Marks:");
	scnaf("%f %f %f %f %f",&A,&B,&C,&D,&E);
	Total=A+B+C+D+E;
	Persontage=(Total/500)*100;
	scanf("%f",&Persontage);
	printf("\n Persontage is %f",Persontage);
}
