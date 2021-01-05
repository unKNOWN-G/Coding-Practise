/*
 12:19 05-01-2021
 Mark and Toys
 
 Question is simple . Toys and prices will be given and mark has to buy max number of toys
 
 So the solution is sorting and making him least priced ones first thereby achiveing max toys
 The logic i used is sort using quicksort(inbuilt function) and then make him buy until his money ends
 
 An alternate and a beautiful logic is(O(n2) though)
 Mark will able to maximize the amount of toys he can buy by getting as many of the cheapest ones as his budget allows. This is a good tip torwards sorting the array - as well as this problem falling under the Sorting category, of course.

However, there is one interesting thing to notice. If you think about bubble sort, it always drags the highest value it can find to the far end of the array, repeating that process but stopping one position before each time, until the end poition matches the beggining the array, meaning that it is sorted. With that in mind, if we sort the array in a decreasing order, dragging the smallest value to the end, we can say for sure that the value at the end position after each iteration is the smallest one we found this round.

What does this mean? That you don't have to sort the entire array. After each bubble sort pass, make Mark buy the cheapest toy you found in it and deduct it from his budget. If you reach a point where he can't afford the cheapest toy in a pass, then he won't be able to afford any of the remaining and already have the maximum number of toys he could have bought, so you can abort your sorting there to save some time.
*/
#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n;
    int k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),compare);
    int i;
    for(i=0;i<n;i++)
    {
        if(k<a[i])
        {
            break;
        }
        else {
        k-=a[i];
        }
    }
    printf("%d",i);
}



