#include<stdio.h>
//To Find Your Grade Use This Program.
int main()
{
	int grade;
	printf("Enter Your Marks:");
	scanf("%d",&grade);
	if(grade>=90)
	
	puts("Your Grade Is A+.");
	else if(grade>=80)
		puts("Your Grade Is A.");

		else if(grade>=70)
			puts("Your Grade Is B.");

			else if(grade>=60)
				puts("Your Grade Is C.");

				else if(grade>=50)
					puts("Your Grade Is D.");

					else if(grade>=40)
						puts("Your Grade Is E.");

					else if(grade<=39)
								puts("You Are Fail.");
}