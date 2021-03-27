/*
 20:15 27-03-2021
 March Lunchtime 2021 Coding Competition Division 3 -> Racing
 Problem: RACINGEN Contest: LTIME94C

 In this question you will be intially givn about how much time you can rum, how much time you need to run toreach destination, how much time before which you need to reach destination
 For every second you take rest you gain 1unit of energy to run, for every sec you run you lose 1 unit of energy. Determine if she would be able to reach destination in time
 And btw she cant gain energy when she has x amount of energy which she started with even if she rests
 
 The soln is quite simple
 Check - 1: Find if required time <time limit
 Check - 2: Find if x=0 as she cant gain energy if she starts with x=0 
 Check - 3: Find if she could run without stop
 Check - 4: Find if the time taken by her to reach is less than the remaining time
*/
#include <stdio.h>

int main(void) {
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        long x,r,m;
        scanf("%ld%ld%ld",&x,&r,&m);
        long g=r*60-x;
        if(r>m)
            printf("NO\n");
        else if(x==0)
            printf("NO\n");
        else if(g<0)
        	printf("YES\n");
        else
        	{
        	    g*=2;
	        	long limit=((m)*60-x);
		        //printf("%d %d %d %ld %f\n",x,r,m,g,limit);
		        if(g<=limit)
		            printf("YES\n");
		        else
		            printf("NO\n");
			}
    }
	// your code goes here
	return 0;
}


