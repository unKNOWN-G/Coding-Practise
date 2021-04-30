class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count=[0]*101
        sum=0
        for i in range(len(nums)):
            count[nums[i]]+=1
        for i in range(0,101):
            if(count[i]>=2):
                sum+=((count[i]-1)*(count[i]))/2
        return int(sum)