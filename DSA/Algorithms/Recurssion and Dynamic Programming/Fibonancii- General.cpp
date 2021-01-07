/*
 17:23 06-01-2021
 Dynamic Programming -> General Fibonnci
 
 In this we use recurssion approach to compute the fibonancii series
 Time Complexity ~O(2^n)  [Exponential Time complexity]
*/
#include<stdio.h>
int fibo_general(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n;
	printf("Enter your index number in fibonanci Series ");
	scanf("%d",&n);
	
	printf("The fibonanci series unitil %dth index is ",n);
	for(int i=1;i<n;i++)
	printf("%d, ",fibo(i));
}
 
