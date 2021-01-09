/*
 02:21 10-01-2021
 Rotate Right
 
 Given an array of integers rotate the array by k units and print the resulting array
 
 The process that i am gonna implement is quit simple
 1) if k>n we need make k<n and we know that if k=n+p then k=p since rotating n times in same direction results in same array considering array length as n. Therefore we use k=k%n
 2) Print elements from n-kth index to n-1 and then print from 0 to k-1th index
*/

#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter Array Length ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Array ");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter K ");
	scanf("%d",&k);
	
	printf("\nOutput Array ");
	k=k%n;
	
	for(int i=n-k;i<n;i++)
	printf("%d ",a[i]);
	for(int i=0;i<n-k;i++)
	printf("%d ",a[i]);
	
	
}
