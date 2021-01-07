/*
 21:31 06-01-2021
 Dynamic Programming -> Triple Step BottomUp
 
 A child is running up a stair case with n steps . He can hop either 1 or 2 or 3 steps at a time. Find number of ways he cn reach top
 
 My approach is
 Lets develop a array used to store values from bottom to top. Like from initial case we build up the array and then we find the last time
*/

#include<stdio.h>
int TripleStep_Memorization(int n,int memo[])
{
	memo[0]=1;
	memo[1]=1;
	memo[2]=2;
	memo[3]=4;
	
	for(int i=4;i<=n;i++)
	memo[i]=memo[i-1]+memo[i-2]+memo[i-3];	
	return memo[n];
}
int main()
{
	int n;
	printf("Enter Number of Stairs ");
	scanf("%d",&n);
	int memo[n]={0};
	printf("The number of ways in which he can go to the top of stairs is %d",TripleStep_Memorization(n,memo));
}
 
