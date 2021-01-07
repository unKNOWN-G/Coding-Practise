/*
 21:31 06-01-2021
 Dynamic Programming -> Triple Step Memorization(Top-Down)
 
 A child is running up a stair case with n steps . He can hop either 1 or 2 or 3 steps at a time. Find number of ways he cn reach top
 
 My approach is
 Lets develop a array used to memorize the values in an array when we find it
*/

#include<stdio.h>
int TripleStep_Memorization(int n,int memo[])
{
	if(n==0)
	return 1;
	else if(n==1)
	return 1;
	else if(n==2)
	return 2;
	else if(n==3)
	return 4;
	
	memo[n]=TripleStep_Memorization(n-1,memo)+TripleStep_Memorization(n-2,memo)+TripleStep_Memorization(n-3,memo);
	
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
 
