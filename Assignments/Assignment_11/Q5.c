#include<stdio.h>
// e. mystrncpy
void mystrncpy(char*, char*, int);

void main()
{
    char src[50], dest[50];
    int n;
    
    printf("Enter source string: ");
    scanf("%s", src);
    
    printf("Enter how many characters you want to copy: ");
    scanf("%d", &n);
    mystrncpy(dest, src, n);
}

void mystrncpy(char *dest, char *src, int n)
{
    int i;
    
    // copy first n characters
    for(i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    
    // if src is smaller than n, fill remaining with '\0'
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    
    dest[i] = '\0';  // end of string
    
    printf("Copied string (first %d characters): %s", n, dest);
}

