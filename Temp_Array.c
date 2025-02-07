#include<stdio.h>
main()
{
	int i,temp[24]={16,18,19,20,21,22,23,24,25,26,27,28,29,25,28,29,24,23,25,30,21,22,23,24};
	printf("This 24 Hours Temprecher:\n");
	for(i=0;i<24;i++)
	{
		printf("Hour %d:",i);
		scanf("%d",&temp[i]);
	}
	
    printf("\nTemperatures at specific hours:\n");
    printf("Hour 2: %d\n", temp[2]);
    printf("Hour 10: %d\n", temp[10]);
    printf("Hour 13: %d\n", temp[13]);
    printf("Hour 18: %d\n", temp[18]);
    
	if(temp[6]>temp[18])
    {
    	printf("Temperature at 6 AM is higher than 6 PM Temperature");
    	printf("Temperature (%d) is higher than (%d) Temperature\n",temp[6],temp[18]);
	}
	
	
}

