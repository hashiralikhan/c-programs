#include<stdio.h>
void printName(char a,float b);
int main()
{
	printName('H',3.3);
	return 0;
}
void printName(char a,float b)
{
	printf("You have got:%c\n GPA is %.2f\n",a,b);
}
