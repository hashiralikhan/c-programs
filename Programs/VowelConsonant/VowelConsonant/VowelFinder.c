#include<stdio.h>
// Vowel program
int main()
{
	char n;

    printf("Please enter a Character:");
	scanf("%c",&n);

	if(n=='a'||n=='A')
	puts("You Enter A Vowel.");

	else if(n=='e'||n=='E')
	puts("You Enter A Vowel.");

	else if(n=='i'||n=='I')
	puts("You Enter A Vowel.");

	else if(n=='o'||n=='O')
	puts("You Enter A Vowel.");

	else if(n=='u'||n=='U')
	puts("You Enter A Vowel.");

	else
		puts("You Entered A Consonant.");
}