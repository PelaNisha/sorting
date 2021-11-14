// quick sort

#include<stdio.h>

int partition(int a[10], int l, int r)
{
	int x = l;
	int y = r;
	int p = a[l], temp;
	while(x<y)
	{
		while(a[x]<=p)
		{
			x++;
		}while(a[y]>p)
		{
			y--;
		}
		if(x<y)
		{
			temp = a[x];
			a[x] =a[y];
			a[y] = temp;
		}
	}
	a[l] = a[y];
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
