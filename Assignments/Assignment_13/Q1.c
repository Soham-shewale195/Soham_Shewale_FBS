#include <stdio.h>
#include <stdlib.h> // Required for malloc()

// Q.1. Find minimum and maximum number in array using malloc().

void main()
{
    int *arr;   // arr pointer to store address.
    int min, max;

    // Allocate memory for 5 integers
    arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!");
    }

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max number: %d\n", max);
    printf("Min number: %d\n", min);

    free(arr); // Always free allocated memory
    
}

