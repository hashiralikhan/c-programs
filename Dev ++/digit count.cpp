#include<stdio.h>
int main()
{
	long int a,count;
	printf("enter a number:");
	scanf("%d",&a);
	while(a !=0)
	{
		a=a/10;
		count++;
	}
	printf("%d",count);
}
