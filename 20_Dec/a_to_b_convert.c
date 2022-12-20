#include <stdio.h>

int main()
{
	int a,b,count=0,x,i=0;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	x=a^b;
	for (int i=3;i>=0;i--)
	{
		printf("%d",((x>>i)&1));
	}
	printf("\n");
	for (int i=3;i>=0;i--)
	{

		if((x>>i)&1)  
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
