int* reverseArray(int* ,int);
void display(int*, int);
void main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("Actual array : ");
	display(arr,10);
	
	int *rev = reverseArray(arr, 10);

    printf("Reversed array : ");
    display(rev, 10);

	
}

int* reverseArray(int* arr,int size)
{
//	int newarr[size];  // stackframe
	int* newarr=(int*)malloc(sizeof(int)*size);
				//9                    
	for(int i=size-1,j=0;i>=0;i--,j++) 
	{
		newarr[i]=arr[j];
	}
		return newarr;
}
void display(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
