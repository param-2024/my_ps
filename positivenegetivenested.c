#include<math.h                                  >
main()
{
	int a,i,negetive,positive;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a);
		if(a<0)
		{
			negetive++;
			continue;
		}
		printf("%d",sqrt(a));
		positive++;
	}
}
