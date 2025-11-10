#include<stdio.h>
// m. mystrncmp (Compare first n characters)
void mystrncmp(char*, char*, int);

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
    
    mystrncmp(s1, s2, n);
}

void mystrncmp(char *s1, char *s2, int n)
{
    int i, flag = 0;
    for(i = 0; i < n; i++)
    {
        if(s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
        if(s1[i] == '\0' || s2[i] == '\0')
            break;
    }

    if(flag == 0)
        printf("First %d characters are equal.", n);
    else
        printf("First %d characters are not equal.", n);
}

