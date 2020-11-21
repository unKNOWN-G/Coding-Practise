/*
 21-11-2020 17:05
 Comb Sort
 
 The algorithm is a simple modification of Bubble Sort. The modification is instead of swapping adjacent elements we swap elements with a gap and we reduce the gap progresttivelt by a factor of 1.3 untile gap=1 and elements are swapped
 
 Time Complexity : O(n2)
 Worst Case : O(n2)  Best Case : O(n2)
 
 The swapped!=0 Condition should also be there because if it isnt there there might case where we have a unsorted array with length 2 and gap becomes 1 we cant just exit
*/

#include<stdio.h>
int swapped;
void swap_values(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

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
	while(1)
	{
		gap=gap_generator(gap);
		int swapped = 0;
		for(int i=0;i<n-gap;i++)
		{
			if(arr[i]>arr[gap+i])
				{
					swap_values(&arr[i],&arr[gap+i]);
					swapped=1;
				}
		}
		if(!swapped&&gap==1)
			break;
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

	swapped=0;	
	combSort(arr,n);
	
	//Output
	printf("Output : ");
	print_array(arr,0,n);
}
 
