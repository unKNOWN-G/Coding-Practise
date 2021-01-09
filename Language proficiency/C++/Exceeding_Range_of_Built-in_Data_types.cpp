/*
 07:58 08-01-2021
 What happens when we exceed range of built in data types in c++?
 
 Answer : Loops back
 Consider char a whose range is -128 to +127
 when you give 128 to it it loops back and stores -128
 
 A beautiful implementationw which shows above tstatement is shown below

*/
#include <iostream> 
  
using namespace std; 
  
int main() 
{ 
    for (char a = 0; a <= 225; a++) 
        cout << a; 
    return 0; 
} 
