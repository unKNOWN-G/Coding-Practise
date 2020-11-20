/*
 21-11-2020 02:49
 Program for array rotation
 
 In this Question an array of size n will be given and a number 'k' will be given.We need to rotate the array d places Anti Clockwise
 
 Method-1 : Noob thing. Just create another arr2 of size k and store first k elements of arr1 there and then replace 0th element with k+1th elemnt in arr1 at the end paste the values stored in arr2
 Time Complexity: O(n) ; Space Complexity : O(d)
 
 Method-2 :	Rotate one by one k times
 Time Complexity: O(n*d) ; Space Complexity : O(1)
 
 Implementing Method-2
 */
 
#include<stdio.h>
void print_array(int arr[],int low,int high)
{
	for(int i=low;i<high;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
void rotate_arr_once(int arr[],int n)
{
	int key=arr[0];
	int j=0;
	while(j<n-1)
	{
		arr[j]=arr[j+1];
		j++;
	}
	arr[n-1]=key;
}
void rotate_array(int arr[],int n,int k)
{
	for(int i=0;i<k;i++)
	rotate_arr_once(arr,n);
	
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
 
 
