#include<stdio.h>
main()
{
	int experience,bonus;
	char department;
	printf("Enter the Year of Experience= ");
	scanf("%d",&experience);
	printf(" Enter the Department:");
	scanf("\n %c",&department);
	
	if(department=='d' && experience>=10)
	{
		printf("\n The Bonus of an Employee is 7 %.");
	}	
	else if(department=='p' && experience>20)
	{
		printf("\n The Bonus of an Employee is 10 %.");
	}
	else if(department=='m' && experience>25)
	{
		printf("\n The Bonus of an Employee is 7 %.");
	}
	else if(department=='s' && experience>15)
	{
		printf("\n The Bonus of an Employee is 9 %.");
	}
	else
	{
		printf("\n The Bonus of an Employee for other Department is 6 %.");
	}
}

