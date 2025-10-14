#include<stdio.h>
//Q.7. Get the age and check if the person is: 
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above) 
int age();
void main()
{
	int a=age();
	if(a>=0 && a<12)
		printf("Child");
	else if(a>=12 && a<=19)
		printf("Teenager");
	else if(a>=20 && a<=59)
		printf("Adult");
	else if(a>=60 )
		printf("Senior");
}
int age()
{
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	
	if(age>=0 && age<12)
		return age;
	else if(age>=12 && age<=19)
		return age;
	else if(age>=20 && age<=59)
		return age;
	else if(age>=60 )
		return age;
	else 
		printf("Wrong Input .");
}
