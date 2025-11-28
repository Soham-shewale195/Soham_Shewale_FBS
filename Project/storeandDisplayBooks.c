#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Book Management System Requirements:
------------------------------------
Features to Implement:
1. Add Book (ID, Name, Author, Category, Price, Rating)
2. Remove Book
3. Search Book by ID or Name
4. Show Books by Author
5. Show Books by Category
6. Update Book Price & Rating
7. Display Sorted Books (by Price / Rating)
8. Display All Books
*/
typedef struct Book
{
    int ID;
    char name[50];
    char author[50];
    char category[50];
    float price;
    float rating;
}Book;

Book* storeBook(Book *b1, int *size);
void displayBook(Book *b1, int size);
Book* removeBook(Book *b1, int *size);
void SearchBookById(Book *b1, int size);
Book* UpdateBook(Book *b1, int size);
void displaySortedBook(Book *b1, int size);

int main()
{
    Book *b1 = NULL;
    int size = 0;
    int choice;

    while(1)
    {
        printf("\n================ MENU ================\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("3. Remove Book\n");
        printf("4. Search Book\n");
        printf("5. Update Book Price & Rating \n");
        printf("6. Display Sorted Books (by Price / Rating)\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            b1 = storeBook(b1, &size);   //b1 store updated memory address after changes in array.
        }
        else if(choice == 2)
        {
            if(b1 == NULL || size == 0)
                printf("\nNo books available!\n");
            else
                displayBook(b1, size);
        }
        else if(choice == 3)
        {
            if(b1 == NULL || size == 0)
                printf("\nNo books available!\n");
            else
                b1 = removeBook(b1, &size);
        }
        else if(choice == 4)
        {
            if(b1 == NULL || size == 0)
                printf("\nNo books available!\n");
            else
                SearchBookById(b1,size);
        }
        else if(choice == 5)
        {
            if(b1 == NULL || size == 0)
                printf("\nNo books available!\n");
            else
                b1 = UpdateBook(b1,size);
        }
        else if(choice == 6)
        {
            if(b1 == NULL || size == 0)
                printf("\nNo books available!\n");
            else
                displaySortedBook(b1, size);
        }
        else if(choice == 7)
        {
            printf("\nExiting program...\n");
            break;
        }
        else
        {
            printf("\nInvalid choice, try again.\n");
        }
    }

    free(b1);
    return 0;
}

Book* storeBook(Book *b1, int *size)
{
    int newsize;
    printf("How many books you want to add: ");
    scanf("%d",&newsize);

    b1 = realloc(b1, (*size + newsize) * sizeof(Book));

    for(int i=*size; i < *size + newsize; i++)
    {
        printf("\nEnter Book Id: ");
        scanf("%d",&b1[i].ID);

        printf("Enter Book Name: ");
        scanf(" %[^\n]s",b1[i].name);

        printf("Enter Book Author: ");
        scanf(" %[^\n]s",b1[i].author);

        printf("Enter Book Category: ");
        scanf(" %[^\n]s",b1[i].category);

        printf("Enter Book Price: ");
        scanf("%f",&b1[i].price);

        printf("Enter Book Rating (0-5): ");
        scanf("%f",&b1[i].rating);
    }

    *size += newsize;
    printf("\nBooks Added Successfully!\n");
    return b1;
}

void displayBook(Book *b1, int size)
{
    printf("\n================ BOOK LIST ================\n");
    for(int i=0;i<size;i++)
    {
        printf("\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.2f\n",
            b1[i].ID, b1[i].name, b1[i].author, b1[i].category, b1[i].price, b1[i].rating);
    }
}

Book* removeBook(Book *b1, int *size)
{
    char bname[50];
    printf("\nEnter book name to remove: ");
    scanf(" %[^\n]s", bname);

    for(int i=0; i < *size; i++)
    {
        if(strcmp(b1[i].name, bname) == 0)
        {
            for(int j=i; j < *size - 1; j++)
            {
                b1[j] = b1[j + 1];
            }

            (*size)--;

            b1 = realloc(b1, (*size) * sizeof(Book));

            printf("\nBook \"%s\" removed successfully.\n", bname);
            return b1;
        }
    }

    printf("\nBook not found!\n");
    return b1;
}

void SearchBookById(Book *b1, int size)
{
	int bid,count=0;
	printf("Enter the book ID:");
	scanf(" %d",&bid);               
	for(int i=0;i<size;i++)
	{
		if(bid==b1[i].ID)
		{
			printf("\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.2f\n",
            b1[i].ID, b1[i].name, b1[i].author, b1[i].category, b1[i].price, b1[i].rating);
			count=1;
			break;
		}	
	}
    if(count==0)
        printf("There is no such book available.\n");
}

Book* UpdateBook(Book *b1, int size)
{
	int bid,count=0;
	printf("\nEnter book Id for Update book information:");
	scanf(" %d",&bid);
	for(int i=0;i<size;i++)
	{
		if(bid==b1[i].ID)
		{
			printf("Enter the update price : ");
			scanf("%f",&b1[i].price);
			
			printf("Enter the update rating : ");
			scanf("%f",&b1[i].rating);
			count=1;
		}
	}
	if(count==1)
		printf("Updated Successfully.");
	else
		printf("There is no such book available.");

	return b1;
}

void displaySortedBook(Book *b1, int size)
{
     Book temp;
 	   	   
    for(int i=0;i<size-1;i++)
    {
    	for(int j=0;j<size-i-1;j++)
    	{
	    	if(b1[j].price > b1[j+1].price)  // 
	    	{
	    		temp=b1[j];                    // bubble sort is used.
	    		b1[j]=b1[j+1];
	    		b1[j+1]=temp;
			}
		}
    }

    printf("\n================ SORTED BOOK LIST ================\n");
    for(int i=0;i<size;i++)
    {
     	printf("\nID: %d\nName: %s\nAuthor: %s\nCategory: %s\nPrice: %.2f\nRating: %.2f\n",
    	b1[i].ID, b1[i].name, b1[i].author, b1[i].category, b1[i].price, b1[i].rating);      
    }
}


















// extra code .

//void main()
//{
//	Book b1;
//	
//	 // Hard coded book list (6 different books)
//    Book b2[6] =
//    {
//        {1,"Ikigai","Hector Garcia","Personal Development",499.00,4.8},
//        {2,"Atomic Habits","James Clear","Self Improvement",350.00,4.9},
//        {3,"Rich Dad Poor Dad","Robert Kiyosaki","Finance",299.00,4.7},
//        {4,"The Alchemist","Paulo Coelho","Fiction",230.00,4.5},
//        {5,"Deep Work","Cal Newport","Productivity",420.00,4.6},
//        {6,"The Psychology of Money","Morgan Housel","Finance",380.00,4.8}
//    };
//
//	storeBook(&b1);
//	displayBook(&b1,b2);             // b2 is already an array (decays to pointer)
//		
//}
