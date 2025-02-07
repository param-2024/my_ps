#include<stdio.h>
main()
{
	int i;
	char str1[30],data[50];
	printf("\nEnter data : ");
	gets(str1);
	printf("\nscanned data using gets is : ");
	puts(str1);
	printf("\nEnter data : ");
	scanf("%s",str1);
	printf("\nscanned data using scanf is %s\n\n",str1);
}
