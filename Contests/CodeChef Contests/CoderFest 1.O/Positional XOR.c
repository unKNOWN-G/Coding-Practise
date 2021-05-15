// Problem Code: PXORCF


#include <stdio.h>
int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	for (int i=0;i<test_cases;i++)
	{
	    long long int n;
	    scanf("%lld",&n);
	    int set=0;
    	int count=0;
        while(n>0)
        {
            if(n&1==1)
                set+=1;
            n>>=1;
            count+=1;
        }
        int odd1=0;
        int odd2=0;
        
        if(set%2==0)
            odd1=1;
        if(count%2==0)
            odd2=1;
            
    	printf("%d\n",odd1^odd2) ;
	}
}

