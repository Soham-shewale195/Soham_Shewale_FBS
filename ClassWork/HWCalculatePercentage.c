#include<stdio.h>
//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.

int main()
{
	float math,science,english,marathi,hindi,total,percentage;
	
	printf("Enter marks of subjects out of 100 :\n");
	printf("Math : ");
	scanf("%f",&math);
	printf("Science : ");
	scanf("%f",&science);
	printf("english : ");
	scanf("%f",&english);
	printf("Marathi : ");
	scanf("%f",&marathi);
	printf("Hindi : ");
	scanf("%f",&hindi);
	
	total= math+science+english+marathi+hindi;
	
	percentage= (total/500)*100;
	
	printf("\nTotal marks of all subjects : %.2f \n",total); // %.2f take 2 decimal at least
	printf("Percentage :%.2f \n",percentage);
	
}
//OUTPUT :
//Enter marks of subjects out of 100 :
//Math : 89
//Science : 78
//english : 78
//Marathi : 67
//Hindi : 89

//Total marks of all subjects : 401.00
//Percentage :80.20










