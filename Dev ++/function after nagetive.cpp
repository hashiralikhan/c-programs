#include<stdio.h>
void myfunction(int a,int b, int c);
int main()
{
	myfunction(50,67,5);
	return 0;
}
void myfunction(int a,int b,int c)
{
	a=a-c;
	b=b-c;
	printf("No after subtract:%d  %d\n",a,b);
}
