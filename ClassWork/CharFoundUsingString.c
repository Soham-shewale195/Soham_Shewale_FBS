#include<stdio.h>
// char found code using array.
void main()
{
	char str[50],ch;
	printf("Enter your name:");
	scanf("%s",str);

	printf("Enter the char you want to search :");
	scanf(" %c",&ch);// add space.
	
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			printf("Character found : %c",ch);
			return;
		}
		i++;
	
	}
	printf("Char not Found ");
}
