#include<stdio.h>
//
typedef struct Date
{
	int day,month,year;
}Date;
typedef struct Student
{
	int rollno;
	char name[20];
	int marks;
	Date dob;    // date of birth
	Date doa;// date of admission
	Date exam[5]; // array of exam dates.
}Student;
void main()
{
	Student s1;
	
	
	s1.rollno=101; // hardcoded values.
	strcpy(s1.name,"Soham");
	s1.marks=99;
	s1.dob.day=19;
	s1.dob.month=05;
	s1.dob.year=2003;
	
	s1.doa.day=04;
	s1.doa.month=12;
	s1.doa.year=2025;	
	
	//inputs from user 
	printf("Enter exam dates :");
	for(int i=0;i<5;i++)
	{
		scanf("day:%d",&s1.exam[i].day);
		scanf("month:%d",&s1.exam[i].month);
		scanf("year:%d",&s1.exam[i].year);
	}
	
// how to print nested Struct.
	printf("%d  %s  %d \n",s1.rollno,s1.name,s1.marks);
	printf("DOB= %d-%d-%d \n",s1.dob.day,s1.dob.month,s1.dob.year);
	printf("DOA= %d-%d-%d \n",s1.doa.day,s1.doa.month,s1.doa.year);
	
	printf("-----------------Exam Dates---------------\n");
	for(int i=0;i<5;i++)
	{
		printf("%d-%d-%d \n",s1.exam[i].day,s1.exam[i].month,s1.exam[i].year);
	}
	
}

