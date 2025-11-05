#include<stdio.h>
// Structure code: store and display the fan information.
//Q.2.Employee (id, name, salary)
struct Employee
{
	int id;
	char name[20];
	float salary;
};    // we have to use (;) at end of bracket.in struct.
void main()
{
	struct Employee f1,f2;
	
	f1.id=101;
	strcpy(f1.name,"Syska");
	f1.salary=2999;
	
	printf("Enter ID:");
	scanf(" %d",&f2.id);
	printf("Enter Name:");
	scanf(" %s",f2.name);
	printf("Enter salary:");
	scanf(" %f",&f2.salary);
	
	printf("\n Employee 1 detail :\n");
	printf("ID no =%d\n",f1.id);
	printf("Name =%s\n",f1.name);
	printf("Salary =%.2f\n",f1.salary);
	
	printf("\n Employee 2 detail :\n");
	printf("ID no =%d\n",f2.id);
	printf("Name =%s\n",f2.name);
	printf("Salary =%.2f\n",f2.salary);
}
