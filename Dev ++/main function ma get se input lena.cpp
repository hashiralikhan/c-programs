#include<stdio.h>
int getnum();
int main()
{
	int answer;
	printf("sum is %d\n",answer=(getnum(),getnum()));
}
int getnum(int a,int b)
{
	int results;
	results=a+b;
	return results;

}
