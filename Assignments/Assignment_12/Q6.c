#include<stdio.h>

//Q.6.WAP to Take in a String and Replace Every Blank Space with special symbol. 
void ReplaceSpace(char *str);//func declaration.
void main()
{
	char str[50];
	printf("enter the string:\n");
	fgets(str,sizeof(str),stdin);  // takes full sentence including spaces
	
	ReplaceSpace(str);      // & not needed cause "str" represents the address of the 1st character..
	printf("The Final string : %s",str);
}
void ReplaceSpace(char *str)   //func defination.
{
	int i=0;
	while (str[i]!='\0')   // when we donnt know when loop stops use while loop.
	{
		if(str[i]==' ')                
			str[i]='_';
			
		i++;
	}
	

}
