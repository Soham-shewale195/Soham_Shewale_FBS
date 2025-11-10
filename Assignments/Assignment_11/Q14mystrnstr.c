#include<stdio.h>
// n. mystrnstr
void mystrnstr(char*, char*, int);

void main()
{
    char str[100], sub[50];
    int n;
    printf("Enter main string: ");
    scanf("%s", str);
    printf("Enter substring: ");
    scanf("%s", sub);
    printf("Enter number of characters to search in: ");
    scanf("%d", &n);
    
    mystrnstr(str, sub, n);
}

void mystrnstr(char *str, char *sub, int n)
{
    int i, j, found = 0;

    for(i = 0; i < n && str[i] != '\0'; i++)
    {
        for(j = 0; sub[j] != '\0'; j++)
        {
            if(i + j >= n || str[i + j] != sub[j])
                break;
        }
        if(sub[j] == '\0')
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Substring found within first %d characters.", n);
    else
        printf("Substring not found within first %d characters.", n);
}

