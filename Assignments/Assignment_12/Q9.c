#include<stdio.h>
#include<string.h>
//Q.9.WAP to Take in Two Strings and Display the Larger String without Using Built-in 
//Functions .
char* LargerString(char *str1,char *str2);//func declaration.
void main()
{
	char str1[50],str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);
    
	char* large=LargerString(str1,str2);      // & not needed cause "str" represents the address of the 1st character..
	printf("The larger string is : %s",large);

}
char* LargerString(char *str1,char *str2)  //func defination.
{
    char large[50];
    int len1 = 0, len2 = 0;
        // Count length of first string
    while (str1[len1] != '\0')
        len1++;

    // Count length of second string
    while (str2[len2] != '\0')
        len2++;

    if (len1 > len2)
        return str1;
    else if (len2 > len1)
        return str2;
    else
        return "Both are equal in length";
}
