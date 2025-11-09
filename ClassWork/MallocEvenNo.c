#include<stdio.h>
#include<stdlib.h> //when we use malloc.
//using malloc find even num in array.

void storeData(int *brr,int size)
{
	printf("Enter %d integers :\n",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&brr[i]);
	}
}
void display(int *crr,int size)
{
	printf("Even numbers:");
	for(int i=0;i<size;i++)
	{
		if(crr[i]%2==0)
		printf(" %d",crr[i]);
	}
}
void main()
{
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	
	int*arr=(int*)malloc(sizeof(int)*size);
	
	storeData(arr,size);
	display(arr,size);
	
	free(arr);  //  Always free memory at the end

}

