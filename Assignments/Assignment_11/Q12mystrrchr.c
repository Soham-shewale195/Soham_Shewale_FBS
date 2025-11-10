#include<stdio.h>
// l. mystrrchr (Find last occurrence of a character)
void mystrrchr(char*, char);

void main()
{
    char str[50], ch;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to find last occurrence: ");
    scanf(" %c", &ch);
    
    mystrrchr(str, ch);
}

void mystrrchr(char *str, char ch)
{
    int i, pos = -1;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            pos = i;
    }

    if(pos != -1)
        printf("Last occurrence of '%c' found at position %d", ch, pos + 1);
    else
        printf("Character '%c' not found", ch);
}

