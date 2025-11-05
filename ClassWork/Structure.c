#include<stdio.h>
// Structure code: store and display the student information.

struct Student
{
	int rollno;
	char name[20];
	int marks;
};    // we have to use (;) at end of bracket.in struct.
void main()
{
	struct Student s1,s2;
	s1.rollno=101;
	strcpy(s1.name,"Soham");   // use strcpy in hard code only .
	s1.marks=89;
	
	printf("ENter rollno:");
	scanf(" %d",&s2.rollno);
	printf("ENter name:");
	scanf(" %s",s2.name);
	printf("ENter marks:");
	scanf(" %d",&s2.marks);
	
	printf("\nStudent 1 detail :\n");
	printf("ROll no =%d\n",s1.rollno);
	printf("Name =%s\n",s1.name);
	printf("Marks =%d\n",s1.marks);
	
	printf("\nStudent 2 detail :\n");
	printf("ROll no =%d\n",s2.rollno);
	printf("Name =%s\n",s2.name);
	printf("Marks =%d\n",s2.marks);
}
