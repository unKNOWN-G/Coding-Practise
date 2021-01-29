/*
 20:10 29-01-2021
 Bit manuplation
 
 Count the numbe of ones in the given number when representes in binary
 
 The menthod is simple do & with each bit and count
*/

#include<iostream>

using namespace std;

int Number_of_ones(int n)
{
	int count=0;
	while(n)
	{
		count+=n&1;
		n>>=1;
	}
	return count;
}

int main()
{
	int n;
	cout<<"Please Enter the input ";
	cin>>n;
	cout<<"\nThe Number of ones in the given number when represented in Binary Format is ";
	cout<<Number_of_ones(n)<<endl;
}
