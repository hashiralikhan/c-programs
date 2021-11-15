#include<stdio.h>
int main()
{
	float w, h;
	float BMI;
	printf("enter your wieght in pounds:");
	scanf("%f", &w);
	printf("enter your hieght in inches:");
	scanf("%f", &h);
	BMI=w*703/(h*h);
	printf("your body mass index is:%f/n",BMI);

	{
		if(w<18.5)
			printf(" less  wieght:/n");
	}
	if(BMI>18.6&&BMI<=24.9)
	{
		printf("normal in wieght\n");
	}
	if(BMI>25&&BMI<=29.9)
	{
		printf("over in wieght\n");
	}
	if(BMI>30)
	{
		printf("obese in wieght\n");
	}
}