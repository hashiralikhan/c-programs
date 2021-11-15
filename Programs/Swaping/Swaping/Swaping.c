#include<stdio.h>
int main()
{
	int a, b, swap=0;

	printf("Please Enter 1st Number:");
	scanf("%d",&a);

	printf("Please Enter 2nd Number:");
	scanf("%d",&b);

	swap=a;
	a=b;
	b=swap;
	 printf("Value After Swimping.\n");
	 printf("a=%d\n",a);
	 printf("b=%d\n",b);
}