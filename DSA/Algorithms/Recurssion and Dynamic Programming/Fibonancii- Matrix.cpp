/*
 20:14 06-01-2021
 Dynamic Programming -> Fibonanci using Matrix
 
 Simple and powerful Logical:
 [[1 0]		 [[Fn+1	Fn]
 [0 1]] ^n = [Fn	Fn-1]]
 
 Repetative Multiplcation is done using divide and conquer method

*/
#include <stdio.h> 
  
void multiply(int F[2][2], int M[2][2]) 
{ 
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0]; 
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1]; 
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0]; 
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1]; 
  
  F[0][0] = x; 
  F[0][1] = y; 
  F[1][0] = z; 
  F[1][1] = w; 
} 

void power(int F[2][2], int n) 
{ 
  if( n == 0 || n == 1) 
      return; 
  int M[2][2] = {{1,1},{1,0}}; 
  
  power(F, n/2); 
  multiply(F, F); 
  
  if (n%2 != 0) 
     multiply(F, M); 
}  
  
int fib(int n) 
{ 
  int F[2][2] = {{1,1},{1,0}}; 
  if (n == 0) 
    return 0; 
  power(F, n-1); 
  return F[0][0]; 
}  

int main() 
{ 
  	int n;
	printf("Enter your index number in fibonanci Series ");
	scanf("%d",&n);
	
	int memo[n]={0};
	printf("The fibonanci series unitil %dth index is ",n);
	for(int i=1;i<n;i++)
	printf("%d, ",fib(i));
} 
