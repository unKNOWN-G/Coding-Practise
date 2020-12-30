/*
 01:23 29-12-2020
 Linear Search
*/

/*
int linearSearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i;
	}
	return -1;
}
*/

/*
 01:25 29-12-2020
 Binary Search
*/

#include<stdio.h>

void print_array(int arr[],int low,int high)
{
	for(int i=low;i<high;i++)
	printf("%d ",arr[i]);
	printf("\n");
}

int binarySearch(int arr[],int key,int low,int high)
{
	if(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]<key)
		binarySearch(arr,key,mid+1,high);
		else if(arr[mid]>key)
		return binarySearch(arr,key,low,mid-1);		
	}
	return -1;
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

	int index=binarySearch(arr,key,0,n-1);
	
	if(index!=-1)
	printf("The number %d is found at the index %d",key,index);
	else
	printf("Oops! The number isn't in the array :(");

}
