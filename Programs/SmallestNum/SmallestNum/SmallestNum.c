#include<stdio.h>
// Smallest Num.
int main()
{
	int smallest, a,b,c,d,e;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("Enter Third Number:");
	scanf("%d",&c);
	printf("Enter Fourth Number:");
	scanf("%d",&d);
	printf("Enter Fifth Number:");
	scanf("%d",&e);
	smallest=a;
	if(b<smallest)smallest=b;
	if(c<smallest)smallest=c;
	if(d<smallest)smallest=d;
	if(e<smallest)smallest=e;
	printf("Smallest Number Is %d\n",smallest);
}
