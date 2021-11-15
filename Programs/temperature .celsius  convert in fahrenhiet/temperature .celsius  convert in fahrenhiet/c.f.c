#include<stdio.h>
//celcius convert in fahrenhiet using formula F=9/5*celcius+32
float main()
{
	float c,f;
	printf("enter a temperature in celcius:");
	scanf("%f",&c);
	f=9/5*c+32;
	printf("fehrenhiet=%f\n",f);

}