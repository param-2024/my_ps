#include<stdio.h>
main()
{
	int age;
	char gender;
	printf("enter the age=");
	scanf("%d",&age);
	printf("enter the gender=");
	scanf("\n %c",&gender);


   	    if(gender=='f'&& age>18)
	    {
		  printf("eligible for marriage");
	    }
	    else if(gender=='m'&& age>21)
	    {
	      printf("eligible for marriage");
	    }
	    else 
	    {
	    printf("not eligible for marriage");
		}	
}

