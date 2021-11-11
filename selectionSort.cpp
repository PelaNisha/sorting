// selection sort

//assume the fist element to be the smallest(sorted) and other as unsorted 
//compare all other element with the smallest element; if smaller swap with first element else do nothing

#include<stdio.h>
#define SIZE 5
int swap(int a, int b)
{
	int temp = a;
	a= b;
	b=temp;
}

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
	for(i = 0;i<SIZE;i++)
	{
		int least = arr[i];
		int p = i;
		for(int j = i+1; j<SIZE;j++)
		{
			if(arr[j]<least)
			{
				least = arr[j];
				p=j;
			}
		}
		if(i!=p)
		{
			int temp = arr[i];
			arr[i]= arr[p];
			arr[p] = temp;
		}
	}

	for(i = 0; i<SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
