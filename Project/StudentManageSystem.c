#include <stdio.h>
#include<stdlib.h>
typedef struct Student
{
	int rollno;
	char name[20];
	int marks;
}Student;

void storeStudents(Student* studarr, int* ci)
{
    studarr[*ci].rollno = 1;
    strcpy(studarr[*ci].name, "Amit");
    studarr[*ci].marks = 85;
    (*ci)++;

    studarr[*ci].rollno = 2;
    strcpy(studarr[*ci].name, "Sneha");
    studarr[*ci].marks = 90;
    (*ci)++;

    studarr[*ci].rollno = 3;
    strcpy(studarr[*ci].name, "Rohit");
    studarr[*ci].marks = 78;
    (*ci)++;

    studarr[*ci].rollno = 4;
    strcpy(studarr[*ci].name, "Priya");
    studarr[*ci].marks = 88;
    (*ci)++;

    studarr[*ci].rollno = 5;
    strcpy(studarr[*ci].name, "Karan");
    studarr[*ci].marks = 92;
    (*ci)++;

    studarr[*ci].rollno = 6;
    strcpy(studarr[*ci].name, "Neha");
    studarr[*ci].marks = 81;
    (*ci)++;

    studarr[*ci].rollno = 7;
    strcpy(studarr[*ci].name, "Sahil");
    studarr[*ci].marks = 74;
    (*ci)++;

    studarr[*ci].rollno = 8;
    strcpy(studarr[*ci].name, "Riya");
    studarr[*ci].marks = 89;
    (*ci)++;

    studarr[*ci].rollno = 9;
    strcpy(studarr[*ci].name, "Arjun");
    studarr[*ci].marks = 95;
    (*ci)++;

    studarr[*ci].rollno = 10;
    strcpy(studarr[*ci].name, "Pooja");
    studarr[*ci].marks = 70;
    (*ci)++;
}


void display(Student* studarr,int ci)
{
	for(int i=0;i<ci;i++)
	{
		printf("Rollno =%d Name=%s Marks=%d \n",studarr[i].rollno,studarr[i].name,studarr[i].marks);
	}
}
Student* addStudent(Student* studarr,int* currindex,int* size)
{
	if(*currindex>=*size)
	{
		printf("Array full but reallocating started");
		int newsize=*size*2;
		studarr=(Student*)realloc(studarr,sizeof(Student)*newsize);
		printf("reallocation successfull");
		*size=newsize;
	}
	Student temp;
	printf("Enter rollno name and marks");
	scanf("%d%s%d",&temp.rollno,temp.name,&temp.marks);
	studarr[*currindex]=temp;
	(*currindex)++;
	
	return studarr;
}
void main() {
    int choice;
	int size=12;
//    Student studarr[size];
	Student* studarr=(Student*)malloc(sizeof(Student)*size);
    int currindex=0;
    storeStudents(studarr,&currindex);

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                studarr=addStudent(studarr,&currindex,&size);
                break;

            case 2:
                display(studarr,currindex);
                break;

            case 3:
                // Search student code here
                break;

            case 4:
                // Delete student code here
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    
}
