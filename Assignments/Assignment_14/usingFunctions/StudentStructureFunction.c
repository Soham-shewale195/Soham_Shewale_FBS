#include<stdio.h>
// Structure code: store and display the fan information.
//Q.1.Student (rollNo, name, marks) .
struct Student
{
	int rollno;
	char name[20];
	float marks;
	
};    // we have to use (;) at end of bracket.in struct.
// functon declaration.
void display(struct Student,struct Student);
void main()
{
	struct Student s1,s2;
	
	s1.rollno=101;
	strcpy(s1.name,"Syska");
	s1.marks=2999;
	
	printf("Enter Rollno:");
	scanf(" %d",&s2.rollno);
	printf("Enter Name:");
	scanf(" %s",s2.name);     // "&" is not cause it contains the base aaddress of string.
	printf("Enter marks:");
	scanf(" %f",&s2.marks);
	
	display(s1,s2);  // call function
}
void display(struct Student s1,struct Student s2)
{
	printf("\nStudent 1 detail :\n");
	printf("roll no =%d\n",s1.rollno);
	printf("Name =%s\n",s1.name);
	printf("marks =%.2f\n",s1.marks);
	
	printf("\nStudent 2 detail :\n");
	printf("Roll no =%d\n",s2.rollno);
	printf("Name =%s\n",s2.name);
	printf("Marks =%.2f\n",s2.marks);
}
