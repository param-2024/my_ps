#include<stdio.h>
main()
{
	int choice;
	char ch = 'y';
	do
	{
		printf("\nEnter 1 for MCA");
		printf("\nEnter 2 for PGDCA");
		printf("\nEnter 3 for MSc(AI/ML)");		
		printf("\nEnter 4 for MSc(CS)");
		printf("\nEnter the Number : ");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1: printf("\nBlack");
				break;
			case 2: printf("\nRed");
				break;
			case 3: printf("\nBlue");
				break;
			case 4: printf("\nOrange");
				break;			
			default: printf("\nEnter Valid option");
		}
		printf("\nDo you Continue this then Pres y or not Continue then enter n:");
		scanf("%s",&ch);	
	}while(choice==1);
	
}
