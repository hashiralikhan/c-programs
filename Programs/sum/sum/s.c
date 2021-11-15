#include<stdio.h>
int main()
{
	int a=1,sum=0;
	while(a>0)
	{
		printf("enter a number");
		scanf("%d",&a);
		sum+=a;
		printf("%d\n",sum);
	}
}