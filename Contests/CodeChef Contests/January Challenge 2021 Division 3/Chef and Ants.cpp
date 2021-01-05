#include <stdio.h>
#include<stdlib.h>
long min(long a,long b)
{
    return a>b?b:a;
}

int compare (const void * a, const void * b) {
   return ( *(long*)a - *(long*)b );
}
//long cmpfunc (const void * a, const void * b)
//{
//	return ( *(long*)a - *(long*)b);
//}
int main() {
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    int n;
	    scanf("%d",&n);
	    long total[10001];
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        int m;
	        scanf("%d",&m);
	        for(int j=0;j<m;j++)
	        {
	            scanf("%d",&total[count]);
	            count++;
	        }
	    }
	    qsort(total,count,sizeof(long),compare);
	    int flag=count-1;
		int ping=1;
		int ling=0;
	    for(int i=0;i<count;i++)
	    {
	    	//printf("%ld\t",total[i]);
	        if(total[i]>0&&ping==1)
	        {
	            flag=ling+1;
	            ping=0;
	        }
	        if(total[i]==total[i+1])
	        continue;
	        ling++;
	    }
	    if(flag==count)
	    {
	    	if(total[count-1]>0)
	    	printf("%d\n",ling-1);
	    	else
	    	printf("0\n");
		}
		else
	    printf("%d\n",min(flag,ling-flag)*(ling-min(flag,ling-flag)));
	}
}

//      long *negative,*positive;
//	    negative=(long*)calloc(1000000001,sizeof(long));
//	    positive=(long*)calloc(1000000001,sizeof(long));
