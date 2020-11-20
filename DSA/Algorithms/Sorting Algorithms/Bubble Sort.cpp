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
// Swap function

void swap_values(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Iutput :");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	
	// algo
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			swap_values(&a[j],&a[j+1]);
		}
	}
	
	
	printf("Output :");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
 
