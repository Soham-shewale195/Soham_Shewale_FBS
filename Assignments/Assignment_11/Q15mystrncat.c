#include<stdio.h>
// o. mystrncat (Concatenate first n chars of second string)
void mystrncat(char*, char*, int);

void main()
{
    char s1[100], s2[50];
    int n;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    printf("Enter number of characters to concatenate: ");
    scanf("%d", &n);
    
    mystrncat(s1, s2, n);
}

void mystrncat(char *s1, char *s2, int n)
{
    int i = 0, j = 0;
    while(s1[i] != '\0')
        i++;
    
    while(j < n && s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    
    printf("Concatenated string: %s", s1);
}

