/*
 20:54
 27-01-2021
 
 Pair 
 
 The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 
 The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
*/

#include<iostream>
#include<utility>
using namespace std;

int main()
{
	pair<int ,char>pair_data;
	cout<<"Enter The two values to be stored in the pair Data type.\nBtw the first ones an int and the second ones a char data type"<<endl;
	
	cin>>pair_data.first;
	cin>>pair_data.second;
	cout<<"The Given Input Values are "<<pair_data.first<<" and "<<pair_data.second<<endl;
	
}
