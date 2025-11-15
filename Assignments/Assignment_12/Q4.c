#include<stdio.h>

//Q.4.WAP to Form a New String where the First Character and the Last Character have 
//been Exchanged  .
#include <string.h>  // when we use STRING FUNCTION its imp to add this library.
void Replace(char [],int len);//func declaration.
void main()
{
	char str[20];
	printf("enter the string:\n");
	scanf("%s",str);
	int len=strlen(str); // length of str to find last element position.
	Replace(str,len);
}
void Replace(char str[],int len)
{
	char newstr[20];
	// remove element in string .
	for (int i=0;str[i]!='\0';i++)
	{
		if(i==0)                 // first character
			newstr[i]=str[len-1];
		else if(i==len-1)         // last character
			newstr[i]=str[0];
		else 
			newstr[i]=str[i];
	}
	newstr[len] = '\0';
	printf("\nFinal String: %s",newstr);
}
