#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Book Management System Requirements:
------------------------------------
Features to Implement:
1. Add Book (ID, Name, Author, Category, Price, Rating)
2. Display All Books
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
void storeBook(Book *b1,int size);
void displayBook(Book *b1,int size);

void main()
{
	int size;
	Book *b1; // b1 is pointer cause we store malloc address in it.
	
	printf("How many books you want to add: ");
	scanf("%d",&size);
	b1=malloc(sizeof(Book)*size);    // book is struct (user define datatype).


	storeBook(b1,size);
	displayBook(b1,size);             // b2 is already an array (decays to pointer)
		
}

void storeBook(Book *b1,int size)
{
	printf("Enter Book Details:\n");
	for(int i=0;i<size;i++)
	{
	
		printf("\nEnter Book Id: ");
		scanf("%d",&b1[i].ID);           // use (->) instead (.) when using pointer.
		printf("Enter Book Name: ");
		scanf(" %[^\n]s",b1[i].name);           // "%[^\n]s" =Read characters until you reach a newline, including spaces."
		printf("Enter Book Author : ");
		scanf(" %[^\n]s",b1[i].author);
		printf("Enter Book Category : ");
		scanf(" %[^\n]s",b1[i].category);
		printf("Enter Book Price : ");
		scanf("%f",&b1[i].price);
		printf("Enter Book Rating(0 to 5) :");
		scanf("%f",&b1[i].rating);
	}
}
//display all books

void displayBook(Book *b1, int size)
{
	// for hard coded values
	printf("--------------------------------------------------------------------------------------\n");
	printf("Display books: \n");
	for(int i=0;i< size;i++)
	{
		printf("\n ID : %d\n Name : %s\n Author: %s\n Category: %s\n Price: %.2f rs\n Rating: %.2f\n",
		b1[i].ID,b1[i].name,b1[i].author,b1[i].category,b1[i].price,b1[i].rating);
		//here we are not using (->) cause its hard coded values.
	}
	printf("--------------------------------------------------------------------------------------\n");

free(b1);
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
