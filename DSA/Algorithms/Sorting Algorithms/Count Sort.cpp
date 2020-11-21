/*
 21-11-2020 16:22
 Counting Sort
 
 Algorithm is based on hashing. The simple logic we follow over here is we get to know the range of nkbers that we are using and create an count array of that size and increment the count each time when it encounters that number in original array
 Finally print all numbers from th begininng
 
 Time Complexity : O(n) ; Space Complexity : O(Range)
 Worst case :O(n) Best Case : O(n) 

 This is my version of implementation(NOT GFG's)
*/

#include<stdio.h>
#define INT_MAX 10000
int count[INT_MAX]={0};

void countSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	count[arr[i]]++;
	
	printf("Output : ");
	for(int i=0;i<INT_MAX;i++)
	{
		while(count[i]>0)
		{
			printf("%d ",i);
			count[i]--;
		}
	}
	printf("\n");
}
void print_array(int arr[],int low,int high)
{
	for(int i=low;i<high;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	//Input
	printf("Input : ");
	print_array(arr,0,n);
	
	countSort(arr,n);

}
