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
		bool sorted = false;
	while(!sorted)//run the loop when there is atleast one swap
	{
		sorted = true; // assign sorted as truw

		for(i = 0; i<SIZE-1; i++)// first loop
		{
			for(int j = i; j<SIZE-i-1; j++)// secong loop from j = i to size-i-1
			{
				if(arr[j]>arr[j+1])
				{
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] =temp;
					sorted = false;
				}	
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
