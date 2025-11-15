#include<stdio.h>
//Q.3.WAP to Remove the nth Index Character from a Non-Empty String  

void Remove(char [],int);//func declaration.
void main()
{
	char str[5],chr;
	int ind;
	printf("enter the string:\n");
	scanf("%s",str);
	
	printf("enter the index to remove :\n");
	scanf("%d",&ind);
	
	Remove(str,ind);
}
void Remove(char str[],int ind)
{
	// remove element in string .
	for (int i=ind;str[i]!='\0';i++)
	{
		str[i]=str[i+1];
	}
	printf("\nFinal String: %s",str);
}
