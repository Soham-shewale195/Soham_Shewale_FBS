#include<stdio.h>
//
void reallocatememory(int*,int);
void main()
{
	int* ptr=malloc(sizeof (int)*5);
	printf("eneter elements in aray:");
	for(int i=0;i<5;i++)
		scanf(" %d",&ptr[i]);
		
	for(int i=0;i<5;i++)
		printf(" %d",ptr[i]);
		
//	int* ptr2=calloc(5,sizeof(int));
//	for(int i=0;i<5;i++)
//		printf(" \n%d",ptr2[i]);
printf("\nAddress in ptr before realloc %u:",ptr);
	ptr=realloc(ptr,10);
printf("\nAddress in ptr after realloc %u:",ptr);
	
	for(int i=5;i<10;i++)
	scanf("%d",&ptr[i]);
	
	for(int i=5;i<10;i++)
	printf("%d",ptr[i]);
	
}
//void reallocatememory(int* ptr,int n)
//{
//	int* newptr=malloc(sizeof(int)*n);
//	int size=sizeof(ptr)/4;
//	for (int i=0;i<size;i++)
//		newptr[i]=ptr[i];
//	free(ptr);
//	return newptr;
//}
