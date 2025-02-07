#include<stdio.h>
main()
{
	int i;
	char str1[30],data[50];
	scanf("%s",str1);
	printf("\nscanned data using scanf is %s\n\n",str1);
	i=0;
	while(str1[i]!='\0')
	{
		if((str1[i]>='A' && str1[i]<='Z')||(str1[i]>='a' && str1[i<='z']))
			printf(" Character \n");
		if(str1[i]>48 && str1[i]<57)
			printf(" Digit ");
			putchar(str1[i]);
			i++;
	}
}
