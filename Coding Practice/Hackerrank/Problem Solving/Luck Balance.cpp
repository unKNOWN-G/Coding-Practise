/*
 17:22 30-12-2020
 Luck Balance         Previous rank : 18798			Current rank : 18373

 Question is simple we will be given an n,k denoting the no of games kinda and no of times luck can be ignored
 Example if input is 
  STDIN 
 ¯¯¯¯¯¯
 6 		3   ->n,k       
 luck importance           
 5 		1         
 2 		1
 1 		1
 8 		1
 10 	0
 5 		0
 
 SO the thing is we can add the luck with no importance(0) to total sum but if we add luck with losing k games of importance(1) we can add that luck but we need to subract the luck of games won
 We need the maximum luck that can be obtained at end of all games
 
 My approach: 
 while taking input keep the luck of important games in an array,add the luck of non important to sum
 then sort the important array in desecnding order
 add the first k elements
 subract the elements from k:n
 print sum
 
 Time Complexity :O(n)
 
 Things Learnt:
 1) Calloc allocation
 2) qsort function in c
 
*/

#include<stdio.h>
#include<stdlib.h>
int compare (int * a, int * b) {
   return ( *b - *a );
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int *a;
    a=(int*)calloc(n,sizeof(int));
    int p=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(y==1)
        {a[p]=x;
        p++;}
        else {
        sum+=x;
        }
    }
    qsort(a,p, sizeof(int), compare);
    for(int i=0;i<k;i++)
    sum+=a[i];
    for(int i=p-1;i>=k;i--)
    sum-=a[i];
    // for(int i=0;i<p;i++)
    // printf("%d ",a[i]);
    printf("%d",sum);
}
