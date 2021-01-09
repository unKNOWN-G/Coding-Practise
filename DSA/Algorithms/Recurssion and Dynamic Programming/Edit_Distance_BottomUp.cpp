/*
 03:14 10-01-2021
 Edit Distance
 
 2 Strings will be given find minimum number of operations needed to convert string 2 to string 1
 
 The approach that we will follow is DP
 
 1) Construct a dp[m+1][n+1] array
 2) Start from i=0,j=0 here i,j denote length of string 1,string 2
 		so if i=0 that implies length of string 1=0 so number of changes =j
 		   if j=0 that implies length of string 2=0 so number of changes =i
 3) If the chars are equal
 		a[i-1]==b[j-1] => dp[i][j]=dp[i-1][j-1]   // Just nothing to change copy previous value
 4) If the chars are not equal
 		dp[i][j]=1+min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]) // Here notice we are adding +1 already because we will be preforming any one opearation
 						Insertion  Deletion  Replacement 
*/

#include<stdio.h>
#include<string.h>

int min(int a,int b)
{
	return a<b?a:b;
}

int Edit_Distance(char *a,char *b,int m,int n)
{
	int dp[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
			dp[i][j]= j;
			
			else if(j==0)
			dp[i][j]= i;
			
			else if(a[i-1]==b[j-1])
			dp[i][j]=dp[i-1][j-1];
			
			else
			dp[i][j]=1+min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);
		}
	}
	return dp[m][n];
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
	printf("The Minimum number of changes(Insertion/ Removal/ Replace) to convert %s to %s is %d",a,b,Edit_Distance(a,b,m,n));
}  
 
