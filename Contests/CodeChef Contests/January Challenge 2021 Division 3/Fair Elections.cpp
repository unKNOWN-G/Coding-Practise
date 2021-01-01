/*
 11:30 01-01-2021
 January Challenge 2021 Division 3 -> Fair Elections
 Contest Code :              Problem Code: FAIRELCT

 In this question we have 2 persons A,B are contesting for elections and we are given their pack wise votes. We want A to win elections . We can swap pack wise votes also inorder to make him win. FInd min number of swaps required ot make it happen. If it cant happen print -1
 
 The logic that I followed here is first i found sum of votes of A,B if votes of A>B then there's no need of swapping and we print 0 else we need swapping
 To get min swaps i swapped smallest pack in votes of A with largest pack of votes in B. 
 To achieve this I sorted A votes pack array in ascending and B votes pack array in Descending order
 And at each step i am changing the value of sum_a,sum_b that appears after swapping instead actual swapping and i kept this in a loop
 It breaks when Votes of A>Votes of B or ends when loop has run all swaps
 Finally comparing if swaps made A win or not if he won we printed swaps else we printed -1
*/
 
#include <stdio.h>
#include<stdlib.h>
int compare_a (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int compare_b (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}
int min(int a,int b)
{
    return a>b?b:a;
}
int main(void) {
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    int n,m;
	    scanf("%d%d",&n,&m);
	    int a[n],b[m];
	    long sum_a=0,sum_b=0;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        sum_a+=a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        scanf("%d",&b[i]);
	        sum_b+=b[i];
	    }
	    //printf("%d %d 0\n",sum_a,sum_b);
	    if(sum_a>sum_b)
	    printf("0\n");
	    else
	    {
	        qsort(a,n,sizeof(int),compare_a);
	        qsort(b,m,sizeof(int),compare_b);
	       // for(int i=0;i<m;i++)
	       // printf("%d\t",b[i]);
	        int count,ping=0;
	        int minimum=min(n,m);
	        for(int count=0;count<minimum;count++)
	        {
	            ping++;
	            sum_a=sum_a-a[count]+b[count];
	            sum_b=sum_b-b[count]+a[count];
	            if(sum_a>sum_b)
	            break;
	        }
	        if(sum_a>sum_b)
	        printf("%d\n",ping);
	        else
	        printf("-1\n");
	    }
	}
}


