#include<stdio.h>
int main()
{
	int c[5];
	int a[5];
	printf("enter a number in arrays:\n");
	
		for(int i=0;i<5;i++)
		{
			printf("enter numbers:");
			scanf("%d",&a[i]);
		}
		int b[5];
		printf("enter 2nd arrays:\n");
		for(int i=0;i<5;i++)
		{
			printf("enter a 2nd number:");
			scanf("%d",&b[i]);
		}
		for(int m=0;m<5;m++)
		{
			c[m]=a[m];
			a[m]=b[m];
			b[m]=c[m];
			printf("\na[m]=%d\nb[m]=%d\n",a[m],b[m]);
		}
}

