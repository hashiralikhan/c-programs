#include<stdio.h>
int main()
{
	float tempc;
	float tempf;
	printf("Enter Temperature In Celsius:");
	scanf("%f",&tempc);
	tempf=tempc*9/5+32;
		printf("Temperature In Fahrenheit Is:%f\n",tempf);
}