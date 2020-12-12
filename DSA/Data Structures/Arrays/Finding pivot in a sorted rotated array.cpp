/*
 12-12-2020 11:51
 Find pivot in a rotated sorted array
 
 The question is quite simple find the number of time a sorted array is rotated clockwise at 1unit per step in O(logn)
 The logic that i am thinking of following is
 if low>high => we have the pivot in the array. Find mid and perform 
 	if mid==low : return mid
 	else if arr[mid]<low: go for find_pivot in array(low,mid)
 	else : go for find_pivot in array(mid,high)
 	
 Time Complexity = O(logn)
*/

#include<stdio.h>

int find_pivot(int arr[],int low,int high)
{
	if(arr[low]>arr[high])
	{
		int mid=low+(high-low)/2;
		if(mid==low)
		return mid;
		else if(arr[mid]<arr[low])
		return find_pivot(arr,low,mid);
		else 
		return find_pivot(arr,mid,high);
	}
	return -1;
}


int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int pivot=find_pivot(arr,0,n-1);
	
	printf("The pivot is at index = %d",pivot);
}
