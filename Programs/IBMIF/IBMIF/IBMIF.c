#include<stdio.h>
//Body Mass Index Program.
//You Can Find Your Body Mass Index Using This Program.
int main()
{
	float Weight, Height, bmi;
	printf("Enter Your Weight In Pounds:");
	scanf("%f", &Weight);
	printf("Enter Your Height In Inches:");
	scanf("%f", &Height);
	bmi=Weight*703/(Height*Height);
	printf("Your Body Mass Index Is:%f\n", bmi);
	if(bmi<18.5)
	{
	   printf("You Are Under Weight.\n");
	}
	if(bmi>18.6&&bmi<=25)
	{
	   printf("You Are Normal In Weight.\n");
	}
	if(bmi>25&&bmi<=30)
	{
	   printf("You Are Over Weight.\n");
	}
	if(bmi>30)
	{
	   printf("You Are Obese.\n");
	}
	printf("Thank You For Using Program.\n");
	//Thank You For Using This Program.
}