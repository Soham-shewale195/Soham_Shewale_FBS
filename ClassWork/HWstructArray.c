#include<stdio.h>
//Using struct initialize array then store and display them.

struct student 
{
	int rollno;
	char name[20];
	float marks;
};
void storeData(struct student july[], int s1, struct student aug[], int s2, struct student sep[], int s3);
void Display(struct student july[], int s1, struct student aug[], int s2, struct student sep[], int s3);
void main()
{
	int size1,size2,size3;
	struct student july[5],aug[10],sep[5];

 	storeData(july,5,aug,10,sep,5);
 	display(july,5,aug,10,sep,5);

}
void storeData(struct student july[],int s1,struct student aug[],int s2,struct student sep[],int s3)
{
	printf("\n---Enter Student Details of July---\n");
	for(int i=0;i<s1;i++)
	{
		printf("Enter details of students:\n");
		printf("Rollno : ");
		scanf("%d",&july[i].rollno);
		printf("Name : ");
		scanf("%s",july[i].name);
		printf("Marks : ");
		scanf("%f",&july[i].marks);
	}
	
	printf("\n---Enter Student Details of Aug---\n");
	for(int i=0;i<s2;i++)
	{
		printf("Enter details of students:\n");
		printf("Rollno : ");
		scanf("%d",&aug[i].rollno);
		printf("Name : ");
		scanf("%s",aug[i].name);
		printf("Marks : ");
		scanf("%f",&aug[i].marks);
	}
	
	printf("\n---Enter Student Details of Sep---\n");
	for(int i=0;i<s3;i++)
	{
		printf("Enter details of students:\n");
		printf("Rollno : ");
		scanf("%d",&sep[i].rollno);
		printf("Name : ");
		scanf("%s",sep[i].name);
		printf("Marks : ");
		scanf("%f",&sep[i].marks);
	}
}
void display(struct student july[],int s1,struct student aug[],int s2,struct student sep[],int s3)
{
	printf("\n--- July Students ---\n");
	for(int i=0; i<s1; i++)
	{
		printf("Rollno: %d, Name: %s, Marks: %.2f\n", july[i].rollno, july[i].name, july[i].marks);
	}

	printf("\n--- August Students ---\n");
	for(int i=0; i<s2; i++)
	{
		printf("Rollno: %d, Name: %s, Marks: %.2f\n", aug[i].rollno, aug[i].name, aug[i].marks);
	}

	printf("\n--- September Students ---\n");
	for(int i=0; i<s3; i++)
	{
		printf("Rollno: %d, Name: %s, Marks: %.2f\n", sep[i].rollno, sep[i].name, sep[i].marks);
	}
	
}
