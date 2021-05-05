/*
 07:13 05-05-2021
 Maximum and minimum of an array using minimum number of comparisons
 
 In this question you need to return min and max both together using c/c++
 
 General Approach:
 	First things first to return  2 elements we need aa structure, to find min and max we traverse the array and compare with all elements
 Time Complexity: O(n)
 Space Complpexity  : O(1)
 
 Thoughtful Approach:
 	Compare elements >=2 at a time by linear searching only
*/

#include<iostream>

using namespace std;


struct Pair
{
	int min;
	int max;
};

Pair minmax(int arr[],Pair val,int n)
{
	int index;
	if(n%2==0)
	{
		val.max = INT_MIN;
		val.min = INT_MAX;
		index=0;
	}
	else
	{
		val.max = arr[0];
		val.min = arr[0];
		index=1;
	}
	
	for(int i=index;i<n;i+=2)
	{
		if(arr[i]>arr[i+1])
		{
			if(val.min>arr[i+1])
				val.min=arr[i+1];
			if(val.max<arr[i])
				val.max = arr[i];
		}
		else
		{
			if(val.min>arr[i])
				val.min=arr[i];
			if(val.max<arr[i+1])
				val.max = arr[i+1];
		}
	}
	return val;
	
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	Pair val;
	Pair ans=minmax(arr,val,n);
	cout<<"Min Value = "<<ans.min<<"\nMax Value = "<<ans.max<<endl;
}
