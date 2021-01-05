/*
 15:43 05-01-2021
 Interview Preparation kit -> Sorting -> Fraudulent Activity Notifications
 
 The Question is pretty straight forward. an array of length n will be given , number k will be given
 You need to find median in a[i:i+k] and find if(a[i+k+1]>2*median) repeat this until i=n-k-1
 
 1) The problem is we cant sort the array. Because at each step we would be leaving a[0] and attach a new number ad find median. Dorting changes postion of element initailly at a[0]
 2) Time complexity is anothr problem. Using quick or insertion sort crosses time
 3) Finding median is difficult in case of even k . In cas of odd its easy and direct. but case of even we need adjacent sum in the sorted sun array of a[i:i+k]
 4) Median is float
 
 The appoach i used to avoid sorting is use hash ,count sort 
 This was we can avoid actual sorting of array, in every iteration remove map[first element]-- and add map[new element]++
 next to find median i have 2 cases 
 a) k- odd   -----------> k/2 element in mapped array
 b) k- even ------------> sum of (k/2 element and k/2 +1 element) in mapped array
 		(i) when k/2 ,k/2+1 are different this you can find by p(plese refer logic in lines 30-45)
 		(ii) when they are same we return k/2 element
  next thing is you can use queue ds but i didnt use this time
*/

#include<stdio.h>
#include<stdlib.h>

float median_calculator(long map[],int k)
{
    int p=0;
    float median;
    for(int l=0;l<201;l++)
    {
        p+=map[l];
        if(k%2==1 && p>k/2)
        {
            median=l;
            break;
        }
        else if(k%2==0 && p==k/2)
        {
            int z=l;
            while(map[++z]==0)
            {}
            median=(l+z)/2.0;
            break;
        }
        else if(k%2==0 && p>k/2)
        {
            median=l;
            break;
        }
    }
    return median;
}

int main()
{
    long n,k;
    scanf("%ld%ld",&n,&k);
    int a[n];
    float median;
    long count=0;
    long map[201]={0};
    
    for(int i=0;i<k;i++)
    {
	    scanf("%d",&a[i]);
	    map[a[i]]++;
    }
    median=median_calculator(map,k);
    for(long i=k;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=2*median)
        count++;
    
        map[a[i]]++;
        map[a[i-k]]--;
        
        median=median_calculator(map,k);                      
    }   
    printf("%ld",count);
}
