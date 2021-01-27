/*
 22:09 27-01-2021
 Lists
 
 Lists are a Sequence Containers that allow for non continous memory allocation
 Same Data Type should be there though
 Everything else is same as a vector
 
 A list in general terma is a double linked list but for implementing a singly linked list we use forward list
 Btw in list you cant actually access elements like array so you can push, pop 
 Inorder to access an element at ith index you need to traverse
*/

#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
	list <int> l1;
	int n;
	cout<<"Enter Number of Numbers you are giving as input ";
	cin>>n;
	for(int i=0;i<n;i++)
		l1.push_back(i);
	cout<<"Given Input Numbers are ";
	list <int >:: iterator x;
	for(x=l1.begin();x!=l1.end();x++)
	{
		cout<<*x<<" ";
	}
		
	
}
