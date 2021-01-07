/*
 19:58 06-01-2021
 Dynamic Programming -> Bottom-up Approach
 
 In this approach we build up solution from bottom to top(i.e) the base cases and by adding one element and extendind that logic and using revious result to find next element until we find the required value
 Uses Memory
 Time Complexity : O(n)		Space Complexity : O(n)
*/
 
#include<stdio.h>
int fibo_BottomUp(int n)
{
	int memo[n];
	memo[0]=0;
	memo[1]=1;
	for(int i=2;i<=n;i++)
	memo[i]=memo[i-1]+memo[i-2];
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
	printf("%d, ",fibo_BottomUp(i));
}
