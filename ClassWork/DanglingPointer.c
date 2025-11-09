#include<stdio.h>

void main()
{
    int a = 10;
    int *ptr = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);  //%p means =Address (pointer)
    printf("Pointer ptr value (address stored): %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
}

