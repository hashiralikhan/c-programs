#include<stdio.h>
int main()
{
	int n, s, e;
	printf("enter starting number:");
	scanf("%d",&s);
	printf("enter ending number:");
	scanf("%d",&e);
	n=s;
	while(n<=e)
	{
		printf("%d\n",n);
		n=n+1;
	}

}