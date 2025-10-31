#include<stdio.h>
//
char* str1(char* str);
void main()
{
	char str[10];
	printf("Enter a name :");
	scanf("%s",str);
	char *s=str1(str);
	printf("%s",s);

}
char* str1(char* str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if('a'==str[i]||'A'==str[i])
		{
			str[i]='$';
		}
	}
	return str;
}
