#include<stdio.h>
//print pattern 
//1
//3 5
//7 11 13
//17 19 23 27

// code is not completed.
void main()
{
	int i,j,k=1;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{ 
			printf(" %d",k++);
				++k;
			if(k==8 && k==9 && k==10)
			{
				printf("");	
			}
			
		}
		printf("\n");
	}
}
