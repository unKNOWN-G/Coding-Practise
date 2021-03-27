/*
 21:50 27-03-2021
 March Lunchtime 2021 Coding Competition Division 3 -> Turn It
 Problem: NFS Contest: LTIME94C  

 In this question you will be given present veloicty u, decelaration possible a and max distance left s and the needed speed limit v
 We need to find if its possible to reach or not
 
 Simple only. Just use v^2=u^2+2*a*s and find if we will be able to achieve the final velocity within reach. Remember that its decelrating so a will be negative
*/
#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    int u,v,a,s;
	    float r;
	    scanf("%d%d%d%d",&u,&v,&a,&s);
	    float val =pow(u,2)-2*a*s;
	    if(val<0)
	    	printf("Yes\n");
	    else
	    	{
	    		r=pow(val,0.5);
				//printf("%f , %f\n",r,v);
			    if(r<=v)
			        printf("Yes\n");
			    else
			        printf("No\n");
			}
	}
	return 0;
}


