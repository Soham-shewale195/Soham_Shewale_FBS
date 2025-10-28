#include<stdio.h>
// store and display Array usinng function type 3(with para ,w/o return).
void storeArray(int*,int);  // func decartion
void displayArray(int*,int);
void main()
{
	int arr[5];
//	int brr[7];
//	int crr[10];
	printf("Enter 5 Elements :");
	storeArray(arr,5);             // func call
	printf("Elements in Array :");
	displayArray(arr,5);            // func call
}
void storeArray(int* ptr,int size)     // func decartion,we are using int pointer to store address.
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]); // storing values of arr address at index (i).
	}
}

void displayArray(int* ptr,int size)     // func defination ,we are using int pointer
{

	for(int i=0;i<size;i++)
	{
		printf(" %d",ptr[i]);  // printing values of arr address at index (i).
	}
}
