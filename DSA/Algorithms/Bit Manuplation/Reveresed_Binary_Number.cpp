/*
 20:17 29-01-2021
 Reverse the Bits of a Number 
 
 The queston is simple . You will be given a Number then you are asked to represent the number in binary format and then reverse it and find the number that comes at that time
 The method i am following is by making a new number n1
 1) find last bit of n
 2) add it to n1
 3) left shift n1 and right shift n
 4) There one good advantage with count here . When n becomes 0 we can directly shift the elements left initial count- final count times
*/

#include<iostream>

using namespace std;

int Reversed_Binary(int x)
{
	int res=0;
	int count = sizeof(x)*8-1;
	
	while(x)
	{
		res+=x&1;
		x>>=1;
		res<<=1;
		count--;
	}
	res<<=count;
	return res;
}

int main()
{
	int n;
	cout<<"Please Enter the input ";
	cin>>n;
	cout<<"\nThe Reveresed Binary Number is ";
	cout<<Reversed_Binary(n)<<endl;
}
 
