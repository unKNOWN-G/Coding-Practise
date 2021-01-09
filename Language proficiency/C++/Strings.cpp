/*
 09:00 08-01-2021
 String Functions
 
 Topics Mentioned:
 1) String declaration
 2) .front(), .back(), .begin(), .length(), .at(index), .clear()
 3) can be indexed as array too. Example : str[3]
 4) Slicing. Example str.substr(7,3) --- Return 3 harecters from str starting at index 7
 5) Appending . Example st1=str1+str2  or str1.append(str2,start_index,num_charecters)
 6) String Comparision str1==str2
 7) str1.find(str2) ---Returns index when str2 is found in str1. If not found return -1
 8) Erase paticular part ? str.erase(start_index,num_charecers)
 9) Replace particular part ? str.replace(start_index,num_charecters,string)
*/

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	string str1("first String");
		
	string str1_1(str1,0,5); // Means that str2 stored 5 charecters from 0 index in str1
	string str2("Second String");
	
	cout<<"String 1 = "<<str1<<endl<<"String 2 = "<<str2<<endl<<"Length = "<<str1.length()<<endl<<"Element at index 3 = "<<str1.at(3)<<endl;
	cout<<"Sliced part [1:5] of string is "<<str1.substr(1,4)<<endl;
	str1+=str2;
	cout<<"Appending String 2 to String 1 = "<<str1<<endl;
	str1.erase(12);
	cout<<"Erasing  Some part of String 1(Erasing appended string 2) = "<<str1<<endl;
	cout<<"Replacing substring ="<<str1.replace(5,3,"oooooooooooooooooooooooooooooooo");
}
