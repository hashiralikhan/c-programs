#include<stdio.h>
// Table Program.
int main()
{
	int n, i, counter;
	printf("Enter An Integer: ");
	scanf("%d",&n);
	for(i=1; i<=10; ++i)
	{
		printf("%d * %d = %d \n",n, i, n*i);
	}
	return 0;

	
}