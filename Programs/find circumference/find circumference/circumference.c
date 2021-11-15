#include<stdio.h>
//find area&circumference using formula Area=4*3.14*r*r..&circumference=4/3*3.14*r*r*r..
int main()
{
	float r, area, cir;
	printf("enter radius:");
	scanf("%f",&r);
	area=4.0*3.14*r*r;
	cir=(4.0/3.0)*3.14*r*r*r;
	printf("\nArea is %5.2f\n",area);
	printf("Circumference is %5.2f\n",cir);
}