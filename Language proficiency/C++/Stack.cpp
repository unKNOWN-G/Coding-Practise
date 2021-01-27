/*
 22:43 27-01-2021
 Stack
 
 Stack - LIFO
 Elements basically pushed from top and popped from top(Analogous to adding elements into a container)
 stack<int>q;
 q.push(element)
 q.pop()
 q.top();
*/

#include<iostream>
#include<stack>

using namespace std;

void showstack(stack<int>s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

int main()
{
	int n;
	cout<<"Enter Number of Numbers you are giving as input ";
	cin>>n;
	stack<int> x;
	for(int i=0;i<n;i++)
	{
		int y;
		cin>>y;
		x.push(y);
	}
	
	cout<<"The Given Stack Input is : ";
	showstack(x);
}
