#include<stdio.h>
int main()
{
	int rn1, cn1, rn2, cn2, swap=0;

	printf("Value Before Swipping.\n");
	printf("Please Enter 1st Students Roll Number:");
	scanf("%d",&rn1);

	printf("Please Enter 1st Students Contact Number:");
	scanf("%d",&cn1);

	printf("Please Enter 2nd Students Roll Number:");
	scanf("%d",&rn2);

	printf("Please Enter 2nd Students Contact Number:");
	scanf("%d",&cn2);
	
	swap=cn1;
	cn1=cn2;
	cn2=swap;

	 printf("Value After Swimping.\n");

	 printf("1st Students Roll Number:%d\n",rn1);

	 printf("First Students Contact Number:%d\n",cn1);

	 printf("2nd Students Roll Number:%d\n",rn2);

	 printf("Second Students Contact Number:%d\n",cn2);
}