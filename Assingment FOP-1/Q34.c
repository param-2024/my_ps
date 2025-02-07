#include<stdio.h>
main()
{
	int num,count=0;
	printf("\nEnter the number=");
	scanf("%d",&num);
	while(1)
	{
		printf("Enter a number:");
        scanf("%d",&num);
        
        if(num<0)
        {
        	break;
		}
		count++;
	}
	printf("Total count of numbers entered: %d\n", count);
}
