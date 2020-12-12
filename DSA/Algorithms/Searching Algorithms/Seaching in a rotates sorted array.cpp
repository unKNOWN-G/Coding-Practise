/*
 12-12-2020 09:59 
 Search an element in a sorted and rotated array
 
 The question is we will be given a sorted array which is rotated k times one unit step at a time in clock wise direction our task is to find the number in that array in O(logn)
 The approach that i am thinking to follow is apply binary search in both sub arrays finding the point pivot(a[i]>a[i+1]) which acts as an array sepearator
 Moreover to keep this process of finding pivot we can find that element using binary search ad have a time complexity O(logn)
 I will trying to implement each code in functions to make it easier to use in other places and to learn using functions better
 
 Time Complexity: O(logn)
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

int binarySearch(int arr[],int low,int high,int key)
{
	if(low<high)
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

int find_key(int a[],int low,int n,int key)
{
	int pivot=find_pivot(a,0,n);
	if(pivot!=-1)
	{
		if(key==a[n-1])
		return n-1;
		else if(key>a[n-1])
		return binarySearch(a,0,pivot,key);
		else if(key<a[n-1])
		return binarySearch(a,pivot+1,n-1,key);
	}
	return binarySearch(a,0,n-1,key);
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
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Key : ");
	scanf("%d",&key);
	
	int index=find_key(a,0,n,key);
	
	print_array(a,0,n);
	printf("The element is present at index %d",index);
	
}
