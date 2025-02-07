#include<stdio.h>
main()
{
	int temp[24]={16,18,19,20,21,22,26,26,25,26,27,28,29,24,28,29,24,23,25,30,21,22,23,24};
	int temp_morning,temp_evening;
	printf("\n 6 O'Clock morning is higher than 6 O'Clock evening.");
	temp_morning=temp[6];
	temp_evening=temp[18];
	if(temp_morning>temp_evening)
    {
    	printf("\nTemperature at Morning (%d) is higher than at evening(%d) \n",temp_morning,temp_evening);
	}	
}

