#include<stdio.h>
// Structure code: store and display the fan information.
//Q.10.Product (id, name, quantity, price) 
struct Product
{
	int id;
	char name[20];
	int quantity;
	float price;
};    // we have to use (;) at end of bracket.in struct.
void main()
{
	struct Product f1,f2;
	
	f1.id=101;
	strcpy(f1.name,"sarvesh");
	f1.quantity=9;
	f1.price=500.9;
	
	printf("Enter ID:");
	scanf(" %d",&f2.id);
	printf("Enter Name:");
	scanf(" %s",f2.name);
	printf("Enter Quantity:");
	scanf(" %d",&f2.quantity);
	printf("Enter Price:");
	scanf(" %f",&f2.price);
	
	printf("\n Product 1 detail :\n");
	printf("ID no =%d\n",f1.id);
	printf("Name =%s\n",f1.name);
	printf("Quantity =%d\n",f1.quantity);
	printf("Price =%.2f rs\n",f1.price);
	
	printf("\n Product 2 detail :\n");
	printf("ID no =%d\n",f2.id);
	printf("Name =%s\n",f2.name);
	printf("Quantity =%d\n",f2.quantity);
	printf("Price =%.2f rs\n",f2.price);
}
