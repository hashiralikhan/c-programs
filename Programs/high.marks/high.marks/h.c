#include<stdio.h>
int main()
{
	float avg,marks,sum=0,largest=0;
	int counter=0,noOfStd;
	printf("enter no of students:");
	scanf("%d",&noOfStd);
	while(counter<noOfStd)
	{
		printf("enter a marks");
		scanf("%f",&marks);
		sum+=marks;
		if(largest<marks) largest=marks;
		counter+=1;
	}
	avg=sum/noOfStd;
	printf("largest:\n",avg);
	
}