#include<stdio.h>
// Averageof Three Numbers
int main(void)
{
	int n1,n2,n3,avg;
	printf("Enter First Number:");
	scanf("%d",&n1);
	printf("Enter Second Number:");
	scanf("%d",&n2);
	printf("Enter Third Number:");
	scanf("%d",&n3);
	avg=(n1+n2+n3)/3;
	printf("Average Is:%d\n",avg);
}