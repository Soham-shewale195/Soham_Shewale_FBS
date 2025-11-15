#include<stdio.h>
#include<string.h>
//Q.10.Write a program to check the string is palindrome or not. 
void palindrome(char *str1);//func declaration.
void main()
{
	char str1[50],str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);
    palindrome(str1);      // & not needed cause "str" represents the address of the 1st character..

}
void palindrome(char *str1)  //func defination.
{
       int i = 0, j = 0, flag = 1;

    // find length manually
    while (str1[j] != '\0')
    {
        j++;  
	}
    j--; // move to last character

    // check palindrome
    while (i < j)
    {
        if (str1[i] != str1[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
        printf("String is Palindrome");
    else
        printf("String is NOT Palindrome");

}
