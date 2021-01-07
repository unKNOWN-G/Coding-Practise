/*
 17:40 06-01-2021
 Dynamic Programming -> Fibonnci using Memorization or TopDown approach
 
 In the General approach we face a problem of repeated fibonanci computation of the same number. To avoid this we catche the calculated fibo and use it when needed
 Uses Memory
 Time Comlexity : O(n)		Space Complexity : O(n)
*/

#include<stdio.h>
int fibo_memorization(int n,int memo[])
{
	if(n==0)
	return 0;
	
	memo[0]=0;
	memo[1]=1;	
	
	if(memo[n]!=0)
	return memo[n];
	
	memo[n]=fibo_memorization(n-1,memo)+fibo_memorization(n-2,memo);
	return memo[n];
}
int main()
{
	int n;
	printf("Enter your index number in fibonanci Series ");
	scanf("%d",&n);
	
	int memo[n]={0};
	printf("The fibonanci series unitil %dth index is ",n);
	for(int i=1;i<n;i++)
	printf("%d, ",fibo_memorization(i,memo));
}
