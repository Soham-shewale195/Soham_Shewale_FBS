#include<stdio.h>
// Find voter is eligible or not based on age.
int vote(int);
int main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
 	int i=vote(age);
 
 	if(i==1)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not-Eligible to vote");
	}

}
int vote(int age)
{

	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
