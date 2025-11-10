#include<stdio.h>
// f. mystrupper -convert string to uppercase.
void mystrupper(char*);

void main()
{
    char str[50];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    mystrupper(str);
}

void mystrupper(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        // check if lowercase letter
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // convert to uppercase
        }
        i++;
    }
    
    printf("String in uppercase: %s", str);
}

