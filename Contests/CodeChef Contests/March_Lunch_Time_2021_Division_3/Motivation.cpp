/*
 19:42 27-03-2021
 March Lunchtime 2021 Coding Competition Division 3 -> Motivation
 Problem: IMDB Contest: LTIME94C
 
 Find the highest rated movie that he can store
 
 The solution is quite simple. You will be given 4 inputs x,n,s,r where x denotes his storage space, n dentoes number of choices, then following n lines contain s,r pairs where s denote space and r denote rating
 Iterate through all the choices and if a choice Si<=x then compare with max element until before if its more then replace max with this number
 print max 
*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    int n,x;
	    scanf("%d%d",&n,&x);
	    int max=0;
	    for(int j=0;j<n;j++)
	    {
	        int a,b;
	        scanf("%d%d",&a,&b);
	        if(a<=x)
	            if(b>max)
	                max=b;
	    }
	    printf("%d\n",max);
	}
	return 0;
}


