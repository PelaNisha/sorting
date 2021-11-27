// binary sort ascending order
#include<stdio.h>
#define SIZE 5 //defining the size

int main()
{
	int arr[SIZE];
	int i;
	printf("Enter the array of five intergers:\n");
	for(i = 0; i<SIZE; i++)
	{
		scanf("%d", &arr[i]);//input the array elements
	}
	printf("The list is:\n");
	
	for(i = 0; i<SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for(i = 0; i<SIZE-1; i++)// first loop
	{
		for(int j = 0; j<SIZE-i-1; j++)// second loop from 0 to size-i-1
		{
			if(arr[j]>arr[j+1])//if first element is greater than next
			{
				int temp = arr[j];//swap 
				arr[j] = arr[j+1];
				arr[j+1] =temp;
			}	
		}
	}
	printf("The arranged list is:\n");
	
	for(i = 0; i<SIZE; i++)
	{
		printf("%d ", arr[i]);//printing the arranged list
	}
	printf("\n");
}
