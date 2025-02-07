#include<stdio.h>
main()
{
	int tax;
	int income;
	printf("enter the income:");
	scanf("\n %d",&income);
	
	if(income>=1000000)
	{
	   printf("tax=13 %%");
	}
	  else if(income>=700000)
	  {
	    printf("tax=10 %%");
	  }    
	    else if(income>=500000)
	  {
		printf("tax=7 %%");
	  }
	    else if(income>=250000)
	  {
		printf("tax=5 %%");
	  }               
	    else
	  {
		printf("tax=0 %%");
	  }
	                  
	           
}
