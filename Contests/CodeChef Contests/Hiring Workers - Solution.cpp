/*
 26-11-2020 00:52
 Code Chef November Cook-off 2020 Division 2 ->Hiring Workers
 Contest Code:COOK124B Problem Code:HIRINGWO
 
 The question was pretty straight forward given an LCM m and a number K find the least sum of k group of numbers whose LCM is m
 
 The place where i got fooled was, I thought if a number (2^5*3) is there i htought i could wite it in Example case (2^3*(2^2*3))
 Hence i thought the least sum can contin such cases. But when i see those cases its obvious that their LCM changes too. Prrevious it 32*3 , now it is (2^3)*3
 Therefore the the "prime array" contains numbers of all prime factorized only (2^a1,3^a2,5^a3.....)
 
 We have 3 cases now
 Case -1 : len(prime array)<k
 			Keep all those elements of array and fill the rest with 1's
 Case -2 : len(prime array)=k
 			Keep all those elements of array
 Case -3 : len(prime array)>k
 			In this case we need a only k elements but we need all prime factors. So we have to multiply numbers and check for the combination which gives the least
 			This is done using Recurrsion

*/

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
	    int k,x;
		int flag=0;
		int ping=0;
	    int prime_array[10];
	    scanf("%d%d",&k,&x);
	    int p=x;
	    while(x%2==0)
	    {
	       x/=2; 
	       flag=1;
	    }
	    if(flag)
	    {
	        prime_array[ping]=p/x;
	        ping++;
	        p=x;
	        flag=0;
	    }
	    for(int i=3;i<x;i+=2)
	    {
	        while(x%i==0)
	        {
	            x/=i;
	            flag=1;
	        }
    	    if(flag)
    	    {
    	        prime_array[ping]=p/x;
	        	ping++;
	        	p=x;
	        	flag=0;
    	    }
	    }
	    printf("%d\n",ping);
	    for(int i=0;i<=ping;i++)
	    {
	    	printf("%d\t",prime_array[i]);
		}
	    if(1);
	}
	return 0;
}


