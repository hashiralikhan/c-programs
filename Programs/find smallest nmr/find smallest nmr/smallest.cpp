#include<stdio.h>
int main()
{
	int a, b, c;
	printf("enter  three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c)
		printf("%d is smallest\n",a);
	else if(b<a && b<c)
		printf("%d is smallest\n",b);
	else
		printf("%d is smallest\n",c);
	printf("***************************\n");
	main();

}