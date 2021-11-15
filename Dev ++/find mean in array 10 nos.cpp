#include<stdio.h>
int main()
{
	int array[10],sum=0;
	float mean;
	printf("Enter a number:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
		sum+=array[i];
		mean=sum/10;
	}
	printf("Sum of all numbers:%d",sum);
	printf("Mean of all numbers:%f",mean);
	
}
