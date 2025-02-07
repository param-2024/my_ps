#include <stdio.h>
int main() 
{
    int a[5],max,i;
    for(i=0;i<5;i++) 
	{
        printf("Enter the Number:");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<5;i++) 
	{
        if(a[i]>max) 
		{
            max = a[i];
        }
    }
    printf("Max: %d\n", max);
}

