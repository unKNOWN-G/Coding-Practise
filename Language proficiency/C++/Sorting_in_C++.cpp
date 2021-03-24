/*
 15:45 24-03-2021
 Introduction to Sorting in C++
 
 In c++ theres an function called sor whoch basically does quick sort but when dos unfair partial division and crossed nlogn time limit then it shifts to heap sort, if the array is too small it just performs insrtion sort
 We use #include<algorthim> to access it
 syntax:
 sort(start adddress, end address,Function);
 basically it follows that function as the criteria, passes 2 numbers and executes it. Default is ascending sort, greater<int>() is for decending sort, if you want you can input any function name and make your own new sorting
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a[6]={1,2,-1,4,5,6};
	int asize=sizeof(a)/sizeof(a[0]);
	sort(a,a+asize);
	for(int i=0;i<asize;i++)
		cout<<a[i]<<", ";

	cout<<"\nSorting In descending order\n";
	sort(a,a+asize,greater<int>());
	for(int i=0;i<asize;i++)
		cout<<a[i]<<", ";
}
