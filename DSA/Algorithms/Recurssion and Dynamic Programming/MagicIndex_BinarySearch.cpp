/*
 00:04 07-01-2021
 Dynamic Programming -> Magic Index
 
 Magic index is an index in an array where A[i]=i
 Given a sorted array of intergers with distinct elements find the Magic index of the array
 
 The approach i am thinking is of Binary Search instead of Finding the number we will be finding A[i]=i
 How to do Binary Search here?
 
 if(mid==a[i])
 return mid;
 else if(mid<a[i])
 return binarySearch(a[i],high);
else if(mid>a[i])
return binarySearch(mid+1,high);
return -1;

*/
#include<stdio.h>
int MagicIndex(int a[],int low,int high)
{
	if(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==mid)
		return mid;
		else if(a[mid]>mid)
		return MagicIndex(a,low,mid-1);
		else if(a[mid]<mid)
		return MagicIndex(a,mid+1,high);
	}
	return -1;
}
int main()
{
	int n;
	printf("Enter Number of Numbers ");
	scanf("%d",&n);
	printf("Enter Array \n");
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The Magic Index is at Index %d in the array",MagicIndex(a,0,n));
}
