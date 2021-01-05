/*
 16:12 03-01-2021
 January Challenge 2021 Division 3 -> Chef and ants
 
 Find number of collisions 
 
 The logic that i followed is find how many are negativ,positive
 And i found by math that the number of collisions = min(postive_count,negative_count)[positive_count+negative_count-min(positive_count,negative_count)]
 This is found using analysis of cases 
 negative-1,positive-n, when then collide n collisions happen and last ball gets thrown out from both sides
 negative-2,positive-n, when they collide n collision happen whn first ball strikes and the out ball goes out on right side similarly the outer balls goes on left side i.e negative side too
 And the case of negative -1 and positive- n-1 repeats
 Similary extending this to negative-a,positive-b
 ["b"-1+"a"]+["b-1"-1+"a-1"]+.........until left or right becomes 0
 =min(a,b)[a+b]-[1+3+...]
 =min(a,b)[a+b]-min(a,b)^2
 =min(a,b)[a+b-min(a,b)]
*/
 
#include <stdio.h>
#include<stdlib.h>
long min(long a,long b)
{
    return a>b?b:a;
}

int compare (const void * a, const void * b) {
   return ( *(long*)a - *(long*)b );
}
int main() {
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    long n;
	    scanf("%ld",&n);
	    long total[10000001];
	    long count=0;
	    for(long i=0;i<n;i++)
	    {
	        long m;
	        scanf("%ld",&m);
	        for(long j=0;j<m;j++)
	        {
	            scanf("%ld",&total[count]);
	            count++;
	        }
	    }
	    qsort(total,count,sizeof(long),compare);
	    long flag=-1;
	    int ping=1;
		long ling=0;
		int zing=0;
		
        if(total[0]<0)
        {
            for(int i=0;i<count;i++)
            {       
	        	if(total[i]>0&&ping==1)
		        {
		            flag=ling;
		            ping=0;
		        }
		        if(total[i]==total[i+1])
		        continue;
		        ling++;
		       }
         }
		else
		{
			zing=1;
		}
	    if(zing)
	    printf("0\n");
	    else if(flag==-1)
	    {
	    	if(total[count]>0)
	    	printf("%ld\n",ling-1);
	    	else
	    	printf("0\n");
		}
		else
		{
		    long minimum=min(flag,ling-flag);
		    long answer=minimum;
		    answer*=(ling-minimum);
	        printf("%ld\n",answer);
		}
	}
}
