/*
 21-11-2020 03:42
 Array Rotation using Reversal Algorithm
 
 The Algorithm followed is this:
 The reversal of an array is done using swapping 0 with n-1th elment,1st with n-2 element,...
 Reverse A to get ArB, where Ar is reverse of A.
 Reverse B to get ArBr, where Br is reverse of B.
 Reverse all to get (ArBr) r = BA.
 
 Time Complexity : O(n) 
*/

#include<stdio.h>
void print_array(int arr[],int low,int high)
{
	for(int i=low;i<high;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
void rotate_sub(int arr[],int start,int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void rotate_array(int arr[],int n,int k)
{
	k=k%n;
	rotate_sub(arr,0,k-1);
	rotate_sub(arr,k,n-1);
	rotate_sub(arr,0,n-1);
	
}
int main()
{
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	//Input
	printf("Iutput : ");
	print_array(arr,0,n);
	
	rotate_array(arr,n,k);
	
	//Output
	printf("Output : ");
	print_array(arr,0,n);	
}
