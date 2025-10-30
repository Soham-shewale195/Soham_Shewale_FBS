//Q.7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.
// functioon type 3 ,(with para without return type)
#include<stdio.h>
float salary(float);
int main()
{
	float Bsalary;          // Bsalary=(Base Salary) 
	printf("Enter your Basic Salary : ");
	scanf("%f",&Bsalary);
	float Tsalary=salary(Bsalary);
	printf("Total Salary is : %.2f",Tsalary);
}
float salary(float Bsalary)
{
	  
	float DA,TA,HRA,Tsalary;  //Tsalary=(Total Salary)
	 // Basic Salary (basic) --> the main fixed salary.
	
	if(Bsalary<=5000)
	{
		DA= Bsalary*10/100;      //DA (Dearness Allowance) 
		TA= Bsalary* 20/100;    //TA (Travel Allowance) 
		HRA=Bsalary*25/100;  //HRA (House Rent Allowance)

		Tsalary= Bsalary+DA+TA+HRA;
		return 	Tsalary;
	}
	else
	{
		DA= Bsalary*15/100;      //DA (Dearness Allowance) 
		TA= Bsalary* 25/100;    //TA (Travel Allowance) 
		HRA=Bsalary*30/100;  //HRA (House Rent Allowance)
		
		Tsalary= Bsalary+DA+TA+HRA;
		return 	Tsalary;
	}
}
