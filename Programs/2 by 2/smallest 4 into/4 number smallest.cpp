#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("enter four numbers:");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	if(a<b)
	{
		if(a<c);
		else if(a<d)
			printf("%d is smallest \n",a);
	}

}