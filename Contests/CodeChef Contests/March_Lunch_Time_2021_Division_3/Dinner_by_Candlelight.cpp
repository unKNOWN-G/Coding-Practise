/*
 21:30 27-03-2021
 March Lunchtime 2021 Coding Competition Division 3 -> Dinner by Candlelight 
 Problem: DATE1 Contest: LTIME94C
 
 In this question you are given an infintie supply of candels and each candle will be on for Y seconds, and can lit X candels in 1 second. A person comes after A seconds you need to tell maximum number of candels can you keep onat that time
 
 Solution is Quite simple You need to consider 3 cases:
 	Case - 1 : a<y => The candels can be on for more time than the persons arrival = a*x+1(Here 1 is for initial candel)
 	Case - 2 : a=y => Same reason as above but the intial candel with put off = a*x
 	Case - 3 : a>y => If a>y then the number of candels that can be lit = y*x
*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    long a,y,x;
	    scanf("%ld%ld%ld",&a,&y,&x);
	    if(a<y)
	        printf("%ld\n",a*x+1);
	    else if(a==y)
	        printf("%ld\n",a*x);
	    else
	        {
	            printf("%ld\n",y*x);
	        }
	}
	return 0;
}
