#include<stdio.h>
//To find number is negative or positive.
int main()
{
	int num1;
	printf("Please Enter Number:");
	scanf("%d",&num1);
	(num1<0)? puts("Entered Number is Negative."):puts("Entered Number is Positive.");
	main();
}