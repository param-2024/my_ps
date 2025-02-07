#include<stdio.h>
main()
{
	int count=0,i;
	char a[]="Hello How are you ";
	while(a[i]!='\0')
	{
		count++;
		i++;
	}
	printf("Total Lanth is %d",count);
}
