#include<stdio.h>
//c. mystrcmp 
void mystrcmp(char*,char*);
void main()
{
	char str[20],xyz[20];
	printf("Enter your name:");
	scanf("%s",str);
	printf("Enter your name:");
	scanf("%s",xyz);
	
	mystrcmp(str,xyz);
}
void mystrcmp(char *str,char *xyz)
{
	int count=1;
    int i = 0, flag = 0;
    
    while (str[i] != '\0' || xyz[i] != '\0')
    {
        if (str[i] != xyz[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
	if(flag==0)
		printf("string is equal .");
	else
		printf("string is not equal .");
}
