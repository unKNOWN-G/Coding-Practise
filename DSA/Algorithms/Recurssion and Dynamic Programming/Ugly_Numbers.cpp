/*
 20:34 07-01-2021
 Ugly Numbers
 
 Ugly Number is a Number which is either a multiple of 2 or 3 or 5
 
*/
#include<stdio.h>
int min(int a,int b)
{
	return a>b?b:a;
}
int Ugly_Number(int n)
{
	int i2=0,i3=0,i5=0,i=0;
	int next_multiple_of_2=2;
	int next_multiple_of_3=3;
	int next_multiple_of_5=5;
	int ugly[n];
	ugly[0]=1;
	int next;
	for(int i=1;i<n;i++)
	{
		next=min(next_multiple_of_2,min(next_multiple_of_3,next_multiple_of_5));
		ugly[i]=next;
		if(next==next_multiple_of_2)
		{
			i2++;
			next_multiple_of_2=ugly[i2]*2;
		}
		if(next==next_multiple_of_3)
		{
			i3++;
			next_multiple_of_3=ugly[i3]*3;
		}
		if(next==next_multiple_of_5)
		{
			i5++;
			next_multiple_of_5=ugly[i5]*5;
		}
	}
	return next;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("The %dth Ugly Number is %d\n",n,Ugly_Number(n));
	for(int i=0;i<n;i++)
	printf("%d ",Ugly_Number(i));
}
