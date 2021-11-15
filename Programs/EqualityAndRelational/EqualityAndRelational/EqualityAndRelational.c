#include<stdio.h>

int main()
{
	int num1, num2;
	printf("Enter Two Numbers:");
	scanf("%d%d" , &num1, &num2);
	if(num1==num2)
	{
     printf("%d is Equal to:%d\n", num1, num2);
	}

	if(num1!=num2)
	{
     printf("%d is not Equal to:%d\n", num1, num2);
	}

	if(num1>num2)
	{
     printf("%d is Greater than:%d\n", num1, num2);
	}

	if(num1<num2)
	{
     printf("%d is Less than:%d\n", num1, num2);
	}

	if(num1>=num2)
	{
     printf("%d is Greater than or Equal to:%d\n", num1, num2);
	}

	if(num1<=num2)
	{
     printf("%d is Less than or Equal to:%d\n", num1, num2);
	}
}