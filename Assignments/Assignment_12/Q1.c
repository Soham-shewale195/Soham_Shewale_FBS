#include<stdio.h>
//Write a program to scan string from user then scan a single character and 
//search it in a accepted string. 

void searchElement(char[],char);//func declaration.
void main()
{
	char str[5],chr;
	printf("enter the string:");
	scanf("%s",str);
	
	printf("enter the character:");
	scanf(" %c",&chr);

	searchElement(str,chr);
}
void searchElement(char str[],char chr)
{
	// find element in string.
	for (int i=0;str[i]!='\0';i++)
	{
		if(str[i]==chr)
		{
			printf("%c char found at index %d",chr,i);
		}
	}
}
