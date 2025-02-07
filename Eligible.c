#include<stdio.h>
main()
{
	int age,choice;
	char gender;
	
	do
	{
		printf("\nEnter the Gender:");
		scanf("%c",&gender);
		printf("\nEnter the Age:");
		scanf("%d",&age);
		
		if(age >=21 && gender == 'm')
			printf("\nEligible for a Vota.");
		else if(age >= 18 && gender == 'f')
			printf("\nEligible for a Vota.");
		else
			printf("\nNot Eligible for a Vota.");
		printf("\nDo you want to continue for other person ?? (1 for yes , 0 for no)");
		scanf("%d",&choice);
	}while(choice=='y');
}
