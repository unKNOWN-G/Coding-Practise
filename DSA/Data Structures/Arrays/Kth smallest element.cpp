/*
 07:30 05-05-2021
 Kth smallest element
 
 Question is simple, You need to find kth smallest element
 
 My apprach is, I am using bucket sort and then counting elements from starting abnd using that i am finding kth smallest
*/

int kthSmallest(int arr[], int l, int r, int k)
    {
        int length = r+1; 
        //printf("%d",length);
        int ping[100001]={0};
        int i;
        
        for(i=0;i<length;i++)
            ping[arr[i]]++;
        
        for(i=0;i<100001;i++)
            {
                k-=ping[i];
            int val = i;
            if(k<=0)
                return val;
            }
                
    }
