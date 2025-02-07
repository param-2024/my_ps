#include<stdio.h>
main()
{
	int count=0,i;
	char a[]="Hello How are you ";
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		count++;
		i++;
	}
	printf("Total Words are %d",count);
}
