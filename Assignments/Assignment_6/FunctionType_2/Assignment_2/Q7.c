#include<stdio.h>
//Q.7. Get the age and check if the person is: 
//Child (age < 12),Teenager (12�19),Adult (20�59),Senior (60 and above) 
void age();
void main()
{
	age();
}
void age()
{
		int age;
	printf("Enter the age :");
	scanf("%d",&age);
	
	if(age>=0 && age<12)
		printf("Child");
	else if(age>=12 && age<=19)
		printf("Teenager");
	else if(age>=20 && age<=59)
		printf("Adult");
	else if(age>=60 )
		printf("Senior");
	else 
		printf("Wrong Input .");
}
