#include<stdio.h>
//
void main()
{
	char str[10];
	printf("Enter a name :");
	scanf("%s",str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if('a'==str[i])
		{
			str[i]='@';
		}
	}
	printf("%s",str);
}
