/*
 12:00 02-01-2021
 January Challenge 2021 Division 3 -> Point Of Impact
 Contest Code :              Problem Code: BILLRD

 In this question we are given a rectangualr board of coordinates((0,0),(0,n),(n,n),(n,0)) and we strike a ball from a coordinate (x,y) at 45 degrees angle. The ball follows angle of incidence=angle of reflection property
 Whenever the ball hits a corner it comes to a halt
 We will be given a number K and we need to find the coordinates of ball at Kth collision of board incase it was in halt previously we need to rint that coordinate
 
 The logic that i followed here is
 1) The only possible corner that can be hit is (n,n) as initial projection angle is 45 degrees and no other coners can be hit. So to become halt x=y is the condition
 2) The second most intresting observation that acts a key to this question is the ball hits the same cooridinates over and over after collision 4
 3) Therefore c0,c1,c2,c3 are found and we found k%4 and accordingly printed the coordinates found using simple algebra
 4) There are two possible ways of moving 
 		a)x>y (initial coordinates)
		b)x<y (initial coordinates)  
	Accordingly coordinates are found and substituted
 5) Finally Coordinates are printed
*/
 
#include <stdio.h>
int main(void) {
            int num;
            scanf("%d",&num);
            for(int i=0;i<num;i++)
            {
                long n,k,x,y;
                scanf("%ld%ld%ld%ld",&n,&k,&x,&y);

				if(x==y)
				{
					x=n;
					y=n;
				}
				else if(x>y)
				{
					k=k%4;
					if(k==0)
					{
						x=x-y;
						y=0;
					}
					else if(k==1)
					{
						y=n+y-x;
						x=n;
					}
					else if(k==2)
					{
						x=n+y-x;
						y=n;
					}
					else if(k==3)
					{
						y=x-y;
						x=0;
					}				
				}
				else
				{
					k=k%4;
					if(k==0)
					{
						y=y-x;
						x=0;
					}
					else if(k==1)
					{
						x=n+x-y;
						y=n;
					}
					else if(k==2)
					{
						y=n+x-y;
						x=n;
					}
					else if(k==3)
					{
						x=y-x;
						y=0;
					}
				}
				printf("%d %d\n",x,y);
            }
}


