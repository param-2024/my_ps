#include<stdio.h>
main()
{
	int age;
	char gender;
	printf("enter the age=");
	scanf("%d",&age);
	printf("enter the gender=");
	scanf("\n %c",&gender);
   	if(gender=='f'&& age>60)
	{
	  printf("fd interest is 8%%");
	}
	else if(gender=='m'&& age>60)
	{
		printf("fd interest is 7.5%%");
	}
	else 
	{
		printf("fd interest is 7%%");
	}	
}

