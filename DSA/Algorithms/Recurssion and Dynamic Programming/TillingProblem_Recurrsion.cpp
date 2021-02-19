/*
 19-02-2021 22:25 
 The Tilling Problem
 
 In this problem we are given an 2xn space where we are asked to fill it with 1x2 blocks. Finf the numbe rof ways in filling it
 
 In this problem we can either place a block in 1x2 way or 2x1 
 if we place them in 1x2 way we are bound to keep another block of 1x2 above it and we are left with n-2x2 grid
 if we place the block n 2x1 way we are left with 2xn-1 grid
 
 This is more like a like a recursssive problem which can be again improved by turing into Dynamic programmed (Bottom up approach (I preffered this . There are many other ways like top down approach, matrix method))
 
 f(n) = f(n-2)+f(n-1)
 Base case 
 f(0)=0
 f(1)=1
 
 This is just more like a Fibnanci Problem
*/
#include<iostream>
using namespace std;

int till(int n)
{
	if(n<=1)
	return n;
	
	else
	return till(n-2)+till(n-1);
}
int main()
{
	int n;
	cout<<"Please Enter the number of coloumns in the grid ";
	cin>>n;
	
	
	cout<<"The number of ways in filling the grid is " <<till(n)<<".\n";
}
