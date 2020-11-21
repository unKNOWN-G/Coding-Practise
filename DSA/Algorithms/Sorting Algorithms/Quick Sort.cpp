/*
 20-11-2020  17:47
 Quick Sort 
 
 The Algorithm is Simple. It involves 2steps.Firstly Partition by arranging smaller elements to left of pivot and then repitatively do this for subarrays
 
 Time Complexity : O(nlogn) ---(Base 2)
 Worst Case: O(n2) BestCase : O(nlogn)
*/

// Just By Chnaging the arr[j]<pivot to arr[j]> pivot we get descending order

#include<stdio.h>

// Functions

void swap_values(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int j=low-1;
	for(int i=low;i<high;i++)
	{
		if(arr[i]<pivot)
		{
			j++;
			swap_values(&arr[i],&arr[j]);
		}
	}
	swap_values(&arr[j+1],&arr[high]);
	return j+1;
}
void quickSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pivot=partition(arr,low,high);
		quickSort(arr,low,pivot-1);
		quickSort(arr,pivot+1,high);
	}
}

void print_array(int arr[],int low,int high)
{
	for(int i=low;i<high;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	//Input
	printf("Input : ");
	print_array(arr,0,n);
	
	quickSort(arr,0,n-1);
	
	//Output
	printf("Output : ");
	print_array(arr,0,n);	
}





















 
