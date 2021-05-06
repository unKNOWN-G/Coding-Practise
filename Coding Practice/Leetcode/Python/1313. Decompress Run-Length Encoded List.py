class Solution(object):
    def decompressRLElist(self, nums):
        ans = []
        for i in range(0,len(nums)):
            if(i%2==0):
                ans.extend([nums[i+1]]*nums[i])
        return ans
        