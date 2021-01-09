/*
 02:23 10-01-2021
 Longest Common SubSequence(LCS)
 
 The question is about finding the longest common subsequence in the iven 2 strings as input
 
 Let implement recurrsion method in this code file
 
 let the 2 common sequences be X[0..m-1] and Y[0..n-1]
 if(X[m-1]==Y[n-1])
 	return 1+LCS(X,Y,m-1,n-1)						// If the last letter of the 2 strings are equal 1 is added to the LCS length and then the string that need to be compared are X[0..m-2] and Y[0..n-1]
 else 
 	return max(LCS(X,Y,m-1,n),LCS(X,Y,m,n-1))		// If the last letter isnt equal then X we find one letter less string from (X[0..m-2] and Y[0..n-1])  and (X[0..m-1] and Y[0..n-2])

 Base Case if either X=0 or Y=0 return 0
*/

#include<stdio.h>
#include<string.h>

int max(int a,int b)
{
	return a>b?a:b;
}

int LCS_Recurrsion(char *a,char *b,int m,int n)
{
	if(m==0||n==0)
	return 0;
	
	else if(a[m-1]==b[n-1])
	return 1+LCS(a,b,m-1,n-1);
	
	else
	return max(LCS(a,b,m-1,n),LCS(a,b,m,n-1));
}

int main()
{
	char a[100],b[100];
	printf("Enter String 1 ");
	gets(a);
	printf("Enter String 2 ");
	gets(b);
	
	int m=strlen(a);
	int n=strlen(b);
	printf("The length of Longest common Substring between %s and %s is %d",a,b,LCS_Recurrsion(a,b,m,n));
}  
 
