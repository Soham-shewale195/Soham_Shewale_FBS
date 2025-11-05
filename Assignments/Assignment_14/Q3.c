#include<stdio.h>
// Structure code: store and display the fan information.
//Q.3.Admin (id, name, salary, allowance) 
struct Admin
{
	int id;
	char name[20];
	float salary;
	float allow;
};    // we have to use (;) at end of bracket.in struct.
void main()
{
	struct Admin f1,f2;
	
	f1.id=101;
	strcpy(f1.name,"Syska");
	f1.salary=2999;
	f1.allow=500.9;
	
	printf("Enter ID:");
	scanf(" %d",&f2.id);
	printf("Enter Name:");
	scanf(" %s",f2.name);
	printf("Enter salary:");
	scanf(" %f",&f2.salary);
	printf("Enter allowance:");
	scanf(" %f",&f2.allow);
	
	printf("\n Admin 1 detail :\n");
	printf("ID no =%d\n",f1.id);
	printf("Name =%s\n",f1.name);
	printf("Salary =%.2f\n",f1.salary);
	printf("Allowance =%.2f\n",f1.salary);
	
	printf("\n Admin 2 detail :\n");
	printf("ID no =%d\n",f2.id);
	printf("Name =%s\n",f2.name);
	printf("Salary =%.2f\n",f2.salary);
	printf("Allowance =%.2f\n",f2.allow);
}
