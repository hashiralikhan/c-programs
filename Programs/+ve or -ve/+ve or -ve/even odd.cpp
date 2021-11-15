#include<stdio.h>
int main()
{
	int x;
	printf("enter a number:");
	scanf("%d",&x);

	(x%2==0)?puts("positive"):puts("negative");
	main();

}