#include<stdio.h>
//input string and display on screen
char main()
{
	char book[50];
	printf("enter name of your favorite book:");
	gets(book);
	printf("Your favorite book is: ");
	puts(book);
}