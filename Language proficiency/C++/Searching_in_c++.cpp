/*
 15:39 24-03-2021
 Introduction to Searching in C++
 
 Basically We have a linear search and a binay search  
 Linear search time complexity is O(n)
 Binary Search time cmpleity is O(logn)
 And if you to find an element by Binary sarch you need to sort the array first and then apply it. Sort only in Ascending order
 Synatax:
 binary_search(start address, end address, key value), key denotes the number to be searched in the array
 returns bool 1->if exist and 0->if not exist
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a[6]={1,2,1,4,5,6};
	int asize=sizeof(a)/sizeof(a[0]);
	sort(a,a+asize);
	for(int i=0;i<asize;i++)
		cout<<a[i]<<", ";
	cout<<"\n";
			
	if(binary_search(a,a+asize,4))
		cout<<"\nThe element 4 is found ";
	else
		cout<<"\nOops No found :(";
}
