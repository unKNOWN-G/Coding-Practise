/*
 12:52 30-12-2020
 New Year Chaos
 
 Question:
	 In this question people are standing in a line and are names 1,2,3,4,5...n
	 A person on bac can bribe someone on front to come back. Like that every person can bribe only 2 people at max
	 So after bribing the order will be given we need to find number of bribes happened
 Solution:
 Firstly if the position shift of one particualr element is more than 2 upwards thn its flase print "Too Chaotic"
 
 I first thought of counting shifts from present position and then sum them all(because one shift created a +1 in one person and -1 in another)
 But there was a loophole in that. INitial order 4,5,6 Lets assume 5 has bribed 4 to go to his position and then 6 has bribed 4 in 5th place and then bribed 5 in 4th place. Apparently new order will be 6,5,4
 But my algo it gives only 2 bribes but actually 3 happened and we are ignoring one because it cgot compensated(bribes to 5 "+1 and then -1") . Hence this approach failed
 
 Next apparoach, In this approach we use the fact that if person a bribed person b . He can atmax be at on position higher than a's place (1 bribe to come to a's place and another to go to place above a)
 So we check how manypeople bribe me from my current postion to the position 2 steps above original position(how many numbers are more than current numbe in the interval original pos-2 to cureent position)
 Check this for every number then we are done
*/
#include<stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        int n;
        scanf("%d",&n);
        int sum=0,flag=0;
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(int j=0;j<n;j++)
        {
            int x=a[j];
            //printf("j=%d,num=%d,sum=%d\n",j,a[j],x-j-1);
            if(x-j-1>2)
            {
                flag=1;
                break;
            }
            for(int p=max(0,a[j]-2);p<=j;p++)
            {
                if(a[p]>a[j])
                sum++;
            }
        }
        if(flag)
        {
            printf("Too chaotic\n");
        }
        else {
        printf("%d\n",sum);
        }
    }
}

