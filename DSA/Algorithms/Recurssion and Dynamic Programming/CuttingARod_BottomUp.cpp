/*
 19-02-2021 23:42
 Cutting a Rod DP-43
 
 In this question we are given a rod with n size and we are given the price of selling each piece of rod of different lengths
 Find the maximum profit that can be obtained
 
 We are now implementing the previous recurssive problem in Building up approach
 We find every value and store it instead of computing each time 
*/

#include<iostream>
#include<limits.h>
using namespace std;

int cut(int n,int prices[],int price_count)
{
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<n+1;i++)
	{
		int maxvalue =-1;
		for(int j=0;j<price_count;j++)
		{
			if(j<i)
				maxvalue=max(maxvalue,prices[j]+dp[i-j-1]);
		}
		dp[i]=maxvalue;
	}
	
	return dp[n];
}

int main()
{
	int n;
	cout<<"Enter the Length of the Rod ";
	cin>>n;
	int a[n],prices_count;
	cout<<"Enter the prices count you have ";
	cin>>prices_count;
	int prices[prices_count];
	cout<<"Enter Your Prices \n";
	for(int i=0;i<prices_count;i++)
		cin>>prices[i];
	
	cout<<"The Maximum Profit that can be obtained is "<<cut(n,prices,prices_count)<<endl;
}
 
