#include<stdio.h>
int main()
{
	int a[6];
	int c=0,d=0;
	for(int i=0;i<6;i++)
	{
		printf("enter a arrays:");
		scanf("%d",&a[i]);
	}
	for(int h=0;h<6;h++)
	{
	if(a[h]%2==0)
	{
	printf("%d is Even\n",a[h]);
	c++;
	}
	else
	{
	printf("%d is Odd\n",a[h]);
	d++;
	}
	printf("total even in array:%d\n",c);
	printf("total odd in array:%d\n",d);}

}
