/*
 22-11-2020 10:14
 Code Chef November Cook-off 2020 Division 2 ->Chef and IPC Certificates
 Contest Code:COOK124B Problem Code:IPCCERT
 
 Question was easy one just count all the cases whose sum of times is greater than given limit and no.of questions asked are less than limit or not
 Find total number of such participants
 
 Logic is quite simple first check questions crietria then add all tims using a loop  and check for eligibilty
 repeat this for all participants
*/

 
#include <stdio.h>

int main(void) {
    int count=0;
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int a[n][k+1];
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<k+1;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i][k]<=10)
	    {
	        int sum=0;
	        for(int j=0;j<k;j++)
	        {
	            sum+=a[i][j];
	        }
	        if(sum>=m)
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}


