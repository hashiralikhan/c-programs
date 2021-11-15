#include<stdio.h>
int main()
{
	float a;
	float sum=0;
	printf("enter a value to add:\n");
	while(a>=0)
	{
		scanf("%f",&a);
		if(a>=0)
		{
			sum=sum+a;
		}
	}
	printf("Sum is: %f\n",sum);

}
