#include<stdio.h>
//find area by formula Area=1/2*base*height.
float main()
{
	float base, height, area;
	printf("enter base");
	scanf("%f",&base);
	printf("enter height");
	scanf("%f",&height);
	area=0.5*base*height;
	printf("Area=%f",area);
	main();
}