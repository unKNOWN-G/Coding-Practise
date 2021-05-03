class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        
        i=0
        j=0
        minval = 100000000
        sums=0
        while(i<len(nums)):
            sums+=nums[i]
            while(sums>=target):
                if(i-j+1<minval):
                    minval=i-j+1
                sums-=nums[j]
                j+=1
            i+=1
        if(minval==100000000):
            return 0
        else:
            return minval
