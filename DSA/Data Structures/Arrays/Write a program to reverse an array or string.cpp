/*
 07:05 05-05-2021
 Write a program to reverse an array or string
 
 Question is simple you will be given an array and you need to reverse it
 
 My approach is swapping first and last element until they cross each other
*/

#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int start = 0;
	int end = n-1;
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}
