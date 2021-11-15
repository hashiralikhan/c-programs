#include<stdio.h>
int main()
{
	int value, largest=0, sum=0, avg, smallest=100;
	int counter=0 , numofvalues;
	printf("Enter Number Of Value:");
	scanf("%d",&numofvalues);

	while(counter<numofvalues)
	{
		printf("Enter Value:");
		scanf("%d",&value);
		sum+=value;
		value>0?puts("You Entered Positive Number.\n"):value<0?puts("You Entered Negative Number.\n"):puts("Zero\n");
		value%2==0?puts("Number Is Even.\n"):puts("Number Is Odd.\n");

		largest=largest<value? value:largest;
		smallest=smallest>value? value:smallest;
		counter+=1;
	}
	avg=sum/numofvalues;
	printf("Average Is :%d\n",avg);
	printf("Largest Value Is :%d\n",largest);
	printf("Smallest Value Is :%d\n",smallest);

	}