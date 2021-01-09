/*
 10:10 09-10-2021
 Bell Numbers(Number of Ways to Partition a Set)
 
 Question is simple you will be given a set and you are asked to find number of ways you can partition the set
 All the elements are Unique
 
 A set of N number can be divided with partitions from 0,1,2,3...n-1
 let number of partittions be K. Therefore K=0,1,2,3,...n-1
 So 2 paramenters n,k
 
 We are following Bottom Up Approach in this implementation
 
 First Lets find Bell(n,k) i.e Number of Partitions of N elements into K sets
 We follow Bootom Up Approach
 
 Base Conditions
 Bell[i][0]=0 // O partitions
 Bell[0][i]=0 // O elements
 
 Bell[i][i]=1 // Since they can be divided only in 1 way as number of elements= number of partitions
 
 Bell[n][k]
 
 when an nth element is approaching it has 2 options 
 either to join the previous partitions with k choices =k*F(n-1,k)
 or to create new partitions 						   =F(n-1,k-1)
 
 Total ways=	F(n,K)= K*F(n-1,K)+F(n-1,K-1);
 
 This should be constructed in a Building way because we need previous elements too
 
 
 After we find Bell[n][k] we need to find 
 Sum= Bell[n][0]+Bell[n][1]+....Bell[n][k]
 and that is the total number of partitions For 
 
*/

#include<stdio.h>

int Bell_Numbers_partition(int n,int k)
{
	int bell[n+1][n+1];
  	for (int i = 0; i <= n; i++)
    	 bell[i][0] = 0;
  	for (int i = 0; i <= k; i++)
    	 bell[0][i] = 0;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<=k;j++)
		{
			if(i==j || j==1)
			bell[i][j]=1;
			else
			bell[i][j]=j*bell[i-1][j]+bell[i-1][j-1];
		}
	}
	return bell[n][k];
}

int Bell_Numbers(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	sum+=Bell_Numbers_partition(n,i);
	return sum;
}
int main()
{
	int n,k;
	scanf("%d",&n);
	printf("%d",Bell_Numbers(n));
}
