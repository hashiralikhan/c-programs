#include<stdio.h>
//This Program Is To Check That Weather Is Cold Or Hot.
int main()
{
	int Temperature;
	printf("Please Enter The Temperature:");
	scanf("%d",&Temperature);
	if(Temperature>=30)
		puts("Weather Is Hot.");
	else
		puts("Weather Is Cold.");

}