#include<stdio.h>
int main()
{
	int smallest,a,b,c,d,e;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter a value");
	scanf("%d",&b);
	printf("enter a value");
	scanf("%d",&c);
	printf("enter a value");
	scanf("%d",&d);
	printf("enter a value");
	scanf("%d",&e);
	smallest=a;
	if(b<smallest)smallest=b;
	if(c<smallest)smallest=c;
	if(d<smallest)smallest=d;
	if(e<smallest)smallest=e;
	printf("smallest: %d\n",smallest);
	main();
}