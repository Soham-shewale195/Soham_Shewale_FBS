#include<stdio.h>
// Structure code: store and display the fan information.
//Q.4.HR (id, name, salary, commission) 
struct HR
{
	int id;
	char name[20];
	float salary;
	float commission;
};    // we have to use (;) at end of bracket.in struct.
void display(struct HR,struct HR);
void main()
{
	struct HR f1,f2;
	
	f1.id=101;
	strcpy(f1.name,"Syska");
	f1.salary=2999;
	f1.commission=500.9;
	
	printf("Enter ID:");
	scanf(" %d",&f2.id);
	printf("Enter Name:");
	scanf(" %s",f2.name);
	printf("Enter salary:");
	scanf(" %f",&f2.salary);
	printf("Enter commission:");
	scanf(" %f",&f2.commission);
	
	display(f1,f2);
	
}
void display(struct HR f1,struct HR f2)
{
	printf("\n HR 1 detail :\n");
	printf("ID no =%d\n",f1.id);
	printf("Name =%s\n",f1.name);
	printf("Salary =%.2f\n",f1.salary);
	printf("commission =%.2f\n",f1.commission);
	
	printf("\n HR 2 detail :\n");
	printf("ID no =%d\n",f2.id);
	printf("Name =%s\n",f2.name);
	printf("Salary =%.2f\n",f2.salary);
	printf("commission =%.2f\n",f2.commission);
}
