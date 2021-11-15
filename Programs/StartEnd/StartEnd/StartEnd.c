#include<stdio.h>
int main()
{
	int startnum, endnum;

	printf("Enter Start Number:");
	scanf("%d",&startnum);
	printf("Enter Last Number:");
	scanf("%d",&endnum);

	while(startnum<=endnum)
	{
		printf("%d\n",startnum);
		startnum+=1;
	}
		
}