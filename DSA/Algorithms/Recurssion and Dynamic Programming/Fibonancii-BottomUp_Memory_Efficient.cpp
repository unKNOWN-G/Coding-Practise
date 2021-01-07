/*
 20:03 06-01-2021
 Dynamic Programming -> Memory Efficient BottomUp
 
 In this approach we build up solution from bottom to top(i.e) the base cases and by adding one element and extendind that logic and using revious result to find next element until we find the required value
 Instead of wasting all memory we can just use 3 variables and perform rquired tasks
 Time Complexity : O(n)		Space Complexity : O(n)
*/
 
#include<stdio.h>
int fibo_BottomUp(int n)
{
 	int a=0,b=1,c=a+b;
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
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
