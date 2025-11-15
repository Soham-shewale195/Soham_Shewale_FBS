#include<stdio.h>
#include<string.h>
//Q.8.WAP to Calculate the Number of Words Present in a String .
int CalculateWords(char *str);//func declaration.
void main()
{
	char str[50];
	printf("enter the string:\n");
	fgets(str,sizeof(str),stdin);  // takes full sentence including spaces
	
	int len=strlen(str);
	int cal=CalculateWords(str);      // & not needed cause "str" represents the address of the 1st character..
	printf("Number of Words Present : %d",cal);

}
int CalculateWords(char *str)  //func defination.
{
	int count = 0, i = 0;
    int inWord = 0;
    
	 while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && !inWord) 
		{
            count++;                   // for word count
            inWord = 1;         // in word count
        } 
		else if (str[i] == ' ') 
		{
            inWord = 0;           // outside the word count.
        }
        i++;
    }
    return count;
}
