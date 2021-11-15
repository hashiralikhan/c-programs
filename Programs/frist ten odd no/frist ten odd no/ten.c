#include<stdio.h>
//
int main()
{
	int n;
	n=1;
	do
	{
		if(n%2 !=0)
			printf("%d\n",n);
		n=n+1;
	}
	while(n<=20);
}