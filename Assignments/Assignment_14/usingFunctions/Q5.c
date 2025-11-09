#include<stdio.h>
// Structure code: store and display the fan information.
//Q.5.SalesManager (id, name, salary, incentive, target) 
struct SalesManager
{
	int id;
	char name[20];
	float salary;
	float incentive;
	int target;
};    // we have to use (;) at end of bracket.in struct.
void display(struct SalesManager,struct SalesManager);
void main()
{
	struct SalesManager f1,f2;
	
	f1.id=101;
	strcpy(f1.name,"Syska");
	f1.salary=2999;
	f1.incentive=500.9;
	f1.target=10;
	
	printf("Enter ID:");
	scanf(" %d",&f2.id);
	printf("Enter Name:");
	scanf(" %s",f2.name);
	printf("Enter salary:");
	scanf(" %f",&f2.salary);
	printf("Enter Incentive:");
	scanf(" %f",&f2.incentive);
	printf("Enter Target:");
	scanf(" %d",&f2.target);
	
	display(f1,f2);

}
void display(struct SalesManager f1,struct SalesManager f2)
{
		printf("\n SalesManager one detail :\n");
	printf("ID no =%d\n",f1.id);
	printf("Name =%s\n",f1.name);
	printf("Salary =%.2f\n",f1.salary);
	printf("Incentive =%.2f\n",f1.incentive);
	printf("Target no =%d\n",f1.target);
	
	printf("\n SalesManager two detail :\n");
	printf("ID no =%d\n",f2.id);
	printf("Name =%s\n",f2.name);
	printf("Salary =%.2f\n",f2.salary);
	printf("Incentive =%.2f\n",f2.incentive);
	printf("Target no =%d\n",f2.target);
}

