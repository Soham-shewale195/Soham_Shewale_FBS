#include<stdio.h>
#include<string.h>
// Structure code: store and display the fan information.
//Q.3.Admin (id, name, salary, allowance) 
struct Admin   // structure declartion
{
	int id;
	char name[20];
	float salary;
	float allow;
};    // we have to use (;) at end of bracket.in struct.
void display(struct Admin,struct Admin);
void store(struct Admin *f1,struct Admin *f2);
void main()
{
	struct Admin f1,f2;

	store(&f1,&f2);
	display(f1,f2);

}
//? Correct way (use -> operator for pointer)
//Change all f1. and f2. to f1-> and f2->:
void store(struct Admin *f1, struct Admin *f2)
{
    f1->id = 101;  //You are using the dot operator (.), which is used for normal struct variables, not pointers.
    strcpy(f1->name, "suresh");
    f1->salary = 99999;
    f1->allow = 5000.9;
	
    printf("Enter ID: ");
    scanf("%d", &f2->id);
    printf("Enter Name: ");
    scanf("%s", f2->name);
    printf("Enter Salary: ");
    scanf("%f", &f2->salary);
    printf("Enter Allowance: ");
    scanf("%f", &f2->allow);
}
void display(struct Admin f1,struct Admin f2)
{
	printf("\n Admin 1 detail :\n");
	printf("ID no =%d\n",f1.id);
	printf("Name =%s\n",f1.name);
	printf("Salary =%.2f\n",f1.salary);
	printf("Allowance =%.2f\n",f1.allow);
	
	printf("\n Admin 2 detail :\n");
	printf("ID no =%d\n",f2.id);
	printf("Name =%s\n",f2.name);
	printf("Salary =%.2f\n",f2.salary);
	printf("Allowance =%.2f\n",f2.allow);
}
