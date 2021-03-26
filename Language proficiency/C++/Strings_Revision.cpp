/*
 20:30 26-03-2021
 Strings in c++
 
 Basic functions that can be applied on strings are being discussed
 string a,b;
 cin>>b;               - Over here cin just takes the string and stores in b
 getline(cin,a);	   - In sentences like "I am unKNOWN" if you use on cin it scans only until "I"(Until it encountrs a space)
 a.size();			   - Return the length of the string
 a[3]				   - The letters are indexed adn can be accessed and modified too
 

*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	getline (cin,str);
	cout<<"The size of the string is "<<str.size()<<endl;
	cout<<"The substring of the input string is "<<str[0,5]<<endl;
	
}
