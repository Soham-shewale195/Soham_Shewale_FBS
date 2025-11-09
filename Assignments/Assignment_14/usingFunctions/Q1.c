#include<stdio.h>
// Structure code: store and display the fan information.
//Q.1.Fan (modelno, Bname,colour, price) .

// Structure is a user define datatype.
struct Fan    // struct declaration.
{
	int modelno;
	char Bname[20];
	char colour[20];
	float price;
	
};    // we have to use (;) at end of bracket.in struct.

	void display(struct Fan,struct Fan) ; // funct decaration.
void main()
{
	struct Fan f1,f2;
	// hard coded.
	f1.modelno=101;
	strcpy(f1.Bname,"Syska");
	strcpy(f1.colour,"red");
	f1.price=2999;
	
	printf("Enter modelno:");
	scanf(" %d",&f2.modelno);
	printf("Enter Brand name:");
	scanf(" %s",f2.Bname);
	printf("Enter colour name:");
	scanf(" %s",f2.colour);
	printf("Enter price:");
	scanf(" %f",&f2.price);
	
	display(f1,f2);  // function call

}
void display(struct Fan f1,struct Fan f2)
{
	printf("\nStudent 1 detail :\n");
	printf("Model no =%d\n",f1.modelno);
	printf("Brand Name =%s\n",f1.Bname);
	printf("colour Name =%s\n",f1.colour);
	printf("Price =%.2f\n",f1.price);
	
	printf("\nStudent 2 detail :\n");
	printf("Model no =%d\n",f2.modelno);
	printf("Brand Name =%s\n",f2.Bname);
	printf("colour Name =%s\n",f2.colour);
	printf("Price =%.2f\n",f2.price);
}
