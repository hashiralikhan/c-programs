#include<stdio.h>
//
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	(n%3==0?printf("Divisible by 3\n"):printf("Not divisible by 3\n"));
}