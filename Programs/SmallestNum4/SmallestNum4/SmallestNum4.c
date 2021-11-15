#include<stdio.h>
//Find The Smallest Numbers.
int main()
{
	int n1, n2, n3, n4;
	printf("Enter First Number:");
	scanf("%d",&n1);
	printf("Enter Second Number:");
	scanf("%d",&n2);
	printf("Enter Third Number:");
	scanf("%d",&n3);
	printf("Enter Fourth Number:");
	scanf("%d",&n4);
	if(n1<n2)	{
		if(n1<n3)
			if(n1<n4)
				printf("Smallest Number Is %d\n",n1);
	}
	if(n2<n1)	{
		if(n2<n3)
			if(n2<n4)
			printf("Smallest Number Is %d\n",n2);
	}
	if(n3<n1)	{
		if(n3<n2)
			if(n3<n4)
			printf("Smallest Number Is %d\n",n3);
	}
	if(n4<n1)	{
		if(n4<n2)
			if(n4<n3)
				printf("Smallest Number Is %d\n",n4);
	}
	printf("******************************************\n");
	main();
}