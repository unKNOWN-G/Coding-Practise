/*
 01-12-2020 13:03
 Factorial
 Practice : Easy   Problem Code: FCTRL

 Find the number of triling zeros at the end n factorial
 Here the limiting factor would be 5
 Logic is quite simple find number of numbers with factor of 5 and find find number of numbers with factor of 25(Because they have another 5) and find number of numbers with factor of 125....
 until we get 0 as quotient. Add them all
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		long x;
		scanf("%ld",&x);
		long sum=0;
		while(x>0)
		{
			sum+=x/5;
			x/=5;
		}
		printf("%ld\n",sum);	
	}
}
