/*
 02:53 10-01-2021
 Longest Common SubSequence(LCS)
 
 The question is about finding the longest common subsequence in the iven 2 strings as input
 
 Let implement BottomUp approach in this code file
 
 let the 2 common sequences be X[0..m-1] and Y[0..n-1]
 if(X[m-1]==Y[n-1])
 	return 1+LCS(X,Y,m-1,n-1)						// If the last letter of the 2 strings are equal 1 is added to the LCS length and then the string that need to be compared are X[0..m-2] and Y[0..n-1]
 else 
 	return max(LCS(X,Y,m-1,n),LCS(X,Y,m,n-1))		// If the last letter isnt equal then X we find one letter less string from (X[0..m-2] and Y[0..n-1])  and (X[0..m-1] and Y[0..n-2])

 Base Case if either X=0 or Y=0 return 0
 
 Converting that above approach to Bottom Up:
 1) Create array of size LCS[m+1][n+1]
 2) Create Base cases => If LCS[0][i]=0 and LCS[i][0]=0(Since there is no common substring in case of i lengthed substring and 0 length string)
 3) Start Building up
 		if(X[i-1]==Y[j-1])
 			LCS[i][j]=1+LCS[i-1][j-1]
 		else
 			LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1])
*/

#include<stdio.h>
#include<string.h>

int max(int a,int b)
{
	return a>b?a:b;
}

int LCS_BottomUp(char *a,char *b,int m,int n)
{
	int LCS[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	LCS[i][0]=0;
	
	for(int i=0;i<=n;i++)
	LCS[0][i]=0;
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i-1]==b[j-1])
				LCS[i][j]=1+LCS[i-1][j-1];
			else 
				LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
		}
	}
	
	return LCS[m][n];
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
	printf("The length of Longest common Substring between %s and %s is %d",a,b,LCS_BottomUp(a,b,m,n));
}  
 
