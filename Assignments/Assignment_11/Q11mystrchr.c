#include<stdio.h>
// k. mystrchr (Find first occurrence of a character)
void mystrchr(char*, char);

void main()
{
    char str[50], ch;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to find: ");
    scanf(" %c", &ch);
    
    mystrchr(str, ch);
}

void mystrchr(char *str, char ch)
{
    int i, found = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character '%c' found at position %d", ch, i + 1);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Character '%c' not found", ch);
}

