/*
 19-11-2020 18:02
 Selection Sort

 In this we first find the smallest one and swap it with first element in the array and the repeeat the same procedure for the array  a[2:n](python format lol)
 Just like the name means Select and sort

 Time Complexity : O(n2)
 Worst Case : O(n2) Best Case : O(n2)
*/

#include<stdio.h>

//Functions
//Swap Function
void swap_values(int *a,int *b)
{
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

void selectionSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int index =i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[index]>arr[j])
			{
				index=j;
			}
		}
		swap_values(&arr[index],&arr[i]);
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
	printf("Iutput : ");
	print_array(arr,0,n);
	
	selectionSort(arr,n);
	
	//Output
	printf("Output : ");
	print_array(arr,0,n);
}

