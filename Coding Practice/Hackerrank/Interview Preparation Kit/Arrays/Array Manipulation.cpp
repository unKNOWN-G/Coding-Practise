/*
 15:51 30-12-2020
 Array Manuplation
 In this question you will first be given a size of array, then k queries with each query giving starting index,ending index and sum to be incremeted in those indices starting from starting index to ending index
 
 Method 1:
 My initial approach was to create a array a[n]
 Run each query and increment each number fromt he start index to end index by that cost  and verify if its the largest at each step
 Time Complexity : O(n2)
 
 Method 2:
 But theres more better solution that i found to this question
 In that solution he incremented starting index of a query with cost and decremented ending index by that amount
 Than ran a variable from i=1 to n and added each element and verified if its the largest sum. if yes stored the largest it that largest variable
 Time Complexity : O(n)
 
 Things learnt:
 Dynamic allocation is better. use calloc if you need to initialize with zeros
 ptr = (float*) calloc(25, sizeof(float));
*/

#include<stdio.h>
#include<stdlib.h>
long min(long a,long b)
{
    return a<b?a:b;
}
int main()
{
    long long n,k;
    scanf("%lld%lld",&n,&k);
    long *a;
    a = (long*)calloc((n+1), sizeof(long)); 
    long long largest=a[0];
    
	//Method -1
	
	/*
	 for(long long i=0;i<k;i++)
     {
         long long z,b;
         long long w;
         scanf("%lld%lld%lld",&z,&b,&w);
         for(long long p=min(z,n);p<=min(b,n);p++)
         {
             a[p]+=w;
             if(a[p]>largest)
             largest=a[p];
         }
     }
	*/

	//Method -2
	
    for(long i=0;i<k;i++)
    {
        long x,y,w;
        scanf("%ld%ld%ld",&x,&y,&w);
                    a[x]+=w;
        if(y+1<=n)
        {
            a[y+1]-=w;
        }
    }
    long long z=a[0];
    for(long i=1;i<=n;i++)
    {
        z+=a[i];
        if(z>largest)
        largest=z;
        
    }
    printf("%lld",largest);
}
