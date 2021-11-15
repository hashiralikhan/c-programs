#include<stdio.h>
int getnum();
int getsym();
int add(int a,int b);
int def(int a,int b);
float div(float a,float b);
int mul(int a,int b);
float cal(int a,int b,char op);
int main()
{
	printf("%f",cal(getnum(),getnum(),getsym()));
}
int getnum()
{
	int u;
	printf("Enter a number");
	scanf("%d",&u);
	return u;
}
int getsym()
{
	char r;
	printf("Enter a symbol to perform action:");
	scanf("%c",&r);
	return r;
}
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int def(int a,int b)
{
	int sub;
	sub=b-a;
	return sub;
}
float div(float a,float b)
{
	float divide;
	divide=b/a;
	return divide;
}
int mul(int a,int b)
{
	int multiple;
	multiple=a*b;
	return multiple;
}
float cal(int a,int b,char op)
{
		if(op=='+')
		{
			add(a,b);
		}
		else if(op=='-')
		{
        	def(a,b);
		}
		else if(op=='*')
		{
	    	mul(a,b);
		}
		else if(op=='/')
		{
			div(a,b);
		}
		else 
		{
			printf("You enter wrong symbol:");
		}


}
