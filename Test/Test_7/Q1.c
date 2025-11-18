#include<stdio.h>
//Do it using functions
//Q.1.Write a program to accept array and exchange the data of Xth position to Yth position. ( using function )
//Eg. Arr [] = { 11, 23, 30, 4, 21, 43, 50 }
//Xth position = 3
//Yth position = 5
//o/p : 11 23 21 4 30 45 50

void swapelement(int arr[] ,int size);
void main()
{
	int size;
	printf("Enter the Size of array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the values in array: ");
	for (int i=0;i<size;i++)
	{
			scanf(" %d",&arr[i]);
	}
	swapelement	(arr, size);
}
void swapelement(int arr[],int size)
{
	int temp;
	int x,y;
	printf("Enter position of 1 elemet: ");
	scanf("%d",&x);
	printf("Enter position of 2 elemet: ");
	scanf("%d",&y);
	x--;              // cause i strats from 0;
	y--;
	
	if(x<0||y<0 || x>=size || y>=size)
	{
		printf("wrong input");
		return;
	}
	// swap ligic.
		temp=arr[x];
		arr[x]=arr[y];
		arr[y]=temp;

	//display
	printf("\nArray after swap : ");
	for (int i=0;i<size;i++)
	{
			printf("  %d",arr[i]);
	}
}
