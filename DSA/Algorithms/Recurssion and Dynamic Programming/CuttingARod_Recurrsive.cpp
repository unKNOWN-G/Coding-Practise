/*
 19-02-2021 23:42
 Cutting a Rod DP-43
 
 In this question we are given a rod with n size and we are given the price of selling each piece of rod of different lengths
 Find the maximum profit that can be obtained
 
 First thing that we need to realize here is 
 Either we can cut it into rest + particular length or not cut with that length and the maximum of these two will be taken as maximum value
 And that length can be any of those given array of prices at every cut. So at every cut we will be having a loop and the max value of doing that cut with that element and not doing that cut with that element will be taken
*/

#include<iostream>
#include<limits.h>
using namespace std;

int cut(int n,int prices[],int price_count)
{
	if(n<=0)
	return 0;
	
	int maxvalue=INT_MIN;
	for(int i=0;i<price_count;i++)
	{
		if(i<n)
		maxvalue= max(cut(n-i-1,prices,price_count)+prices[i],maxvalue);
	}
	return maxvalue;
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
 
