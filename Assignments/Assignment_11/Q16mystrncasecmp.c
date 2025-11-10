#include<stdio.h>
// p. mystrncasecmp (Compare first n chars ignoring case)
void mystrncasecmp(char*, char*, int);

void main()
{
    char s1[50], s2[50];
    int n;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    printf("Enter number of characters to compare: ");
    scanf("%d", &n);
    
    mystrncasecmp(s1, s2, n);
}

void mystrncasecmp(char *s1, char *s2, int n)
{
    int i, flag = 0;
    char c1, c2;

    for(i = 0; i < n; i++)
    {
        c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
        c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];

        if(c1 != c2)
        {
            flag = 1;
            break;
        }

        if(s1[i] == '\0' || s2[i] == '\0')
            break;
    }

    if(flag == 0)
        printf("First %d characters are equal (case-insensitive).", n);
    else
        printf("First %d characters are not equal (case-insensitive).", n);
}

