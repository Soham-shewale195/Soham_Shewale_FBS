#include<stdio.h>
// i. mystrstr 
void mystrstr(char*, char*);

void main()
{
    char str[100], sub[50];
    printf("Enter main string: ");
    scanf("%s", str);
    printf("Enter substring to find: ");
    scanf("%s", sub);
    
    mystrstr(str, sub);
}

void mystrstr(char *str, char *sub)
{
    int i, j, found = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; sub[j] != '\0'; j++)
        {
            if(str[i + j] != sub[j])
                break;
        }
        if(sub[j] == '\0')
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Substring found at position %d", i + 1);
    else
        printf("Substring not found");
}

