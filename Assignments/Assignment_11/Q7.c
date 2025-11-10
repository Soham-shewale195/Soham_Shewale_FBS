#include<stdio.h>
// g. mystrlower =convert string into lowercase.
void mystrlower(char*);

void main()
{
    char str[50];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    mystrlower(str);
}

void mystrlower(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        // check if uppercase letter
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // convert to lowercase
        }
        i++;
    }
    
    printf("String in lowercase: %s", str);
}

