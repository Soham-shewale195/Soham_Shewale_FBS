#include<stdio.h>
// 
void main()
{
	int i,j,k ,n=4;
	for(i=1;i<=4;i++)
	{
		for	(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			if(i==3&&k==2 || i==4&&k==2 ||i==4&&k==3 )
			printf("  ");
			else
			printf(" *");
		}
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for	(k=0;k<=i;k++)
		{
			printf(" ");
		}
		for(j=3;j>=i;j--)
		{
			if(i==1 &&j==2  )
			printf("  ");
			else
			printf(" *");
		}
		printf("\n");
	}	

}
