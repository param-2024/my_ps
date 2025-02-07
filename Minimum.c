#include<stdio.h>
int main() 
{
    int a[5],mini,i;
    for(i=0;i<5;i++) 
	{
        printf("Enter the Number:");
        scanf("%d",&a[i]);
    }
    mini=a[0];
    for(i=1;i<5;i++) 
	{
        if(a[i]<mini) 
		{
            mini = a[i];
        }
    }
    printf("Minimum: %d\n", mini);
}

