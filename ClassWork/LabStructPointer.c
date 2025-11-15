#include<stdio.h>
//Structure using pointer( in structure we use [->] arrow operator for 
// pointer inted of dot(.)
typedef struct student // created strcuture 
{
	int rollno;
	char name[20];
	int marks;
}student;

void storedata(student*);// func declaration
void display(student*);
void main()
{
	student s1; // student is structured datatype.
	
	storedata(&s1); // we pass values by address.
	display(&s1);  // we pass values by address.
}
void storedata(student* stud)
{
	printf("Enter rollno:");
	scanf("%d",&stud->rollno);  // we use (->) insted(.)
	printf("name:");
	scanf("%s",stud->name);
	printf("marks:");
	scanf("%d",&stud->marks);
	
}
void display(student* stud)
{
	printf("----------------Student Info-------------\n");
	printf("rollno: %d\n",stud->rollno);
	printf(" name: %s\n",stud->name);
	printf(" marks: %d\n",stud->marks);
}
