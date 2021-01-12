/*
 13:35 12-01-2021
 LeetCode -> 121. Best Time to Buy and Sell Stock
 
 The question is that we will be given an array of stock prices of a particular item in a series of days
 Find the max possible prfit that can be obtained
 
 The approach i followed is we will be having two variable local _min and a local_max where we will be storing the local minimum value and maximum value until we encoured
 Incase if a new local_min is obtained then the local_max is also changed to it as the previous one will be updated
 Incase of a new_local_max we need not update local_min  we just need to update local_max
 In each case we will comparing local_max-local_min with max and update max accourdingly
*/

int maxProfit(int* prices, int pricesSize){
    // int max=prices[1]-prices[0];
    // max=max>0?max:max*-1;
    if(pricesSize>=2)
    {
        int max=0;
    int local_min=prices[0];
    int local_max=prices[0];
    for(int i=0;i<pricesSize;i++)
    {
        if(prices[i]<local_min)
        {
            local_min=prices[i];
            local_max=prices[i];
        }
        if(prices[i]>local_max)
            local_max=prices[i];
        if(local_max-local_min>max)
            max=local_max-local_min;
    }
        return max;
    }
    return 0;
}
