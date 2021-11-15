#include<stdio.h>
//Repitition Program
int main()
{
	float highest=0,marks,sum=0,avg;
	int counter=0,numofstudents;
	printf("Enter Number Of Students:");
	scanf("%d",&numofstudents);
	

	while(counter<numofstudents)
	{
		printf("Enter The Marks:");
		scanf("%f",&marks);
		sum+=marks;
		highest=highest<marks? marks:highest;
		counter+=1;
	}
	avg=sum/numofstudents;
	printf("Average Marks is :%f\n",avg);
	printf("Highest Marks is:%f\n",highest);
	main();
}