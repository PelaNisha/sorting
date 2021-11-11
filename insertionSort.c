// insertion sort

#include<stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE];
	int i;
	printf("Enter the array of five intergers:\n");
	for(i = 0; i<SIZE; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("The list is:\n");
	
	for(i = 0; i<SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("The arranged list is:\n");
	
	for(i = 1; i<=SIZE; i++)
	{
		int temp = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]= arr[j];
			j = j-1;
		}
		arr[j+1] = temp;
	}
	for(i = 0; i<SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
