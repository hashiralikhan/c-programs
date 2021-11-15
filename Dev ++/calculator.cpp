#include<stdio.h>
int getnum();
int add(int a, int b);
int sub(int c, int d);
int mul(int e, int f);
float div(float g,float h);
char sym();
int main()
{
 char x=sym();
 if(x=='-')
 {
	 printf("%d",sub(getnum(),getnum()));
 }
 if(x=='+')
 {
	 printf("%d",add(getnum(),getnum()));
 }
 if(x=='*')
 {
	 printf("%d",mul(getnum(),getnum()));
 }
 if(x=='/')
 {
	 printf("%f",div(getnum(),getnum()));
 }
}
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int sub(int c,int d)
{
	int deffi;
	deffi=c-d;
	return deffi;
}
int mul(int e,int f)
{
	int multiple;
	multiple=e*f;
	return multiple;
}
float div(float g,float h)
{
	float divide;
	divide=g/h;
	return divide;
}
char sym()
{
	char k;
	printf("Enter a symbal:");
	scanf("%c",&k);
	return k;
}

