#include<stdio.h>
//Q.2.WAP to Replace all Occurrences of ‘a’ with $ in a String 

void Replace(char[]);//func declaration.
void main()
{
	char str[5],chr;
	printf("enter the string:\n");
	scanf("%s",str);

	Replace(str);
}
void Replace(char str[])
{
	// find element in string.
	for (int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a')
		{
			str[i]='$';
		}
	}
	printf("\nFinal String: %s",str);
}
