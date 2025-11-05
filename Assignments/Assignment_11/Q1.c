#include <stdio.h>

// Function prototype
void mystrcpy(char *dest, char *src);

void main()
{
    char str1[10], str2[10];

    printf("Enter a string: ");
    scanf("%s", str1);

    mystrcpy(str2, str1);

    printf("Copied string is: %s", str2);
}

void mystrcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')  // copy each character
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // add null terminator
}

