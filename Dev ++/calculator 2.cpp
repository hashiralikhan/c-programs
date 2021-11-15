#include<stdio.h>
int mul(int a,int b);
int sub(int c,int d);
int sum(int e,int f);
float div(float g,float h);
int num();
char sym();
int main()
{
  char k=sym();	
  if(k=='-')
  {
  	printf("%d\n",sub(num(),num()));
  }
   if(k=='+')
  {
  	printf("%d\n",sum(num(),num()));
  }
   if(k=='*')
  {
  	printf("%d\n",mul(num(),num()));
  }
   if(k=='/')
  {
  	printf("%f\n",div(num(),num()));
  }
  main();
}
int mul(int a,int b)
{
	int res;
	res=a*b;
	return res;
}
int sub(int c,int d)
{
	int resu;
	resu=d-c;
	return resu;
}
int sum(int e,int f)
{
	int result;
	result=e+f;
	return result;
}
float div(float g,float h)
{
	float ress;
	ress=h/g;
	return ress;
}
int num()
{
	int s;
	printf("enter numbers:\n");
	scanf("%d",&s);
	return s;
}
char sym()
{
	char j;
	printf("enter a symbol for calculation:\n");
	scanf(" %c",&j);
	return j;
}
