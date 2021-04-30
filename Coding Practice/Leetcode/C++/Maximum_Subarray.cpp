/*
 13:05 12-01-2021
 LeetCode -> 53. Maximum Subarray
	
 The question is about finding maximum continuos subarray in the given subsequence
 
 Solution is finding if adding the sum until previous digit to present number makes it better or not if its ettr is it maximum or not
 Kadanes Algo
*/


int maxSubArray(int* nums, int numsSize){
    int dp[numsSize];
    dp[0]=nums[0];
    int max=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        dp[i]=dp[i-1]+nums[i]>=nums[i]?dp[i-1]+nums[i]:nums[i];
        if(max<dp[i])
            max=dp[i];
    }
    return max;

    }
