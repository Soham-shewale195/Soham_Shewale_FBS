#include<stdio.h>
//Q.4. Ask the user to enter marks. 
//Then show the result based on these rules: 
//If marks are more than 75 ? show "Distinction" 
//If marks are more than 65 ? show "First Class" 
//If marks are more than 55 ? show "Second Class" 
//If marks are 40 or more ? show "Pass Class" 
//If marks are less than 40 ? show "Fail" 
void marks();
void main()
{
	marks();
}
void marks()
{
	float marks;
	printf("Enter Marks :");
	scanf("%f",&marks);
	
	if(marks>=75 && marks<=100)
	{
		printf("Distinction");
	}
	else if(marks>=65 && marks<=74)
	{
		printf("First Class");
	}
	else if(marks>=55 && marks<=64)
	{
		printf("Second Class");
	}
	else if(marks>=40 && marks<=54)
	{
		printf("Pass Class");
	}
	else if(marks>=0 && marks<=39)
	{
		printf("Fail !!");
	}
	else
	{
		printf("Wrong input ,Try again .");
	}
}
