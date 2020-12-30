/*
 11:00 29-12-2020
 Same old array revrsal of k units
 Logic followed is reverse arr[0:k-1] then arr[k:n-1] then arr[0:n-1]
*/
#include<stdio.h>

void reversal(int arr[],int low,int high)
{
    while(low<high)
    {
      int temp=arr[low];
      arr[low]=arr[high];
      arr[high]=temp;
      low++;
      high--; 
    }
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    reversal(arr,0,k-1);
    reversal(arr,k,n-1);
    reversal(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    
    
}


