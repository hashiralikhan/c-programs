#include<stdio.h>
//Even Or Odd.
int main()
{
	int num;
	printf("Enter Your Number:");
	scanf("%d",&num);
	printf("Number Is %s\n",(num%=2)?"Odd":"Even");
}