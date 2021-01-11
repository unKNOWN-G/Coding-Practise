/*
 03:05 12-01-2021
 Kadenes Algorithm
 
 The Question is we will be given an array of both positive and negative numbers and we will be asked to find the continous sub array whose sum is maximum.
 The Largest Contiguous Subarray with max sum
 
 The approach is basic the thing is we add previous to current element if it does some positive impact(like sum until previous number + present number > Present Number
 Time Complexity :O(n)
*/

#include<stdio.h>

int start;
int end;

int kadenes_algorithm(int a[],int n)
{
	int dp[n];
	int max=a[0];
	dp[0]=a[0];
	start=0;
	end=0;
	
	for(int i=1;i<n;i++)
	{
		if(dp[i-1]+a[i]>=a[i])
		{
			dp[i]=dp[i-1]+a[i];
		}
		else
		{
			dp[i]=a[i];
			start=i;
		}
		
		if(dp[i]>max)
		{
			max=dp[i];
			end=i;
		}
	}	
	return max;
}

int main()
{
	int n;
	printf("Enter n ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Array \n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("\nThe largest continuos Sub Array Sum = %d and the numbers in the sub array are ",kadenes_algorithm(a,n));
	for(int i=start;i<=end;i++)
	printf("%d, ",a[i]);
}
