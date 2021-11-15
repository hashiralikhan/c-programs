#include<stdio.h>
// Table Program.
int main()
{
	int n, m, range;
	printf("Enter An Integer: ");
	scanf("%d",&n);
	printf("Enter A Range:");
	scanf("%d",&range);
	for(m=1; m<=range; ++m)
	{
		printf("%d * %d = %d \n",n, m,n*m);
	}
	return 0;

	
}