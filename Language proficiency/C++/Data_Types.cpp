/*
 07:34 08-01-2021
 c++ Data Types
 
 Primary data types(Built in data types)		----- int, char, boolean, float, Double float, void, Wide Charecter
 Derived data Tyoes(Derived from primitive)		----- Function, Array,Pointer, Reference
 Abstract data Types(Defined by User)			----- Class, Structure,Union, Enumeration, Typedef Defined Data Type
 
 Declaration Formats		Data(Bytes) 			 Range
 
 	int 						4				-2147483648 to 2147483647
	char						1				-128 to 127 or 0 to 255
	bool						1				true or false
	float						4				
	double float				8
	void(Value less entity)		
	wchar_t						2 or 4
	
 Datatype Modifiers in C++ : Datatype modifiers are used with the built-in data types to modify the length of data that a particular data type can hold
 
 signed			--- int, char, long(prefix)
 unsigned		--- int, char, short(prefix)
 Long			--- int, double
 Short			--- int
 
 Example : unsigned long int
 
 sizeof(datatype) can be used to find the bytes occupied

*/
#include<iostream>
using namespace std;

int main()
{
	cout<<sizeof(int);
}
