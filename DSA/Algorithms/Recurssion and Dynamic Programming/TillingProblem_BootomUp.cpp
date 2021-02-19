/*
 19-02-2021 22:25 
 The Tilling Problem
 
 In this problem we are given an 2xn space where we are asked to fill it with 1x2 blocks. Finf the numbe rof ways in filling it
 
 In this problem we can either place a block in 1x2 way or 2x1 
 if we place them in 1x2 way we are bound to keep another block of 1x2 above it and we are left with n-2x2 grid
 if we place the block n 2x1 way we are left with 2xn-1 grid
 
 Now we are going to solve this in A Bottom up approach fasion
 
 Base case:
 f(0)=0
 f(1)=1
 
 General case:
 f(n)=f(n-1)+f(n-2)
*/
#include<iostream>
using namespace std;

int till(int n)
{
	if(n>2)
	{
		int dp[n+1];
		dp[0]=0;
		dp[1]=1;
		for(int i=2;i<n+1;i++)
			dp[i]=dp[i-1]+dp[i-2];
		return dp[n];
	}
	return n;
}
int main()
{
	int n;
	cout<<"Please Enter the number of coloumns in the grid ";
	cin>>n;
	
	
	cout<<"The number of ways in filling the grid is " <<till(n)<<".\n";
}
