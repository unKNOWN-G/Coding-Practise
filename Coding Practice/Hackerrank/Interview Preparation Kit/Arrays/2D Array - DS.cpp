/*
 10:30 29-12-2020
 Simple question we are asked to find the largest sum in the hourglass of given 2d array
 found the largest in all hourglass of the array by finding each sum and replacing highest with it if its more than present highest
*/

#include<stdio.h>
int main()
{
    int a[6][6];
    int largest=-100000;
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            int sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>largest)
            largest=sum;
        }
    }
    printf("%d",largest);
}

