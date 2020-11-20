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
		int index =i;
		for(int j=i+1;j<n;j++)
		{
			if(a[index]>a[j])
			{
				index=j;
			}
		}
		swap_values(&a[index],&a[i]);
	}
	
	
	printf("Output :");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}

