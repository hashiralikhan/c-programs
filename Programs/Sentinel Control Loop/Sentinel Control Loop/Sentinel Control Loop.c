#include<stdio.h>
#include<conio.h>
// Sentinel Control Loop
//scanf replace by getche.
int main()
{
	float sum=0, marks, avg;
	int numofstudents=0, highest=0;
	char cmd;
	printf("Press Y to Start Entering Marks Or N to Exit:");
	cmd= getche();

	while(cmd=='y' || cmd=='Y')
	{
		printf("Enter Your Marks:");
		scanf("%f",&marks);

		sum+=marks;

		highest=highest<marks? marks:highest;

		printf("Press Y to Continue and, N to Stop:");
		cmd=getche();

		numofstudents+=1;
	}
	if(numofstudents!=0)
	{
		avg=sum/numofstudents;
	printf("Average Marks is :%f\n",avg);
	printf("Highest Marks is:%f\n",highest);
	}
	else
		printf("No Marks Entered");


}