#include<stdio.h>

//Q.7.WAP to Remove the Characters of Odd Index Values in a String.
void RemoveOddInd(char *str);//func declaration.
void main()
{
	char str[50];
	printf("enter the string:\n");
	fgets(str,sizeof(str),stdin);  // takes full sentence including spaces
	
	RemoveOddInd(str);      // & not needed cause "str" represents the address of the 1st character..
	printf("Final string without odd index values : %s",str);

}
void RemoveOddInd(char *str)   //func defination.
{
	int i=0,j=0;
	while (str[i]!='\0')   // when we donnt know when loop stops use while loop.
	{
		if(i%2==0)           // keep only even index chars
		{
			str[j]=str[i];   // move even char to new position
			j++;
		}
		i++;
	}
	str[j] = '\0'; // we have to terminate the final string manually cause its users input.
}
