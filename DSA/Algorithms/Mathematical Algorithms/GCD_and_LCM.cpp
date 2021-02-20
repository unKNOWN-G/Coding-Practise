/*
 14:54 20-02-2021
 LCM and GCD of 2 numbers
 
 You are given 2 numbers find their LCM and GCD
 
 LCM * GCD = n1*n2
 To find GCD of the numbers code it in the normal way
*/

#include<iostream>
using namespace std;

int GCD(int n1,int n2)
{
	if(n2==0)
	return n1;
	
	return GCD(n2,n1%n2);
}

float LCM(int n1,int n2)
{
	return float((n1*n2))/GCD(n1,n2);
}
int main()
{
	int n1,n2;
	cout<<"Enter Number 1 :";
	cin>>n1;
	cout<<"Enter Number 2 :";
	cin>>n2;
	cout<<"The GCD of "<<n1<<" and "<<n2<<" is "<<GCD(n1,n2)<<endl;
	cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<LCM(n1,n2);
}
