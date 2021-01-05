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
