/*

 19:41 28-12-2020
 Bubble Sort
 Copying the inputs though
*/

/*
void bubbleSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			swap(&arr[j],&arr[i]);
		}
	}
}
*/

/*


/*
 19:47 28-12-2020
 Insertion Sort
 Logic is simple swap until you find its spot(stop swapping if previous number is greater than pesent key)
*/

/*
void insertionSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int key=arr[i];
		int j=i;
		while(key<arr[j-1]&&j>0)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=key;
	}
}
*/

/*
 19:54 28-12-2020
 Selection Sort
 find smallest swap it with 0th element in total array. Now find smallest in the array arr[1:n] and swap with 0th element of the array arr[1:n] and so on
*/

/*
void selectionSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int largest =arr[i];
		int index=i;
		for(int j=i;j<n;j++)
		{
			if(largest>arr[j])
			{
				largest=arr[j];
				index=j;
			}
		}
		swap(&arr[i],&arr[index]);
	}
}
*/

/*
 20:02 28-12-2020
 Quick Sort
 Find pivot first
 then apply same partion and place pivots t thoe respective portions to the formed arrays recurrsively
*/

/*
int partition(int arr[],int low,int high,int n)
{
	int pivot=arr[high];
	int index=low-1;
	for(int i=low;i<high;i++)
	{
		if(arr[i]<pivot)
		{
			index++;
			swap(&arr[index],&arr[i]);
		}
	}
	swap(&arr[index+1],&arr[high]);
	return index+1;
}

void quickSort(int arr[],int low,int high,int n)
{
	if(low<high)
	{
			int partition_index=partition(arr,low,high,n);
			quickSort(arr,partition_index+1,high,n);
			quickSort(arr,low,partition_index-1, n);
	}
}
*/

/*
 20:21 28-12-2020
 Count Sort
 Hashing is the main key
*/

/*
void countSort(int arr[],int n)
{
	int count[INT_MAX]={0};
	for(int i=0;i<n;i++)
	count[arr[i]]++;
	for(int i=0;i<INT_MAX;i++)
	{
		while(count[i]>0)
		{
			printf("%d ",i);
			count[i]--;
		}
	}
	
}
*/

/*
 20:47 28-12-2020
 Comb Sort
 Improved Bubble Sort with a different gap other than 1
*/

/*
int gap_generator(int gap)
{
	gap=(gap*10)/13;
	if(gap==9 || gap==10)
		gap=11;
	if(gap<1)
		gap=1;
	return gap;
}

void combSort(int arr[],int n)
{
	int gap=n;
	swapped=0;
	while(1)
	{
	
	int gap=gap_generator(gap);
	for(int i=0;i<n-gap;i++)
	{
		if(arr[i]>arr[i+gap])
		{
			swap(&arr[i],&arr[i+gap]);
			swapped=1;
		}
	}
	if(swapped==1&&gap==1)
	break;
	}
	
}
*/

/*
 21:41 28-12-2020
 Merge Sort
*/

/*

void merge(int arr[],int l,int h,int m)
{
	int n1=m-l+1;
	int n2=h-m;
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
	{
		arr[k++]=L[i++];
	}
	while(j<n2)
	{
		arr[k++]=R[j++];
	}
}
void mergesort(int arr[],int l,int h)
{
	if(l<h)
	{
		int m=l+(h-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,h);
		merge(arr,l,h,m);
	}
}
*/

#include<stdio.h>
//#define INT_MAX 100000
int swapped;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
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
	
	mergesort(arr,0,n-1);
	
	//Output
	printf("Output : ");
	print_array(arr,0,n);	
}

