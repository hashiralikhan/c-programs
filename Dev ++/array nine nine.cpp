#include<stdio.h>
int main()
{
	int frist[8];
	printf("enter a number:");
	for(int i=0;i<8;i++)
	{
	scanf("%d",&frist[i]);	
	}
	int second[8];
	printf("enter a 2nd number:");
	for(int i=0;i<8;i++)
	{
	scanf("%d",&second[i]);	
	}
	int third[8];
	printf("enter a 3rd number:");
	for(int i=0;i<=8;i++)
	{
		scanf("%d",&third[i]);
		
	}
	int sum[8];
	for(int i=0;i<8;i++)
	{
	sum[i]=frist[i]+second[i]+third[i];
	printf("sum of numbers: %d\n",sum[i]);
	}

}
