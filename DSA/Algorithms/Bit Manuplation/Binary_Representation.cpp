/*
 20:36 29-01-2021
 Binary Representation of a Number
 
 You are given a number and convert into binary and then print the output
 Simple Procedure Use Bitwse &1 in a loop util the number becomes 0
 Better to store the O/P in a string
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string binary_representation(int x)
{
	string a ="";
	while(x)
	{
		string p=(x&1==1)?"1":"0";
		a=p+a;
		x>>=1;
	}
	return a;
}

int main()
{
	int n;
	cout<<"Please Enter the Number n ";
	cin>>n;
	cout<<"The Binary Representation is \n"<<n<<" : "<<binary_representation(n)<<endl;
	
}
