/*
 08:26 08-01-2021
 Descion Making
 
 if condition syntax
 ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 if(condition) 
 {
    // Statements to execute if
    // condition is true
 }
 
 if else condition syntax
 ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 if (condition)
 {
     // Executes this block if
     // condition is true
 }
 else
 {
     // Executes this block if
     // condition is false
 }
 
 Nested if
 ¯¯¯¯¯¯¯¯¯¯
 if (condition1) 
 {
    // Executes when condition1 is true
    if (condition2) 
    {
       // Executes when condition2 is true
    }
 }
 
 if-else
 ¯¯¯¯¯¯¯
 if (condition)
     statement;
 else if (condition)
     statement;
 .
 .
 else
     statement;
     
 
 
 Jump Statements
 ===============
 
 break;				----- Breaks the loop
 continue;			----- Skips Iteration
 goto;				----- Goes to the label
*/

#include<iostream>
using namespace std;

int main()
{
	int i=0;
	label:
		cout<<i++<<" ";
		if(i<10)
		goto label;
}
 
