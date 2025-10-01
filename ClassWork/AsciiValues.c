#include<stdio.h>
// Asckii values
int main()
{
	char ch='b';
	if(ch>='A' && ch<='Z');
	{
		ch=ch+32;
	}
	{
		ch=ch-32;
	}
	printf("%c",ch);
}
