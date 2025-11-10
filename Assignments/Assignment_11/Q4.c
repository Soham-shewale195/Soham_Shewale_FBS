#include<stdio.h>
//d. mystrcat  
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
	int i=0,j=0;

    while (str[i] != '\0' )
     {
        i++;      //complete string 1.
     }
    while(xyz[j] != '\0')
    {
        str[i] = xyz[j];
        i++;
        j++;
    }
    str1[i] = '\0';// end of str1 place
    
    printf("Concatenated string: %s", str1);

}
