/*
 20:14 06-01-2021
 Dynamic Programming -> Fibonanci using Formula
 
 The result of nth fibonancii number Fn = {[((5^0.5) + 1)/2] ^ n} / (5^0.5) 
 Time Complexity : O(1)		Space Complexity : O(1)
*/

#include<stdio.h>
#include<math.h>
int fibo_formula(int n)
{
	return round(pow((pow(5,0.5)+1)/2,n)/(pow(5,0.5)));
}

int main()
{
	int n;
	printf("Enter your index number in fibonanci Series ");
	scanf("%d",&n);
	
	int memo[n]={0};
	printf("The fibonanci series unitil %dth index is ",n);
	for(int i=1;i<n;i++)
	printf("%d, ",fibo_formula(i));
}
