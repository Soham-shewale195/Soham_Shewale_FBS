#include<stdio.h>
//b. mystrlen 
void main()
{
	char str[20];
	printf("Enter your name:");
	scanf("%s",str);
	
	mystrlen(str);
}
void mystrlen(char str[])
{
	int count;
	printf("name :%s\n",str);
	for(int i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("count :%d",count);
}
