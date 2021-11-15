#include<stdio.h>
int main()
{
	int num[3][4];
	for(int r=0;r<3;r++)
	{
		for(int c=0;c<4;c++)
		{
			scanf("%d",&num[r][c]);
		}
	}
		for(int r=0;r<3;r++)
	{
		for(int c=0;c<4;c++)
		{
			printf("%d\t",num[r][c]);
		}
		printf("\n");
	}
	
}
