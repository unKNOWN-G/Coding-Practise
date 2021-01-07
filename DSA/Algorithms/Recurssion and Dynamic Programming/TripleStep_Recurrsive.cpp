/*
 21:31 06-01-2021
 Dynamic Programming -> Triple Step Recurssion
 
 A child is running up a stair case with n steps . He can hop either 1 or 2 or 3 steps at a time. Find number of ways he cn reach top
 
 My approach is
 first lets dvelop a recurssive one and then develop a DP based approach
 F(n)=F(n-1)+F(n-2)+F(n-3)
*/

#include<stdio.h>
int TripleStep_Recurrsive(int n)
{
	if(n==0)
	return 1;
	if(n<0)
	return 0;
	
	return TripleStep_Recurrsive(n-1)+TripleStep_Recurrsive(n-2)+TripleStep_Recurrsive(n-3);
}
int main()
{
	int n;
	printf("Enter Number of Stairs ");
	scanf("%d",&n);
	printf("The number of ways in which he can go to the top of stairs is %d",TripleStep_Recurrsive(n));
}
 
