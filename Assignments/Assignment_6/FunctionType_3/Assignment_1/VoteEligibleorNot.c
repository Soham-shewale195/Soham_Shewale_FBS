#include<stdio.h>
// Find voter is eligible or not based on age.
void vote(int);
int main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
 vote(age);

}
void vote(int age)
{

	if(age>=18)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not-Eligible to vote");
	}
}
