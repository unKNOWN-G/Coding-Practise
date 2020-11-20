/* 
 19-11-2020 17:39
 Insertion Sort

 Algortihm is simple start from the first index take that number and compare with previous number were you find a lesser number swap it there
 Just like finding its spot and inserting

 Time Complexity : O(n2)
 Worst Case : O(n2)  Best Case : O(n)
*/

#include<stdio.h>
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
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int key=a[i];
		while(a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	
	
	printf("Output :");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}

