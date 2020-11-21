/*
 21-11-2020 13:42
 Merge Sort
 
 The is a Divide and Conquer type algo. Divide into sub prolems . solve them and merge them and finally finish the bigger one
 It contanis 2 parts. Dividing into parts. Megre sort and then merge the sub arrays
 This needs to happen recurssively 
 
 Time Complexity : O(nlogn)
 Worst case : O(nlogn) Best Case : O(nlogn)
 
 Mistakes done:
 1)forgot about low and highassigned values to arr from 0
 2)intilaized k with 0 but it should be l
 
 Coclusions / Inferences:
 From Next time remeber while using recurrsion we use low and high only not the 0 ,n kind of indices
 Becasue low and high change in recurssive calls
*/

#include<stdio.h>

//Functions

void merge(int arr[],int l,int m,int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
	L[i]=arr[l+i];
	for(int i=0;i<n2;i++)
	R[i]=arr[l+n1+i];
	int i=0,j=0,k=l;
	while(i<n1&&j<n2)
	{
		if(L[i]<=R[j])
			arr[k++]=L[i++];
		else
			arr[k++]=R[j++];
	}
	while(i<n1)
		arr[k++]=L[i++];
	while(j<n2)
		arr[k++]=R[j++];
}

void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
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
	
	mergeSort(arr,0,n-1);
	
	//Output
	printf("Output : ");
	print_array(arr,0,n);
}

