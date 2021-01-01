/*
 10:45 01-01-2021
 January Challenge 2021 Division 3 -> Chef and Division 3
 Contest Code :              Problem Code: DIVTHREE
 
 The question was pretty straight given ith setter has made Ai problems and if we use k problems per day. Find the number of day we will last the question and chef wants to host this challenge for D days
 
 The logic that i followed was i found the total sum nd then find min of possible days and D(days chef wanted to conduct)
*/
 
#include <stdio.h>
int min(int a,int b)
{
    return a<b?a:b;
}
int main(void) {
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    int n,k,d;
	    scanf("%d%d%d",&n,&k,&d);
	    int sum=0;
	    for(int j=0;j<n;j++)
	    {
	        int x;
	        scanf("%d",&x);
	        sum+=x;
	    }
	    printf("%d\n",min(d,sum/k));
	}
}


