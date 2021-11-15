#include<stdio.h>
int main()
{
	int frist[4];

	for(int i=0;i<4;i++)
	{
			printf("enter a number:");
	scanf("%d",&frist[i]);	
	}
	int second[4];

	for(int j=0;j<4;j++)
	{
			printf("enter a 2nd number:");
	scanf("%d",&second[j]);	
	}
	int sum[4];
	for(int k=0;k<4;k++)
	{
	sum[k]=frist[k]+second[k];
	printf("sum of numbers: %d\n",sum[k]);
	}

}
