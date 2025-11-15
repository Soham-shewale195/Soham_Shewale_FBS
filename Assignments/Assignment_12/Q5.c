#include<stdio.h>

//Q.5.WAP to Count the Number of Vowels in a String  .
void CountVowel(char []);//func declaration.
void main()
{
	char str[20];
	int ind;
	printf("enter the string:\n");
	scanf("%s",str);
	CountVowel(str);         //func call .
}
void CountVowel(char str[])   //func defination.
{
	int count=0;
	// remove element in string .
	for (int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')                 // first character
			count++;
		else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')         // last character
			count++;
	}
	
	if(count>0)
		printf("The number of Vowels present is : %d",count);
	else
		printf("There is no Vowels in this string.....");
}
