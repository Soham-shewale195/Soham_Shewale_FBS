#include<stdio.h>
// j. mystrcasecmp(Compare strings ignoring case)
void mystrcasecmp(char*, char*);

void main()
{
    char str1[50], str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    mystrcasecmp(str1, str2);
}

void mystrcasecmp(char *s1, char *s2)
{
    int i = 0, flag = 0;
    char c1, c2;

    while(s1[i] != '\0' || s2[i] != '\0')
    {
        c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
        c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];

        if(c1 != c2)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
        printf("Strings are equal (case-insensitive).");
    else
        printf("Strings are not equal (case-insensitive).");
}

