#include<stdio.h>

void main()
{
    int arr[5], temp[5];
    printf("Enter 5 elements :");

    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<5; i++)
    {
        int n = arr[i];
        int flag = 1;  // assume prime

        if(n <= 1)
            flag = 0;

        for(int j=2; j<=n/2; j++)
        {
            if(n % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            temp[i] = n;
        else
            temp[i] = -1;  // mark non-prime
    }

    printf("\nPrime numbers: ");
    for(int i=0; i<5; i++)
    {
        if(temp[i] != -1)
            printf("%d ", temp[i]);
    }
}



