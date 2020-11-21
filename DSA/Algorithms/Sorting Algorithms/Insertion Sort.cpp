/* 
 19-11-2020 17:39
 Insertion Sort

 Algortihm is simple start from the first index take that number and compare with previous number were you find a lesser number swap it there
 Just like finding its spot and inserting

 Time Complexity : O(n2)
 Worst Case : O(n2)  Best Case : O(n)
*/

#include<stdio.h>

// Functions

void print_array(int arr[],int low,int high)
{
	for(int i=low;i<high;i++)
	printf("%d ",arr[i]);
	printf("\n");
}

void insertionSort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int key=arr[i];
		while(arr[j]>key && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
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
	
	insertionSort(arr,n);
	
	//Output
	printf("Output : ");
	print_array(arr,0,n);
	
}


