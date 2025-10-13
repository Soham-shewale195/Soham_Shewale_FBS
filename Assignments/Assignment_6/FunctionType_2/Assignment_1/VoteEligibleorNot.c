#include<stdio.h>
// Find voter is eligible or not based on age.
int vote();
int main()
{

	int v=vote();
	if(v==0)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not-Eligible to vote");
	}

}
int vote()
{
	int age,count=0;
	printf("Enter age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		count=0;
		return count;
	}
	else
	{
		count++;
		return count;
	}
}
