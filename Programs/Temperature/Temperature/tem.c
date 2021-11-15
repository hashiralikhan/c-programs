#include<stdio.h>
int main()
{
	int T,t;
	printf("Enter temperature:");
	scanf("%d", &t);
	T=t*9/5+32;
	if(t>30)
		printf("WEATHER IS NOT.");
	else if(t<30)
		printf("WEATHER IS COLD");

}