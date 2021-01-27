/*
 20:59 27-01-2021
 Vectors
 
 Vectors  = Similar to Dynami arrays(resizability), Continous Storage (Iteratable), Same Data type
 Insertion and deletetion at middle is linear in time
 Insertion at end takes differential time and Deletetion takes  constant time

 Function that i can use with vectors(Returns Pointer)
 begin() – Returns an iterator pointing to the first element in the vector
 end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
 rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
 rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
 cbegin() – Returns a constant iterator pointing to the first element in the vector.
 cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
 crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
 crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
 
 push_back(element)  
 pop_back()
 
 Returns Int
 at(index)
 size()
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v1;

	for(int x=1;x<5;x++)
		v1.push_back(x*5);
	v1.push_back(6);
	for (int i=0;i<v1.size();i++)
	cout<<v1[i]<<endl;
	cout<<v1.size();

}
