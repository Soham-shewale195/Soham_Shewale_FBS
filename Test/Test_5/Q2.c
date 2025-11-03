//Q.2. WAP to initialize some amount in your account. Then give choice to user for deposit or 
//withdraw. and display updated amount. Condition to withdraw (if the balance is less than 
//3000 display can't withdraw the amount balance is not sufficient).

#include<stdio.h>

void transaction(float balance);

void main()
{
    float balance;
    printf("Enter initial account balance: ");
    scanf("%f", &balance);
    transaction(balance);
}

void transaction(float balance)
{
    int choice;
    float amount;

    printf("\n1. Deposit\n2. Withdraw\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        balance += amount;
        printf("Updated balance: %.2f", balance);
    }
    else if(choice == 2)
    {
        if(balance < 3000)
        {
            printf("Can't withdraw, balance is not sufficient.");
        }
        else
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount > balance)
            {
                printf("Withdrawal amount is greater than balance.");
            }
            else
            {
                balance -= amount;
                printf("Updated balance: %.2f", balance);
            }
        }
    }
    else
    {
        printf("Invalid choice.");
    }
}

