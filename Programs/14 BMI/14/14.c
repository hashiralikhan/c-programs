#include<stdio.h>
//My First Program.
int main(void)
{
	int wieght,hieght,BMI;
	printf("Enter your wieghtin pound:");
	scanf("%d",&wieght);
	printf("Enter your hieght in inches:");
	scanf("%d",&hieght);
	BMI=wieght*703/hieght*hieght;
	printf("yours BMI %d/n",BMI);
}