/*
 21-11-2020 22:14
 linear Search 
 
 This algorithm is quite simple.In order to search for an element we iterate over the whole array comparing each element with element that we want
 If found we return its index else i am returning -1
 
 Time complexity : O(n)
 Worst Case : O(n) Best Case : O(1)
 
 If we have repitative numbers the it returns the first most encountered index from left
*/

#include<stdio.h>

int linearSearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
		if(arr[i]==key)
			return i;
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

	int index=linearSearch(arr,n,key);
	
	if(index!=-1)
	printf("The number %d is found at the index %d",key,index);
	else
	printf("Oops! The number isn't in the array :(");

}
