#include<stdio.h>
//Table With Range Program.
int main()
{
	int n, m=1, range;

	printf("Enter The Number:");
	scanf("%d",&n);
	printf("Enter The Range:");
	scanf("%d",&range);

	while(m<=range)
	{
		printf("%d * %d = %d\n",n, m, n*m);
		m+=1;
	}
	main();
}