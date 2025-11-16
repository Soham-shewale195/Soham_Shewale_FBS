#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Book
{
    int ID;
    char name[50];
    char author[50];
    char category[50];
    float price;
    float rating;
}Book;

void storeBook(Book *b1, int size);
void displayBook(Book *b1, int size);

void main()
{
    Book *b1 ;
    int size = 0;
    int choice;

    while(1)
    {
        printf("\n================ MENU ================\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            printf("How many books you want to add: ");
            scanf("%d",&size);

            b1 = malloc(sizeof(Book) * size);

            storeBook(b1, size);
        }
        else if(choice == 2)
        {
            if(b1 == '\0')   // null checks.
                printf("\nNo books stored yet!\n");
            else
                displayBook(b1, size);
        }
        else if(choice == 6)
        {
            printf("Exiting program...\n");
            break;
        }
        else
        {
            printf("\nInvalid choice, try again.\n");
        }
    }

    free(b1);   // free heap memory.

}

void storeBook(Book *b1, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nEnter Book Id: ");
        scanf("%d",&b1[i].ID);

        printf("Enter Book Name: ");
        scanf(" %[^\n]s",b1[i].name);  // " %[^\n]s " use to store words with space but not new line(\n or Enter).

        printf("Enter Book Author: ");
        scanf(" %[^\n]s",b1[i].author);

        printf("Enter Book Category: ");
        scanf(" %[^\n]s",b1[i].category);

        printf("Enter Book Price: ");
        scanf("%f",&b1[i].price);

        printf("Enter Book Rating (0-5): ");
        scanf("%f",&b1[i].rating);
    }
}

void displayBook(Book *b1, int size)
{
    printf("\n================ BOOK LIST ================\n");
    for(int i=0;i<size;i++)
    {
        printf("\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.2f\n",
            b1[i].ID, b1[i].name, b1[i].author, b1[i].category, b1[i].price, b1[i].rating);
    }
    printf("===========================================\n");
}

