// quick sort

/************ algorithm for quick sort***********/
// 1. chose a pivot
// 2. set a left pointer and right pointer
// 3. compare those pointer with th pivot
// 4. if lelement<pivot, increment left pointer and if relement>pivot, decrement the right pointer
// 6. when left>=right, swap the pivot with either left or right pointer
// 7. repeat till the entire list is sorted


#include<stdio.h>

int partition(int a[10], int l, int r)
{
	int x = l; // put value of left pointer into x
	int y = r;// put value of right pointer into x
	int p = a[l], temp;// pivot is the leftmost item
	while(x<y)// while left pointer>right
	{
		while(a[x]<=p)// if element is less than pivot, increment the x++;
		{
			x++;
		}while(a[y]>p)// element greter than pivot , decrement the y;
		{
			y--;
		}
		if(x<y)// if x<y, swap the elements
		{
			temp = a[x];
			a[x] =a[y];
			a[y] = temp;
		}
	}
	a[l] = a[y]; // swap the pointer with the left pointer
	a[y] = p;
	return y;
}

void quicksort(int a[10], int l, int r)
{
	int p;
	if(l<r)
	{
		p = partition(a, l, r);
		quicksort(a, l, p-1);
		quicksort(a, p+1, r);
	}
}

int main()
{
	int a[100], n, i, l, r;
	printf("enter number of elements\n");
	scanf("%d", &n);
	printf("Enter the %d elements\n", n);
	l = 0; 
	r = n-1;
	for(i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Element before sorting\n");
	for(i = 0; i<n; i++)
	{
		printf("%d\n", a[i]);
	}
	quicksort(a, l, r);
	printf("Element after sorting\n");
	for(i = 0; i<n; i++)
	{
		printf("%d\n", a[i]);
	}
	
}
