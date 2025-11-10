#include<stdio.h>
// h. mystrrev
void mystrrev(char*);

void main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    mystrrev(str);
}

void mystrrev(char *str)
{
    int i = 0, j = 0;
    char temp;
    
    while(str[j] != '\0')
        j++;
    j--;  // move to last index
    
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    
    printf("Reversed string: %s", str);
}

