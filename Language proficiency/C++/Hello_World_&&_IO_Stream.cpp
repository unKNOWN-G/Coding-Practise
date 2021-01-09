/*
 07:07 08-01-2021
 C++ Beginning
 Hello World
 
 This is a program written in c++ to print Hello World
 #include<iostream>                  ----- Directive that tell compiler to include the standard file iostream which contains all declarations,io functions
 cin                                 ----- Standard Input Stream , The Extraction operator >> is used along with cin for reading the inputs
 cout                                ----- Standard Output Stream, The Instertion operator << is used along with the object cout for displaying output
 cerr								 ----- The C++ cerr is the standard error stream which is used to output the errors. This is also an instance of the iostream class. As cerr in C++ is un-buffered so it is used when one needs to display the error message immediately. It does not have any buffer to store the error message and display later.
 clog								 ----- This is also an instance of iostream class and used to display errors but unlike cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully filled

 Header Files Available in C++ for io operations are
 1) iostream		--- Standard Input Output Stream. Header contains objects like cin, cout, cerr etc
 2) iomanip			--- Input Output Manuplators Methods declared here are used for mauplting steams/ like setw,setprecision
 3) fstream 		--- Describes maily about file stream. Used to read and write data from files
*/

#include<iostream>
using namespace std;

int main()
{
	char name[100];
	int age;
	cout<<"Hello World\nEnter Your Name _";
	cin>>name;
	cout<<"Great! How old are you?";
	cin>>age;
	cout<<"\nHey "<<name<<" You are "<<age<<" years Old, How's life?\n\n";
	cerr<<"cerr Has no Buffer, Error is directly diplayed\n";
	clog<<"clog Has Buffer , Error is inserted into buffer and then displayed\n";
//	cout<<"Errors can be of various types one type is inserting wrong data in variabls delared with different data type";
	return 0;
}
