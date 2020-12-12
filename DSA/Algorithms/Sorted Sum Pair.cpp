/*
 13:56 12-12-2020
 Given an array A[] and a number x, check for pair in A[] with sum as x
 
 The question is quite straight forward a array will be given to you find the pair of numbers whose sum consistutes to a given key
 For easy understanding of logic lets assume its a sorted array. In the other case you just need ot sort the array before hand
 The logic followed is pretty. Firstly fix 2 pointers left,right one at end and another at beginning
 if left<right    
 	if key>arr[left]+arr[right] : increment left
 	if key<arr[left]+arr[right] : decrement right
 else
 	return -1
 	
 Time complexity: O(n)
*/

#include<stdio.h>

void print_array(int arr[],int low,int high)
{
	for(int i=low;i<high;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
void find_sum_pair(int arr[],int left,int right,int key)
{
	int ping=0;
	while(left<right)
	{
		if(key==arr[left]+arr[right])
			{ 
				ping=1;
				break;
			}
		else if(key>arr[left]+arr[right])
			left=(left+1)%n;
		else
			right=(n+right-1)%n;	
	}
	if(ping)
	printf("The numbers %d,%d present at indexes %d,%d give the sum %d ",arr[left],arr[right],left,right,key);
	else
	printf("Sorry not found :(");
	return;
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
	
	find_sum_pair(arr,0,n-1,key);
	
}
