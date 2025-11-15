#include<stdio.h>
//Using struct initialize array then store and display them.

typedef struct student 
{
	int rollno;
	char name[20];
	float marks;
}student;
void storeData(student* ,int);
void display(student* , int);
int searchStudent(student*,int,int);
void main()
{
	struct student july[2],aug[3],sep[4];
	int no,choice;

	while(1)
	{
		printf("1.Add the student \n");
		printf("2.Display Student\n");
		printf("3.Search Student\n");
		printf("4.Exit \n");
		printf("choose a option :");
		scanf("%d",&choice);
		
		if(choice==1) // storedata
		{
//			storeData(july,2);
		 	storeData(aug,3);
//		 	storeData(sep,4);
		}
		else if(choice==2)//display data
		{
//			display(july,2);
		 	display(aug,3);
//		 	display(sep,4);
		}
		else if(choice==3)// search data
		{
			printf("Enter roll no you want to search:");
			scanf("%d",&no);
			int res=searchStudent(aug,3,no);  // use arr which you are using to store data.
			if(res!=-1)
				printf("%s found ",aug[res].name);// same here.
			else
				printf("%d not found\n\n",no);
		}
		else if(choice==4) // exit loop
		{
			printf("Exiting program...\n");
			break; // exit the loop.
		}
		else
		{
			printf("Wrong Input.");
		}	
	}
}
void storeData(student* sarr,int s1)
{
	printf("\n---Enter Student Details ---\n");
	for(int i=0;i<s1;i++)
	{
		printf("Enter details of students:\n");
		printf("Rollno : ");
		scanf("%d",&sarr[i].rollno);
		printf("Name : ");
		scanf("%s",sarr[i].name);
		printf("Marks : ");
		scanf("%f",&sarr[i].marks);
	}
	
}
void display(student* sarr,int s1)
{
	printf("\n---Students Informatoin ---\n");
	for(int i=0; i<s1; i++)
	{
	printf("Rollno: %d, Name: %s, Marks: %.2f\n\n", 
	sarr[i].rollno, sarr[i].name, sarr[i].marks);
	}
}
int searchStudent(student* sarr,int s1,int no)
{
	
	for(int i=0; i<s1; i++)
	{
		if(no==sarr[i].rollno)
		 return i;
	}
	return -1;
	
}
