/*
 22:30 27-01-2021
 Queue
 
 Queue - FIFO(First in First out)
 
 Elements basically get pushed from bottom and popped from top ( First to go in is first to come out)
 
 Function that can be used
 queue<int>q;
 q.empty() 
 q.size()
 q.push(element)
 q.pop()
*/

#include<iostream>
#include<queue>

using namespace std;

void show_queue(queue<int>que)
{
		while(!que.empty())
	{
		cout<<que.front()<<" ";
		que.pop();
	}
}

int main()
{
	queue<int>x;
	x.push(10);
	x.push(20);
	x.push(300);
	cout<<"Popped element "<<x.front()<<"\n";
	x.pop();
	
	show_queue(x);
}
 
