/*
 20:53 29-01-2021
 Covert a String Binary to Integer
 
 Use stoi() function in string library of C++
 integer number = stoi(bin_string,0,base) --This works only in C++=11. Not in mine 
 
 If not working find the size of string and manke the integer
*/

#include<iostream>
#include<string>
#include<stdlib.h>
#include<cassert>
using namespace std;

int binary_converter(string x)
{
	int num=0;
	for(int i=0;i<x.size();i++)
	{
		num<<=1;
		num+=int(x[i]-'0');
	}
	return num;
}

int main()
{
	string binary_string;
	cout<<"Please Enter the Binary Number ";
	cin>>binary_string;
	cout<<"The Interger Number is \n"<<binary_string<<" : "<<binary_converter(binary_string)<<endl;
 } 
