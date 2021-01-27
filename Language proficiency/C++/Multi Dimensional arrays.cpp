/*
 20:49 27-01-2021
 MultiDimensional Array
 
 Same as taking input for a normal 2d array in c
 You can either initialize before hand or give them during run time
 a[2][3] = {{1,2,3},{4,5,6}};
 
 For taking themdurin grun time use loops
*/

#include<iostream>
using namespace std;

int main()
{
	int a[3][2];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter Number";
			cin>> a[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Entered Number" <<a[i][j]<<endl;
		}
	}
}
