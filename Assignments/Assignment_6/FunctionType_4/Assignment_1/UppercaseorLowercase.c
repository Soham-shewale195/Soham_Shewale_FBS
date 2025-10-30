#include<stdio.h>
//6. Write a program to check whether a given character is uppercase or lowercase.

//ASCII for Alphabets:
//Uppercase (A–Z):
//A = 65, B = 66, … Z = 90
//Lowercase (a–z):
//a = 97, b = 98, … z = 122
//?? ASCII for Digits:
//0–9:
//'0' = 48, '1' = 49, … '9' = 57

char alpha(char);
int main()
{
	char character;
	printf("Enter a character :");
	scanf("%c",&character);
	
	char x=alpha(character);
	if(x=='A') //A = 65, B = 66, … Z = 90
	{
		printf("Uppercase .");
	}
	else
	{
		printf("Lowercase .");
	}
}
char alpha(char character)
{
	
	if(character>= 'A' && character<='Z') //A = 65, B = 66, … Z = 90
	{
		return 'A';
	}
	else
	{
		return 'a';
	}
}












