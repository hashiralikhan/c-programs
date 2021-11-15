#include<stdio.h>
int main()
{
	int m;
	printf("How Many no. you want to enter:");
	scanf("%d\n",&m);
	int n[m];
	

	for(int i=0; i<m; i++)
	{
		scanf("%d",&n[i]);
	}
	for(int i=0; i<m; i++)
	{
		printf("you enter value:%d\n",n[i]);
}
}
