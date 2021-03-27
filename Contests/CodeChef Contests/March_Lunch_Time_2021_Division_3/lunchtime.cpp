/*
 21:05 27-03-2021
 March Lunchtime 2021 Coding Competition Division 3 -> Lunchtime
 Problem: LUNCHTIM Contest: LTIME94C
 
 In this question you are asked to check how many people can ith person see of same height in an array of A1,A2....An
 i and j (i<j) can see each other if for each integer k (i<k<j), Ak=Ai,Aj.  
 
 The solution is quite simple check on both sides if there are any numbers equal to Ai with the boudary conditions and the conditiojn to quit is someone bigger is spotted on the path
*/
 
#include <stdio.h>

int main(void) {
	// your code goes here
	
	int num;
	scanf("%d",&num);
	for(int k=0;k<num;k++)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int j=0;j<n;j++)
	        scanf("%d",&a[j]);
	    for(int i=0;i<n;i++)
	    {
	        int ping=i-1;
	        int count=0;
	        while(ping>0 && a[ping]<=a[i])
	        {
	            if(a[ping]==a[i])
	                count++;
	            ping--;
	        }
	        int ling=i+1;
	        while(ling<n && a[ling]<=a[i])
	        {
	            if(a[ling]==a[i])
	                count++;
	            ling++;
	        }
	        printf("%d ",count);
	    }
	}
	return 0;
}


