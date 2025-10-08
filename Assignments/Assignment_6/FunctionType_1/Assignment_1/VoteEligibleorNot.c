#include<stdio.h>
// Find voter is eligible or not based on age.
void vote();
int main()
{

 vote();

}
void vote()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not-Eligible to vote");
	}
}
