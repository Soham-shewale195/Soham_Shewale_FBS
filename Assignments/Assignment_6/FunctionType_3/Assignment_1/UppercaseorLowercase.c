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

int alpha();
void main()
{
	int a=alpha();
	if(a==0) //A = 65, B = 66, … Z = 90
	{
		printf("Uppercase .");
	}
	else
	{
		printf("Lowercase .");
	}
}
int alpha()
{
	char character,count=0;
	printf("Enter a character :");
	scanf("%c",&character);
	
	if(character>= 'A' && character<='Z') //A = 65, B = 66, … Z = 90
	{
		count=0;
		return count;
	}
	else
	{
		count++;
		return count;
	}
}












