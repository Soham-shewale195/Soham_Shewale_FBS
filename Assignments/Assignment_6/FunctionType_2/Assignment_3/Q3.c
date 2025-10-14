#include<stdio.h>
//Q.3 Sum of numbers in given range. 
//Find sum of numbers from start to end. 
//Input: start = 1, end = 5 
//Output: 15
int sum();
void main()
{
	int s=sum();
	printf("Sum :%d",s);
}
int sum()
{
	int s,e,sum=0;
	printf("Enter the numbers for starting and ending point :");
	scanf("%d%d",&s,&e);
	int i;
	for(i=s;i<=e;i++)
	{
		sum=sum+i;
	
	}
		return sum;
//	int i=1;
//	while(i<=5)
//	{
//		sum= sum+i;
//		i++;
//	}

}
