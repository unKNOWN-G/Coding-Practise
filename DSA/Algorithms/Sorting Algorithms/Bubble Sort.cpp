
/*
 19-11-2020 18:58
 Bubble Sort
 
 Algorithm is so simple.start from a[0:n] Just swap adjacent numbers if one is left higher than the right number.
 Now Repeat the procedure from a[1:n] and so on
 
 Time Complexity: O(n2)
 Worst Case : o(n2) Best Case : O(n)
*/

#include<stdio.h>

// Functions

void swap_values(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubbleSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			swap_values(&arr[j],&arr[j+1]);
		}
	}
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
	
	bubbleSort(arr,n);
	
	//Output
	printf("Output : ");
	print_array(arr,0,n);	
}
 
