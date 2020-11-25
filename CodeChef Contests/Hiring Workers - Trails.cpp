/*
 22-11-2020 11:00
 Code Chef November Cook-off 2020 Division 2 ->Hiring Workers
 Contest Code:COOK124B Problem Code:HIRINGWO
 
 The question was pretty straight forward given an LCM m and a number K find the least sum of k group of numbers whose LCM is m
 
 The logic i followed was 
 ex:6
 find prime factorization =2*3
 add 2^1+3^1+k-(number of primes in prime factorization)
 
 Theres a loophole here condiser a number whose prime faxtorization m=(2^5)*(3^1) and k=2
 Acoording to my algo the answer will be 2^5+3^1+0=35
 But we can have a better answer like 2^4+(2*3)+0=22
 
 My logic failed
*/


#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int count=0;
	    int ping=0;
	    int flag=0;
	    int k,x;
	    scanf("%d%d",&k,&x);
	    int p=x;
	    while(x%2==0)
	    {
	       x/=2; 
	       flag=1;
	    }
	    if(flag)
	    {
	        ping++;
	        flag=0;
	    }
	    count+=p/x;
	    p=x;
	    printf("%d\t",count);
	    for(int i=3;i<x;i+=2)
	    {
	        while(x%i==0)
	        {
	            x/=i;
	            flag=1;
	        }
    	    if(flag)
    	    {
    	        ping++;
    	        flag=0;
    	        count+=p/x;
	            p=x;
	            printf("%d\t",count);
    	    }
	        
	    }
	    printf("%d\n",count+k-ping);
	}
	return 0;
}


