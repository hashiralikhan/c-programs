#include<stdio.h>
//
int main()
{
	int n, c=1, range;

	printf("Enter a Number:");
	scanf("%d",&n);
	printf("Enter the range:");
	scanf("%d",&range);

	while(c<=range)
	{
		printf("%d*%d=%d\n",n,c,n*c);
		c+=1;
	
	}
}