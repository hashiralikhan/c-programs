
#include<stdio.h>
int main()
{
	int p[7];
	int i,temp,j;
	for(i=0;i<7;i++)
	{
		printf("Enter value:");
		scanf("%d",&p[i]);
	}
	for(int j=0;j<7;j++)
	{
	    for(i=0;i<7;i++)
	    {
		   if(p[i]>p[i+1])
		   {
			   temp=p[i];
			   p[i]=p[i+1];
			   p[i+1]=temp;
		   }
	    }	    
      }

for(i=1;i<=7;i++)
	    {
	    	printf("%d\n",p[i]);
		}
}
