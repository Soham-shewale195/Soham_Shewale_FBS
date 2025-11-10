#include<stdio.h>
//Using struct initialize array then store and display them.

struct student 
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	struct student sarr[3];
	for(int i=0;i<3;i++)
	{
		printf("Enter details of students:\n");
//		scanf(" %d %s %f",&sarr[i].rollno,sarr[i].name,&sarr[i].marks);
		printf("Rollno : ");
		scanf("%d",&sarr[i].rollno);
		printf("Name : ");
		scanf("%s",sarr[i].name);
		printf("Marks : ");
		scanf("%f",&sarr[i].marks);
	}

printf("\n--- Student Details ---\n");
	for(int i=0;i<3;i++)
	{
		printf("Student %d info :\n",i+1); // i+1  = starting from 0 th index thats why use +1.  
		printf("Rollno : %d \n",sarr[i].rollno);
		printf("Name : %s \n",sarr[i].name);
		printf("Marks : %.2f \n",sarr[i].marks);
		printf("\n");
	}
	
}
