/*
 12-12-2020 11:10
 Binary Search 
 
 This algorithm works in a sorted array
 Let us consider the element to be searched as x. The logic followed is we first find the mid element in array and find 
 if arr[mid]==x : return mid
 if arr[mid]>x : Search in subarray array(low,mid-1)
 if arr[mid]<x : Seach in subarray array(mid+1,high)
 Here just keep in mind that high and low arent always 0,n-1. They are only in iter 1 
 
 Time complexity: O(logn)
 Worst Case: O(logn) Best Case: O(1)
 
 If we have repetitive numbers it returns the first most encountered index from left
*/

#include<stdio.h>

int binarySearch(int arr[],int low,int high,int key)
{
	if(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]>key)
		return binarySearch(arr,low,mid-1,key);
		else if(arr[mid]<key)
		return binarySearch(arr,mid+1,high,key);
	}
	return -1;
}

void print_array(int arr[],int low,int high)
{
	for(int i=low;i<high;i++)
	printf("%d ",arr[i]);
	printf("\n");
}

int main()
{
	int n,key;
	
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter Key: ");
	scanf("%d",&key);
	
	//Input
	printf("Input : ");
	print_array(arr,0,n);

	int index=binarySearch(arr,0,n-1,key);
	
	if(index!=-1)
	printf("The number %d is found at the index %d",key,index);
	else
	printf("Oops! The number isn't in the array :(");

}
