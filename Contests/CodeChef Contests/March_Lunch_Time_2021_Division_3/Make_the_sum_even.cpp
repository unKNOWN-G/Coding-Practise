/*
 20:00 27-03-2021
 March Lunchtime 2021 Coding Competition Division 3 -> Make the Sum Even
 Problem: MKSMEVN Contest: LTIME94C
 
 You will be given a sequence of number A1,A2....AN you can replace Ai with Ai^p where p=max(0,[Ai/2]-1)
 Find max number of elements you need to change to get even sum
 
 Here notice that theres no use of this operation in any number other than 2
 Because any other number of you do this operation the odd will be odd and even will be even only. Only in case of 2 it becomes 1
 Hence first find if sum is even or not. If even return 0; if odd then find if a 2 exist, if it exists then print 1 else print -1 as it isnt possible 
*/

#include <stdio.h>
int main(void) {
	// your code goes here
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int flag=0;
	    int sum=0;
	    for(int j=0;j<n;j++)
        {
            int x;
            scanf("%d",&x);
            if(x==2)
                flag=1;
            sum+=x;
        }
	    if(sum%2==0)
	        printf("0\n");
	    else
	        {
	            if(flag==1)
	                printf("1\n");
	            else
	                printf("-1\n");
	        }   
	}
	return 0;
}


